#ifndef _MAJORITY_H
#define _MAJORITY_H

#include <inttypes.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include "quorum.h"

typedef struct {
  uint64_t id;
  Index idx;
  bool ok;
  int bar;
} tup;

char *DescribeC(void *c, void *l);

bool compare(const tup *a, const tup *b)

#endif