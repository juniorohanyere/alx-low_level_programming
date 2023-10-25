#!/usr/bin/python3
"""calculates the perimeter of an island described in grid
"""


def island_perimeter(grid):
    """returns the perimeter of an island described in grid

    Args:
        grid (list of list): list of list of integers
    """

    width = len(grid[0])  # the width of the island
    height = len(grid)     # the height of the island
    corners = 0  # the corners/edges of the island
    size = 0    # the size of the island
    sides = 4   # number of sides of the island

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size = size + 1

                if j > 0 and grid[i][j - 1] == 1:
                    corners = corners + 1

                if i > 0 and grid[i - 1][j] == 1:
                    corners = corners + 1

    return size * sides - corners * 2
