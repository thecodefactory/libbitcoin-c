/**
 * Copyright (c) 2011-2016 libbitcoin developers (see AUTHORS)
 *
 * This file is part of libbitcoin.
 *
 * libbitcoin is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License with
 * additional permissions to the one published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version. For more information see LICENSE.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef LIBBITCOIN_C_BASE_64_H
#define LIBBITCOIN_C_BASE_64_H

#include <stdbool.h>
#include <stdint.h>
#include <bitcoin/bitcoin/c/utility/data.h>
#include <bitcoin/bitcoin/c/utility/string.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Encode data as base64.
 * @return the base64 encoded string.
 */
bc_string_t* bc_encode_base64(const bc_data_chunk_t* unencoded);

/**
 * Attempt to decode base64 data.
 * @return false if the input contains non-base64 characters.
 */
bool bc_decode_base64(bc_data_chunk_t* out, const char* in);

#ifdef __cplusplus
}
#endif

#endif

