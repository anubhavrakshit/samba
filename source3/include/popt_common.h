/* 
   Unix SMB/CIFS implementation.
   Common popt arguments
   Copyright (C) Jelmer Vernooij	2003
   
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef _POPT_COMMON_H
#define _POPT_COMMON_H

#include <popt.h>

/* Common popt structures */
extern struct poptOption popt_common_samba[];
extern struct poptOption popt_common_connection[];
extern struct poptOption popt_common_configfile[];
extern struct poptOption popt_common_version[];
extern struct poptOption popt_common_credentials[];
extern struct poptOption popt_common_debuglevel[];
extern struct poptOption popt_common_option[];
extern const struct poptOption popt_common_dynconfig[];

#ifndef POPT_TABLEEND
#define POPT_TABLEEND { NULL, '\0', 0, 0, 0, NULL, NULL }
#endif

#define POPT_COMMON_SAMBA { NULL, 0, POPT_ARG_INCLUDE_TABLE, popt_common_samba, 0, "Common samba options:", NULL },
#define POPT_COMMON_CONNECTION { NULL, 0, POPT_ARG_INCLUDE_TABLE, popt_common_connection, 0, "Connection options:", NULL },
#define POPT_COMMON_VERSION { NULL, 0, POPT_ARG_INCLUDE_TABLE, popt_common_version, 0, "Common samba options:", NULL },
#define POPT_COMMON_CONFIGFILE { NULL, 0, POPT_ARG_INCLUDE_TABLE, popt_common_configfile, 0, "Common samba config:", NULL },
#define POPT_COMMON_DYNCONFIG { NULL, 0, POPT_ARG_INCLUDE_TABLE, \
    discard_const_p(poptOption, popt_common_dynconfig), 0, \
    "Build-time configuration overrides:", NULL },
#define POPT_COMMON_DEBUGLEVEL { NULL, 0, POPT_ARG_INCLUDE_TABLE, popt_common_debuglevel, 0, "Common samba debugging:", NULL },
#define POPT_COMMON_OPTION { NULL, 0, POPT_ARG_INCLUDE_TABLE, popt_common_option, 0, "Common samba commandline config:", NULL },

#endif /* _POPT_COMMON_H */
