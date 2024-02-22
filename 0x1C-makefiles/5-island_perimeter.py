#!/usr/bin/python3
"""
File that contains function that finds the parameter of the island
"""


def island_perimeter(grid) -> int:
    """
    Function to find the parameter of the island in the grid
    Assuming that the island is a rectangle
    parameter = 2 (Length + width)
    [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]
    """
    # Define my variables
    perimeter = lambda x, y: 2 * (x + y)
    length: int = 0
    width: int = 0
    # Dimensions
    column: int = 0
    row: int = 0
    # Get length
    while row < len(grid):
        while column < len(grid[row]):
            value: int = grid[row][column]
            if value == 1:
                length += 1
                break
            else:
                column += 1
        # Reset column to 0
        column: int = 0
        row += 1
    # Reset dimensions
    row: int = 0
    # Get width
    while row < len(grid):
        # Get the summ of the array
        summ: int = sum(grid[row])
        # Check if sum is greater than width
        if summ > width:
            # Reassign summ
            width = summ
        row += 1
    # Calculate perimeter
    return perimeter(length, width)