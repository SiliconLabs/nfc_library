/***************************************************************************//**
 * @file   tag_dbg.h
 * @brief  Tag debug helper functions.
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

/* ...
*
* EXPERIMENTAL QUALITY
* This code has not been formally tested and is provided as-is.  It is not suitable for production environments.
* This code will not be maintained.
*
... */

#ifndef __TAG_DEBUG_H__
#define __TAG_DEBUG_H__

#include "../../common/inc/nfc_dbg.h"

#if (TAG_DBG == 1)

#include <stdio.h>
#include "../../common/inc/serial.h"

#define tag_log(...)            printf(__VA_ARGS__)
#define tag_log_ln(...) {                            \
                                printf(__VA_ARGS__); \
                                printf("\r\n");      \
                         }

#define t4t_apdu_log(apdu, len) serial_put_hex(apdu, len)


#else

#define tag_log(...)
#define tag_log_ln(...)

#define t4t_apdu_log(apdu, len)

#endif

#endif