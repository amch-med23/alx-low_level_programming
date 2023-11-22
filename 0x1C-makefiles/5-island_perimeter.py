#!/usr/bin/python3
""" this module calculates the perimeter of a given grid"""


def island_perimeter(grid):
    """to get the len of the perimeter of island"""
    n = 0
    for y, row in enumerate(grid):
        for x, cell in enumerate(row):
            if cell == 1:
                if y == 0 or grid[y - 1][x] == 0:
                    n += 1
                if y == len(grid) - 1 or grid[y + 1][x] == 0:
                    n += 1
                if x == 0 or grid[y][x - 1] == 0:
                    n += 1
                if x == len(row) - 1 or grid[y][x + 1] == 0:
                    n += 1
    return n
