# -*- coding: utf-8 -*-

import numpy as np
import itertools


class Item:
    def __init__(self, price, weight, count):
        self.price = price
        self.weight = weight
        self.count = count


def knapsack_dynamic_programming(item_list, max_size):
    choice = [None] * (max_size + 1)
    gain = [0] * (max_size + 1)

    for item in item_list:
        weight = item.weight
        price = item.price

        for ci in range(weight, max_size+1):
            new_gain = price + gain[ci - weight]
            if gain[ci] < new_gain:
                gain[ci] = new_gain
                choice[ci] = item

    ci = max_size
    while choice[ci]:
        item = choice[ci]
        item.count += 1
        ci -= item.weight

    print("total price = %d" % gain[max_size])
    for item in item_list:
        print("(price = %d, weight = %d, count = %d) " % (item.price, item.weight, item.count))


def main():
    knapsack_size = 30

    #item_data = (weight, price)
    item_data = [(4, 6), (3, 4), (1, 1)]

    item_list = [Item(price, weight, 0) for weight, price in item_data]

    knapsack_dynamic_programming(item_list, knapsack_size)


if __name__ == '__main__':
    main()


