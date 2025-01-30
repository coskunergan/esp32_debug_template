/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <stdio.h>

#include <zephyr/kernel.h>

volatile uint32_t test_reg = 0;

int main(void)
{
    printf("Hello World! %s\n", CONFIG_BOARD_TARGET);

    while(1)
    {       
        printf("test_reg = %zu\n", test_reg);
        ++test_reg;
    }

    return 0;
}
