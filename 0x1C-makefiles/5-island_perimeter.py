#!/usr/bin/python3
"""island perimeter problem solving"""


def cell_perimeter(grid, i, j):
    """returns the perimeter of a cell"""
    rows, cols = len(grid), len(grid[0])
    if i < 0 or i >= rows or j < 0 or j >= cols or grid[i][j] == 0:
        return 0
    top = grid[i - 1][j] if i > 0 else 0
    left = grid[i][j - 1] if j > 0 else 0
    bottom = grid[i + 1][j] if i < rows - 1 else 0
    right = grid[i][j + 1] if j < cols - 1 else 0
    return 4 - (top + left + bottom + right)


def island_perimeter(grid):
    """calculates the island perimeter"""
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            perimeter += cell_perimeter(grid, i, j)
    return perimeter
