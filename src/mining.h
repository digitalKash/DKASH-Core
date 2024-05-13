// Copyright (c) 2016-2024 The CryptoCoderz Team / Espers
// Copyright (c) 2018-2024 The CryptoCoderz Team / INSaNe project
// Copyright (c) 2018-2024 The Rubix project
// Copyright (c) 2022-2024 The FrogCoin project
// Copyright (c) 2023      The DigitalKash project
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef BITCOIN_MINING_H
#define BITCOIN_MINING_H

#include "bignum.h"
#include "fork.h"
/** Minimum nCoinAge required to stake PoS */
static const unsigned int nStakeMinAge = 2 * 60; // 2 Hours
/** Time to elapse before new modifier is computed */
static const unsigned int nModifierInterval = 2 * 60;
/** Genesis block subsidy */
static const int64_t nGenesisBlockReward = 1 * COIN;
/** Reserve block subsidy */
static const int64_t nBlockRewardReserve = 420000 * COIN; // premine 42,000,000 DKASH
/** Standard block subsidy */
static const int64_t nBlockStandardReward = (1.1 * COIN); // 1.1 DKASH
/** Update v2 block subsidy */
static const int64_t nBlockV2Reward = (2.5 * COIN); // 2.5 DKASH
/** Block spacing preferred */
static const int64_t BLOCK_SPACING = (1 * 60); // One Minute (1 Min)
/** Block spacing minimum */
static const int64_t BLOCK_SPACING_MIN = (20); // Twenty Seconds (20 Sec)
/** Block spacing maximum */
static const int64_t BLOCK_SPACING_MAX = (75); // One-minute Fifteen-seconds (1 Min 15 sec)
/** Desired block times/spacing */
static const int64_t GetTargetSpacing = BLOCK_SPACING;
/** MNengine collateral */
static const int64_t MNengine_COLLATERAL = (1 * COIN);
/** MNengine pool values */
static const int64_t MNengine_POOL_MAX = (999 * COIN);
/** MasterNode required collateral */
inline int64_t MasternodeCollateral(int nHeight) { return 1000000; } // ON (1,000,000 DKASH)
/** PubkeyAliasService required fee */
inline int64_t PubkeyaliasserviceFEE(int nHeight) { return 75; } // ON (75 DKASH)
/** Coinbase transaction outputs can only be staked after this number of new blocks (network rule) */
static const int nStakeMinConfirmations = 30;
/** Coinbase transaction outputs can only be spent after this number of new blocks (network rule) */
static const int nTransactionMaturity = 5; // 5-TXs
/** Coinbase generated outputs can only be spent after this number of new blocks (network rule) */
static const int nCoinbaseMaturity = 20; // 20-Mined


#endif // BITCOIN_MINING_H
