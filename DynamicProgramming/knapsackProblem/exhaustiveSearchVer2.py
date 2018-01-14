# -*- coding: utf-8 -*-

import numpy as np
import itertools


class Item:
    def __init__(self, price, size, count):
        self.price = price
        self.size = size
        self.count = count


def knapsack_exhaustive(item_list, upper_size):
    best_combination = []
    max_price = 0
    max_size = 0

    for number in range(2, len(item_list)+1):
        combinations = list(itertools.combinations(item_list, number))

        for ci in combinations:
            sum_size = 0
            sum_price = 0
            for item in ci:
                sum_size += item.size
                sum_price += item.price

            if sum_size <= upper_size and sum_price > max_price:
                max_price = sum_price
                max_size = sum_size
                best_combination = ci

        print("number = %d" % number)
        print("total price = %d" % max_price)
        print("total size = %d" % max_size)
        for item in best_combination:
            print("(price = %d, size = %d) " % (item.price, item.size), end="")
        print()


def main():
    knapsack_size = 10

    #item_data = (size, price)
    item_data = [(4, 6), (3, 4), (1, 1)]

    item_list = [Item(price, size, 0) for size, price in item_data]

    knapsack_exhaustive(item_list, knapsack_size)


if __name__ == '__main__':
    main()
