/*******************************************************************************
 *
 *                             Messenger Backend
 *                      Copyright (C) 2017 Björn Petersen
 *                   Contact: r10s@b44t.com, http://b44t.com
 *
 * This program is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program.  If not, see http://www.gnu.org/licenses/ .
 *
 *******************************************************************************
 *
 * File:    mrstock.h
 * Purpose: Add translated strings that are used by the messager backend
 *
 ******************************************************************************/


#ifndef __MRSTOCK_H__
#define __MRSTOCK_H__
#ifdef __cplusplus
extern "C" {
#endif


#define MR_STR_FREE_            0 /* the IDs must not change! No gaps, please. */
#define MR_STR_NOMESSAGES       1
#define MR_STR_SELF             2
#define MR_STR_DRAFT            3
#define MR_STR_MEMBER           4
#define MR_STR_CONTACT          6
#define MR_STR_VOICEMESSAGE     7
#define MR_STR_DEADDROP         8
#define MR_STR_IMAGE            9
#define MR_STR_VIDEO            10
#define MR_STR_AUDIO            11
#define MR_STR_FILE             12
#define MR_STR_STATUSLINE       13
#define MR_STR_NEWGROUPDRAFT    14
#define MR_STR_MSGGRPNAME       15
#define MR_STR_MSGGRPIMAGE      16
#define MR_STR_MSGADDMEMBER     17
#define MR_STR_MSGDELMEMBER     18
#define MR_STR_MSGGROUPLEFT     19
#define MR_STR_ERROR            20
#define MR_STR_SELFNOTINGRP     21
#define MR_STR_NONETWORK        22
#define MR_STR_GIF              23


/*** library-private **********************************************************/


/* should be set up by mrmailbox_new() */
extern mrmailbox_t* s_localize_mb_obj;


/* Return the string with the given ID by calling MR_EVENT_GET_STRING.
The result must be free()'d! */
char* mrstock_str (int id);


/* Replaces the first `%1$s` in the given String-ID by the given value.
The result must be free()'d! */
char* mrstock_str_repl_string (int id, const char* value);
char* mrstock_str_repl_int    (int id, int value);


/* Replaces the first `%1$s` and `%2$s` in the given String-ID by the two given strings.
The result must be free()'d! */
char* mrstock_str_repl_string2 (int id, const char*, const char*);


/* Return a string with a correct plural form by callint MR_EVENT_GET_QUANTITY_STRING.
The result must be free()'d! */
char* mrstock_str_repl_pl (int id, int cnt);


#ifdef __cplusplus
} /* /extern "C" */
#endif
#endif /* __MRSTOCKSTR_H__ */

