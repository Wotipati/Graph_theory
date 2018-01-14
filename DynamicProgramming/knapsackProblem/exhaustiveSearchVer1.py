# -*- coding: utf-8 -*-

import numpy as np
import itertools


class Item:
    def __init__(self, price, size, count):
        self.price = price
        self.size = size
        self.count = count


def knapsack_exhaustive(item_list, upper_size):
    minimum_size = item_list[0].size

    for item in item_list:
        if item.size < minimum_size:
            minimum_size = item.size

    max_number = int(upper_size / minimum_size)

    best_combination = []
    max_price = 0
    max_size = 0

    for number in range(2, max_number+1):
        combinations = list(itertools.combinations_with_replacement(item_list, number))

        for ci in combinations:
            sum_size = 0
            sum_price = 0
            bmax_checker = True

            for item in ci:
                sum_size += item.size
                sum_price += item.price
                if sum_size > upper_size:
                    bmax_checker = False
                    break

            if bmax_checker and sum_price > max_price:
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
