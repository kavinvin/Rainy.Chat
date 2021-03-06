/**
 * File: error.h
 * ----------------------------
 *   a header file of error.c
 */

#ifndef ERROR_H_
#define ERROR_H_

#include "includes.h"

#define SUCCESS 0
#define CLIENT_DISCONNECT 1
#define INVALID_HEADER 2
#define MESSAGE_TOO_LONG 3

void signalHandler(int signal);

#endif
