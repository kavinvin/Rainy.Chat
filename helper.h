/**
  @file  helper.h
  @brief header file included helper functions
*/

#ifndef HELPER_H_
#define HELPER_H_

#include "includes.h"

#define SIZE 64

#define max(a,b) \
  ({ __typeof__ (a) _a = (a); \
      __typeof__ (b) _b = (b); \
    _a > _b ? _a : _b; })

#define min(a,b) \
  ({ __typeof__ (a) _a = (a); \
      __typeof__ (b) _b = (b); \
    _a < _b ? _a : _b; })

int ord(char letter);
char chr(int number);
char * getLine();
char * slice(char *string, int start, int stop);
char * strip(char *string, char stripper);
char ** split(char *string, char delimiter);
void printBits(size_t const size, void const * const ptr);
void strLower(char *string);

#endif
