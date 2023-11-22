#!/usr/bin/python3
""" Module to calculate the perimiter of the island in a grid """


def num_water_ngbr(grid, x, y):
    """ calculates the numberof water neighbors a cell has inside a grid. """

    n = 0

    if x <= 0 or not grid[x - 1][y]:
        n += 1
    if y <= 0 or not grid[x][y - 1]:
        n += 1
    if x >= len(grid) - 1 or not grid[x + 1][y]:
        n += 1
    if y >= len(grid) - 1 or not grid[x][y + 1]:
        n += 1

    return n


def island_perimeter(grid):
    """ Returns the perimiter of the island in grid. """

    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j]:
                perimeter += num_water_ngbr(grid, i, j)

    return perimeter
