#!/usr/bin/python3
# 2-square.py
"""Defines class Square."""


class Square:
    """Represents a square."""

    def __init__(self, size=0):
        """Initializes new Square.
        Args:
            size (int): The size of new square.
        """
        if not isinstance(size, int):
            raise TypeError("size has to be an integer")
        elif size < 0:
            raise ValueError("size has to be >= 0")
        self.__size = size
