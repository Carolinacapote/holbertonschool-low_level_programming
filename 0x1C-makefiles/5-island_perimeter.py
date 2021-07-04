#!/usr/bin/python3
"""
This module contains a function called island_perimeter()
"""


def island_perimeter(grid):
    """
    Attributes:
        grid (list): List of integers. 0 is water zone, 1 is land zone
    Returns:
        perimeter (int):The perimeter of the island (grid)
    """

    perimeter = 0
    height = len(grid)

    for i in range(height):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                perimeter += 4
                if i != 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j != 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return perimeter
