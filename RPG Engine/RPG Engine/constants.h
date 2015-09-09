// Filename: constants.h
// Declares constants and enums
// Project: RPS
// Coder: Sam Tootell
#pragma once

enum options_t { ATTACK_t = 1, USE_MAGIC_t, USE_ITEM_t, INVALID_t };
// Unused as of right now
enum results_t { PL_WIN_t, DRAW_t, PL_LOSE_t };


const int MIN_ROUNDS = 1;
const int MAX_ROUNDS = 100;

// Input
const int VALID = 1;
const int INVALID = 0;


// Point values
const int PTS_WIN = 1;
const int PTS_LOSE = -1;

// Sleep time, in ms
const int sleepTime = 1000;