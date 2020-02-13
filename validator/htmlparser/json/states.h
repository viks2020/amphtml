//
// Copyright 2019 The AMP HTML Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS-IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the license.
//
// ===============================
// AUTOGENERATED FILE. DO NOT EDIT
// ===============================

// Run: bin/grammargen to regenerate this file.

#ifndef HTMLPARSER__JSON_STATES_H_
#define HTMLPARSER__JSON_STATES_H_

#include <array>

namespace htmlparser::json {

enum class StateCode {
  $ = 0,
  ARRAY_END = 1,
  ARRAY_FIRST_ITEM = 2,
  ARRAY_NEXT_ITEM = 3,
  ARRAY_SEPARATOR = 4,
  FALSE_1 = 5,
  FALSE_2 = 6,
  FALSE_3 = 7,
  FALSE_4 = 8,
  NULL_1 = 9,
  NULL_2 = 10,
  NULL_3 = 11,
  NUMBER = 12,
  NUMBER_AFTER_E_DIGIT_NOTATION = 13,
  NUMBER_AFTER_E_NOTATION = 14,
  NUMBER_AFTER_HYPHEN = 15,
  NUMBER_AFTER_PERIOD = 16,
  NUMBER_AFTER_PERIOD_DIGIT = 17,
  NUMBER_AFTER_PLUS_MINUS_AFTER_E_NOTATION = 18,
  NUMBER_AFTER_ZERO = 19,
  OBJECT = 20,
  OBJECT_END = 21,
  OBJECT_KEY = 22,
  OBJECT_KEY_BEGIN_QUOTE = 23,
  OBJECT_SEPARATOR = 24,
  OBJECT_VALUE = 25,
  STRING = 26,
  STRING_ESCAPE = 27,
  TRUE_1 = 28,
  TRUE_2 = 29,
  TRUE_3 = 30,
  UNICODE_HEX_CHAR_FIRST = 31,
  UNICODE_HEX_CHAR_LAST = 32,
  UNICODE_HEX_CHAR_SECOND = 33,
  UNICODE_HEX_CHAR_THIRD = 34,
};

enum class CallbackCode {
  // TODO: Implement callbacks.
};


// Extracts CallbackCode from the bytes.
inline static uint8_t ToCallbackCode(uint32_t code);

// Extracts push StateCode from the bytes.
inline static uint8_t ToPushStateCode(uint32_t code);

// Extracts active State code from the bytes.
inline static uint8_t ToCurrentStateCode(uint32_t code);

// Returns code for current token and active state.
inline static uint32_t CodeForToken(char c, uint8_t state);

// Checks the push bit is on.
inline static bool HasPushBit(uint32_t code);

// Checks the push bit is off.
inline static bool HasPopBit(uint32_t code);

constexpr std::array<int, 127> kTokenIndexes {
    44, 44, 44, 44, 44, 44,
    44, 44, 44, 0 /* TAB */, 1 /* LF */, 44,
    2 /* FF */, 44, 44, 44, 44, 44,
    44, 44, 44, 44, 44, 44,
    44, 44, 44, 44, 44, 44,
    44, 44, 3 /*   */, 44, 4 /* " */, 44,
    44, 44, 44, 44, 44, 44,
    44, 5 /* + */, 6 /* , */, 7 /* - */, 8 /* . */, 9 /* / */,
    10 /* 0 */, 11 /* 1 */, 12 /* 2 */, 13 /* 3 */, 14 /* 4 */, 15 /* 5 */,
    16 /* 6 */, 17 /* 7 */, 18 /* 8 */, 19 /* 9 */, 20 /* : */, 44,
    44, 44, 44, 44, 44, 21 /* A */,
    22 /* B */, 23 /* C */, 24 /* D */, 25 /* E */, 26 /* F */, 44,
    44, 44, 44, 44, 44, 44,
    44, 44, 44, 44, 44, 44,
    44, 44, 44, 44, 44, 44,
    44, 27 /* [ */, 28 /* \ */, 29 /* ] */, 44, 44,
    44, 30 /* a */, 31 /* b */, 32 /* c */, 33 /* d */, 34 /* e */,
    35 /* f */, 44, 44, 44, 44, 44,
    36 /* l */, 44, 37 /* n */, 44, 44, 44,
    38 /* r */, 39 /* s */, 40 /* t */, 41 /* u */, 44, 44,
    44, 44, 44, 42 /* { */, 44, 43 /* } */,
    44, };

constexpr std::array<std::array<uint32_t, 46>, 35> kParseStates {{
    // $
    // Code: 0
    {0x0 /* TAB */, 0x0 /* LF */, 0x0 /* FF */, 0x0 /*   */,
     0x1a00 /* " */, 0xff /* + */, 0xff /* , */, 0xf00 /* - */,
     0xff /* . */, 0xff /* / */, 0x1300 /* 0 */, 0xc00 /* 1 */,
     0xc00 /* 2 */, 0xc00 /* 3 */, 0xc00 /* 4 */, 0xc00 /* 5 */,
     0xc00 /* 6 */, 0xc00 /* 7 */, 0xc00 /* 8 */, 0xc00 /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0x200 /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0x500 /* f */,
     0xff /* l */, 0x900 /* n */, 0xff /* r */, 0xff /* s */,
     0x1c00 /* t */, 0xff /* u */, 0x1400 /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // ARRAY_END
    // Code: 1
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0x40 /* \u */, 0x40 /* .* */},
    // ARRAY_FIRST_ITEM
    // Code: 2
    {0x200 /* TAB */, 0x200 /* LF */, 0x200 /* FF */, 0x200 /*   */,
     0x41a80 /* " */, 0xff /* + */, 0xff /* , */, 0x40f80 /* - */,
     0xff /* . */, 0xff /* / */, 0x41380 /* 0 */, 0x40c80 /* 1 */,
     0x40c80 /* 2 */, 0x40c80 /* 3 */, 0x40c80 /* 4 */, 0x40c80 /* 5 */,
     0x40c80 /* 6 */, 0x40c80 /* 7 */, 0x40c80 /* 8 */, 0x40c80 /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0x40280 /* [ */,
     0xff /* \ */, 0x40 /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0x40580 /* f */,
     0xff /* l */, 0x40980 /* n */, 0xff /* r */, 0xff /* s */,
     0x41c80 /* t */, 0xff /* u */, 0x41480 /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // ARRAY_NEXT_ITEM
    // Code: 3
    {0x300 /* TAB */, 0x300 /* LF */, 0x300 /* FF */, 0x300 /*   */,
     0x41a80 /* " */, 0xff /* + */, 0xff /* , */, 0x40f80 /* - */,
     0xff /* . */, 0xff /* / */, 0x41380 /* 0 */, 0x40c80 /* 1 */,
     0x40c80 /* 2 */, 0x40c80 /* 3 */, 0x40c80 /* 4 */, 0x40c80 /* 5 */,
     0x40c80 /* 6 */, 0x40c80 /* 7 */, 0x40c80 /* 8 */, 0x40c80 /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0x40280 /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0x40580 /* f */,
     0xff /* l */, 0x40980 /* n */, 0xff /* r */, 0xff /* s */,
     0x41c80 /* t */, 0xff /* u */, 0x41480 /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // ARRAY_SEPARATOR
    // Code: 4
    {0x400 /* TAB */, 0x400 /* LF */, 0x400 /* FF */, 0x400 /*   */,
     0xff /* " */, 0xff /* + */, 0x300 /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0x100 /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // FALSE_1
    // Code: 5
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0x600 /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // FALSE_2
    // Code: 6
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0x700 /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // FALSE_3
    // Code: 7
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0x800 /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // FALSE_4
    // Code: 8
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0x40 /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // NULL_1
    // Code: 9
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xa00 /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // NULL_2
    // Code: 10
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xb00 /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // NULL_3
    // Code: 11
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0x40 /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // NUMBER
    // Code: 12
    {0x40 /* TAB */, 0x40 /* LF */, 0x40 /* FF */, 0x40 /*   */,
     0xff /* " */, 0xff /* + */, 0x40 /* , */, 0xff /* - */,
     0x1000 /* . */, 0xff /* / */, 0xc00 /* 0 */, 0xc00 /* 1 */,
     0xc00 /* 2 */, 0xc00 /* 3 */, 0xc00 /* 4 */, 0xc00 /* 5 */,
     0xc00 /* 6 */, 0xc00 /* 7 */, 0xc00 /* 8 */, 0xc00 /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0x40 /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0x40 /* } */,
     0xff /* \u */, 0xff /* .* */},
    // NUMBER_AFTER_E_DIGIT_NOTATION
    // Code: 13
    {0x40 /* TAB */, 0x40 /* LF */, 0x40 /* FF */, 0x40 /*   */,
     0xff /* " */, 0xff /* + */, 0x40 /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xd00 /* 0 */, 0xd00 /* 1 */,
     0xd00 /* 2 */, 0xd00 /* 3 */, 0xd00 /* 4 */, 0xd00 /* 5 */,
     0xd00 /* 6 */, 0xd00 /* 7 */, 0xd00 /* 8 */, 0xd00 /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0x40 /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0x40 /* } */,
     0xff /* \u */, 0xff /* .* */},
    // NUMBER_AFTER_E_NOTATION
    // Code: 14
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0x1200 /* + */, 0xff /* , */, 0x1200 /* - */,
     0xff /* . */, 0xff /* / */, 0xd00 /* 0 */, 0xd00 /* 1 */,
     0xd00 /* 2 */, 0xd00 /* 3 */, 0xd00 /* 4 */, 0xd00 /* 5 */,
     0xd00 /* 6 */, 0xd00 /* 7 */, 0xd00 /* 8 */, 0xd00 /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // NUMBER_AFTER_HYPHEN
    // Code: 15
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0x1300 /* 0 */, 0xc00 /* 1 */,
     0xc00 /* 2 */, 0xc00 /* 3 */, 0xc00 /* 4 */, 0xc00 /* 5 */,
     0xc00 /* 6 */, 0xc00 /* 7 */, 0xc00 /* 8 */, 0xc00 /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // NUMBER_AFTER_PERIOD
    // Code: 16
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0x1100 /* 0 */, 0x1100 /* 1 */,
     0x1100 /* 2 */, 0x1100 /* 3 */, 0x1100 /* 4 */, 0x1100 /* 5 */,
     0x1100 /* 6 */, 0x1100 /* 7 */, 0x1100 /* 8 */, 0x1100 /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // NUMBER_AFTER_PERIOD_DIGIT
    // Code: 17
    {0x40 /* TAB */, 0x40 /* LF */, 0x40 /* FF */, 0x40 /*   */,
     0xff /* " */, 0xff /* + */, 0x40 /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0x1100 /* 0 */, 0x1100 /* 1 */,
     0x1100 /* 2 */, 0x1100 /* 3 */, 0x1100 /* 4 */, 0x1100 /* 5 */,
     0x1100 /* 6 */, 0x1100 /* 7 */, 0x1100 /* 8 */, 0x1100 /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xe00 /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0x40 /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xe00 /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0x40 /* } */,
     0xff /* \u */, 0xff /* .* */},
    // NUMBER_AFTER_PLUS_MINUS_AFTER_E_NOTATION
    // Code: 18
    {0x40 /* TAB */, 0x40 /* LF */, 0x40 /* FF */, 0x40 /*   */,
     0xff /* " */, 0xff /* + */, 0x40 /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0x1200 /* 0 */, 0x1200 /* 1 */,
     0x1200 /* 2 */, 0x1200 /* 3 */, 0x1200 /* 4 */, 0x1200 /* 5 */,
     0x1200 /* 6 */, 0x1200 /* 7 */, 0x1200 /* 8 */, 0x1200 /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0x40 /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0x40 /* } */,
     0xff /* \u */, 0xff /* .* */},
    // NUMBER_AFTER_ZERO
    // Code: 19
    {0x40 /* TAB */, 0x40 /* LF */, 0x40 /* FF */, 0x40 /*   */,
     0xff /* " */, 0xff /* + */, 0x40 /* , */, 0xff /* - */,
     0x1000 /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xe00 /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0x40 /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xe00 /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0x40 /* } */,
     0xff /* \u */, 0xff /* .* */},
    // OBJECT
    // Code: 20
    {0x1400 /* TAB */, 0x1400 /* LF */, 0x1400 /* FF */, 0x1400 /*   */,
     0x161a80 /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0x1500 /* } */,
     0xff /* \u */, 0xff /* .* */},
    // OBJECT_END
    // Code: 21
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0x40 /* \u */, 0x40 /* .* */},
    // OBJECT_KEY
    // Code: 22
    {0x1600 /* TAB */, 0x1600 /* LF */, 0x1600 /* FF */, 0x1600 /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0x1900 /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // OBJECT_KEY_BEGIN_QUOTE
    // Code: 23
    {0x1700 /* TAB */, 0x1700 /* LF */, 0x1700 /* FF */, 0x1700 /*   */,
     0x161a80 /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // OBJECT_SEPARATOR
    // Code: 24
    {0x1800 /* TAB */, 0x1800 /* LF */, 0x1800 /* FF */, 0x1800 /*   */,
     0xff /* " */, 0xff /* + */, 0x1700 /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0x1500 /* } */,
     0xff /* \u */, 0xff /* .* */},
    // OBJECT_VALUE
    // Code: 25
    {0x1900 /* TAB */, 0x1900 /* LF */, 0x1900 /* FF */, 0x1900 /*   */,
     0x181a80 /* " */, 0xff /* + */, 0xff /* , */, 0x180f80 /* - */,
     0xff /* . */, 0xff /* / */, 0x181380 /* 0 */, 0x180c80 /* 1 */,
     0x180c80 /* 2 */, 0x180c80 /* 3 */, 0x180c80 /* 4 */, 0x180c80 /* 5 */,
     0x180c80 /* 6 */, 0x180c80 /* 7 */, 0x180c80 /* 8 */, 0x180c80 /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0x180280 /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0x180580 /* f */,
     0xff /* l */, 0x180980 /* n */, 0xff /* r */, 0xff /* s */,
     0x181c80 /* t */, 0xff /* u */, 0x181480 /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // STRING
    // Code: 26
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0x40 /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0x1b00 /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0x1a00 /* \u */, 0x1a00 /* .* */},
    // STRING_ESCAPE
    // Code: 27
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0x1a00 /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0x1a00 /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0x1a00 /* \ */, 0xff /* ] */, 0xff /* a */, 0x1a00 /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0x1a00 /* f */,
     0xff /* l */, 0x1a00 /* n */, 0x1a00 /* r */, 0xff /* s */,
     0x1a00 /* t */, 0x1f00 /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // TRUE_1
    // Code: 28
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0x1d00 /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // TRUE_2
    // Code: 29
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0xff /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0x1e00 /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // TRUE_3
    // Code: 30
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0xff /* 0 */, 0xff /* 1 */,
     0xff /* 2 */, 0xff /* 3 */, 0xff /* 4 */, 0xff /* 5 */,
     0xff /* 6 */, 0xff /* 7 */, 0xff /* 8 */, 0xff /* 9 */,
     0xff /* : */, 0xff /* A */, 0xff /* B */, 0xff /* C */,
     0xff /* D */, 0xff /* E */, 0xff /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0xff /* a */, 0xff /* b */,
     0xff /* c */, 0xff /* d */, 0x40 /* e */, 0xff /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // UNICODE_HEX_CHAR_FIRST
    // Code: 31
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0x2100 /* 0 */, 0x2100 /* 1 */,
     0x2100 /* 2 */, 0x2100 /* 3 */, 0x2100 /* 4 */, 0x2100 /* 5 */,
     0x2100 /* 6 */, 0x2100 /* 7 */, 0x2100 /* 8 */, 0x2100 /* 9 */,
     0xff /* : */, 0x2100 /* A */, 0x2100 /* B */, 0x2100 /* C */,
     0x2100 /* D */, 0x2100 /* E */, 0x2100 /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0x2100 /* a */, 0x2100 /* b */,
     0x2100 /* c */, 0x2100 /* d */, 0x2100 /* e */, 0x2100 /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // UNICODE_HEX_CHAR_LAST
    // Code: 32
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0x1a00 /* 0 */, 0x1a00 /* 1 */,
     0x1a00 /* 2 */, 0x1a00 /* 3 */, 0x1a00 /* 4 */, 0x1a00 /* 5 */,
     0x1a00 /* 6 */, 0x1a00 /* 7 */, 0x1a00 /* 8 */, 0x1a00 /* 9 */,
     0xff /* : */, 0x1a00 /* A */, 0x1a00 /* B */, 0x1a00 /* C */,
     0x1a00 /* D */, 0x1a00 /* E */, 0x1a00 /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0x1a00 /* a */, 0x1a00 /* b */,
     0x1a00 /* c */, 0x1a00 /* d */, 0x1a00 /* e */, 0x1a00 /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // UNICODE_HEX_CHAR_SECOND
    // Code: 33
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0x2200 /* 0 */, 0x2200 /* 1 */,
     0x2200 /* 2 */, 0x2200 /* 3 */, 0x2200 /* 4 */, 0x2200 /* 5 */,
     0x2200 /* 6 */, 0x2200 /* 7 */, 0x2200 /* 8 */, 0x2200 /* 9 */,
     0xff /* : */, 0x2200 /* A */, 0x2200 /* B */, 0x2200 /* C */,
     0x2200 /* D */, 0x2200 /* E */, 0x2200 /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0x2200 /* a */, 0x2200 /* b */,
     0x2200 /* c */, 0x2200 /* d */, 0x2200 /* e */, 0x2200 /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
    // UNICODE_HEX_CHAR_THIRD
    // Code: 34
    {0xff /* TAB */, 0xff /* LF */, 0xff /* FF */, 0xff /*   */,
     0xff /* " */, 0xff /* + */, 0xff /* , */, 0xff /* - */,
     0xff /* . */, 0xff /* / */, 0x2000 /* 0 */, 0x2000 /* 1 */,
     0x2000 /* 2 */, 0x2000 /* 3 */, 0x2000 /* 4 */, 0x2000 /* 5 */,
     0x2000 /* 6 */, 0x2000 /* 7 */, 0x2000 /* 8 */, 0x2000 /* 9 */,
     0xff /* : */, 0x2000 /* A */, 0x2000 /* B */, 0x2000 /* C */,
     0x2000 /* D */, 0x2000 /* E */, 0x2000 /* F */, 0xff /* [ */,
     0xff /* \ */, 0xff /* ] */, 0x2000 /* a */, 0x2000 /* b */,
     0x2000 /* c */, 0x2000 /* d */, 0x2000 /* e */, 0x2000 /* f */,
     0xff /* l */, 0xff /* n */, 0xff /* r */, 0xff /* s */,
     0xff /* t */, 0xff /* u */, 0xff /* { */, 0xff /* } */,
     0xff /* \u */, 0xff /* .* */},
}};


inline static uint8_t ToCallbackCode(uint32_t code) {
  // 4th byte.
  return static_cast<uint8_t>(code >> 24);
}

inline static uint8_t ToPushStateCode(uint32_t code) {
  // 3rd byte.
  return static_cast<uint8_t>((code & 0x00ff0000) >> 16);
}

inline static uint8_t ToCurrentStateCode(uint32_t code) {
  // 2nd byte.
  return static_cast<uint8_t>((code & 0x0000ff00) >> 8);
}

inline static bool HasPushBit(uint32_t code) {
  // 6th bit in first byte.
  return ((code & 0x80) >> 7) == 1;
}

inline static bool HasPopBit(uint32_t code) {
  // 7th bit in first byte.
  return ((code & 0x40) >> 6) == 1;
}

// TODO: In follow up change modify the signature to accept a unicode
// character, that is char32_t and based on the charset for this state return
// the code from second last or last column accordingly.
inline static uint32_t CodeForToken(char c, uint8_t state) {
  int c_int = static_cast<int>(c);
  if (c_int > 127) {
    return kParseStates[state][44];
  }
  int index = kTokenIndexes[c_int];
  if (index == -1) index = 45;
  return kParseStates[state][index];
}

}  // namespace htmlparser::json

#endif  // HTMLPARSER__JSON_STATES_H_
