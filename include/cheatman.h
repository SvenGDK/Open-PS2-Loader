/*
 * Manage cheat codes
 *
 * Copyright (C) 2009-2010 Mathias Lafeldt <misfire@debugon.org>
 * Copyright (C) 2014 doctorxyz
 *
 * This file is part of PS2rd, the PS2 remote debugger.
 *
 * PS2rd is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * PS2rd is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with PS2rd.  If not, see <http://www.gnu.org/licenses/>.
 *
 * $Id$
 */

#ifndef _CHEATMAN_H_
#define _CHEATMAN_H_

#include "opl.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <fcntl.h>
#include <malloc.h>
#include <ctype.h>
#include <string.h>

#define CHEAT_VERSION "0.5.3.65.g774d1"

#define MAX_HOOKS 5
#define MAX_CODES 250
#define MAX_CHEATLIST (MAX_HOOKS * 2 + MAX_CODES * 2)

/* Some character defines */
#define NUL 0x00
#define LF 0x0A
#define CR 0x0D
#define SPACE 0x20
/* Number of digits per cheat code */
#define CODE_DIGITS 16

/**
 * code_t - a code object
 * @addr: code address
 * @val: code value
 */
typedef struct
{
    int addr;
    int val;
} code_t;

void InitCheatsConfig(config_set_t *configSet);
int GetCheatsEnabled(void);
const int *GetCheatsList(void);
int load_cheats(const char *cheatfile);

#endif /* _CHEATMAN_H_ */
