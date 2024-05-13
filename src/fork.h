// Copyright (c) 2016-2024 The CryptoCoderz Team / Espers
// Copyright (c) 2018-2024 The Rubix project
// Copyright (c) 2022-2024 The FrogCoin project
// Copyright (c) 2023      The DigitalKash project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_FORK_H
#define BITCOIN_FORK_H

#include "bignum.h"

/** Reserve Phase start block */ 
static const int64_t nReservePhaseStart = 1;
/** Velocity toggle block */
static const int64_t VELOCITY_TOGGLE = 175; // Implementation of the Velocity system into the chain.
/** Velocity retarget toggle block */
static const int64_t VELOCITY_TDIFF = 0; // Use Velocity's retargetting method.
/** Velocity retarget toggle block */
static const int64_t VELOCITY_THRESHOLD_2 = 162858; // Update Velocity retarget threshold.
/** Protocol 3.0 toggle */
inline bool IsProtocolV3(int64_t nTime) { return TestNet() || nTime > 1493596800; } // Mon, 01 May 2017 00:00:00 GMT
/** Emissions output 2.0 toggle */
inline bool IsEmissionsV2(int64_t nTime) { return TestNet() || nTime > 1684313645; } // Wednesday, May 17, 2023 8:54:05 AM
#endif // BITCOIN_FORK_H
