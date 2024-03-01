#!/usr/bin/python3
"""Defines an island perimeter measuring function."""

def island_perimeter(grid):
    """
    Function to calculate the perimeter of the island described in grid:

    Args:
    grid (list of list of int): 0 represents a water zone, 1 represents a land zone

    Returns:
    int: perimeter of the island
    """

    # Get the dimensions of the grid
    rows = len(grid)
    cols = len(grid[0])

    # Initialize the perimeter counter
    perimeter = 0

    # Define the directions for DFS
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

    # Define the helper function for DFS
    def dfs(row, col):
        """
        Helper function to perform DFS on the grid

        Args:
        row (int): current row index
        col (int): current column index
        """

        # Mark the current cell as visited
        grid[row][col] = -1

        # Check the neighbors
        for direction in directions:
            new_row, new_col = row + direction[0], col + direction[1]

            # If the new cell is within the grid boundaries and is a land zone
            if 0 <= new_row < rows and 0 <= new_col < cols and grid[new_row][new_col] == 1:
                # Increment the perimeter counter if the new cell is a water zone
                if row - direction[0] < 0 or row - direction[0] >= rows or col - direction[1] < 0 or col - direction[1] >= cols or grid[row - direction[0]][col - direction[1]] == 0:
                    perimeter += 1
                # Otherwise, perform DFS on the new cell
                else:
                    dfs(new_row, new_col)

    # Perform DFS on the first land zone cell
    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                dfs(row, col)
                break
        else:
            continue
        break

    # Return the perimeter of the island
    return perimeter
