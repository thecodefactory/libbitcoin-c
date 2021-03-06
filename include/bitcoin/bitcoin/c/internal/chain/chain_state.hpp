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
#ifndef LIBBITCOIN_C_INTERNAL_CHAIN_CHAIN_STATE_HPP
#define LIBBITCOIN_C_INTERNAL_CHAIN_CHAIN_STATE_HPP

#include <bitcoin/bitcoin/c/chain/chain_state.h>

#include <bitcoin/bitcoin/chain/chain_state.hpp>

extern "C" {

struct bc_chain_state_bitss_t
{
    libbitcoin::chain::chain_state::bitss* obj;
    bool delete_obj;
};

struct bc_chain_state_versions_t
{
    libbitcoin::chain::chain_state::versions* obj;
    bool delete_obj;
};

struct bc_chain_state_timestamps_t
{
    libbitcoin::chain::chain_state::timestamps* obj;
    bool delete_obj;
};

struct bc_chain_state_range_t
{
    libbitcoin::chain::chain_state::range* obj;
};

struct bc_chain_state_t
{
    libbitcoin::chain::chain_state* obj;
};

} // extern C

#endif

