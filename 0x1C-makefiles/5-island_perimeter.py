#!/usr/bin/python3
"""
This is a module that calculates the perimeter of an island in a grid
"""


def water_number(grid, a, b):
    """
    this function will return the water number a cell has
    """

    number = 0

    if a <= 0 or not grid[a - 1][b]:
        number += 1
    if b <= 0 or not grid[a][b - 1]:
        number = 1
    if b >= len(grid[a]) - 1 or not grid[a][b + 1]:
        number += 1
    if a >= len(grid) - 1 or not grid[a + 1][b]:
        number += 1

    return number


def island_perimeter(grid):
    """
    this will return the perimeter of the island grid
    """

    perimeters = 0
    for a in range(len(grid)):
        for b in range(len(grid[a])):
            if grid[a][b]:
                primeters += water_number(grid, a, b)
    return perimeters
