#!/usr/bin/python3
"""
This module defines a function to calculate the perimeter of an island.
"""


def island_perimeter(grid):
	"""
	Calculates the perimeter of the island described in grid.

	Args:
		grid (list): A list of list of integers representing the island grid.

	Returns:
		int: The perimeter of the island.

	Example:
		grid = [
			[0, 0, 0, 0, 0, 0],
			[0, 1, 0, 0, 0, 0],
			[0, 1, 0, 0, 0, 0],
			[0, 1, 1, 1, 0, 0],
			[0, 0, 0, 0, 0, 0]
		]
		island_perimeter(grid)  # Output: 12
	"""
	perimeter = 0

	for i in range(len(grid)):
		for j in range(len(grid[i])):
			if grid[i][j] == 1:
				perimeter += 4
				if i > 0 and grid[i - 1][j] == 1:
					perimeter -= 2
				if j > 0 and grid[i][j - 1] == 1:
					perimeter -= 2

	return perimeter


if __name__ == "__main__":
	grid = [
		[0, 0, 0, 0, 0, 0],
		[0, 1, 0, 0, 0, 0],
		[0, 1, 0, 0, 0, 0],
		[0, 1, 1, 1, 0, 0],
		[0, 0, 0, 0, 0, 0]
	]
	print(island_perimeter(grid))
