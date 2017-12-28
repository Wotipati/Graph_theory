# -*- coding: utf-8 -*-

import numpy as np
import itertools


class Item:
    def __init__(self, price, weight, count):
        self.price = price
        self.weight = weight
        self.count = count


def knapsack_exhaustive(item_list, max_size):
    best_combination = []
    max_price = 0
    max_weight = 0

    for number in range(2, len(item_list)+1):
        combinations = list(itertools.combinations(item_list, number))

        for ci in combinations:
            sum_weight = 0
            sum_price = 0
            for item in ci:
                sum_weight += item.weight
                sum_price += item.price

            if sum_weight <= max_size and sum_price > max_price:
                max_price = sum_price
                max_weight = sum_weight
                best_combination = ci

        print("number = %d" % number)
        print("total price = %d" % max_price)
        print("total weight = %d" % max_weight)
        for item in best_combination:
            print("(price = %d, size = %d) " % (item.price, item.weight), end="")


def main():
    knapsack_size = 30

    #item_data = (weight, price)
    item_data = [(2,5), (4,6), (9,7), (3,5), (5,8), (6,9), (2,7)]

    item_list = [Item(price, weight, 0) for weight, price in item_data]

    knapsack_exhaustive(item_list, knapsack_size)


if __name__ == '__main__':
    main()


