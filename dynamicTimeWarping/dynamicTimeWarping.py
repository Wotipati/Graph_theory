# -*- coding: utf-8 -*-

import numpy as np
import matplotlib.pyplot as plt

import matplotlib
matplotlib.use('MacOSX')


def calc_dtw(x_a, x_b, path, window=0):
    distance = lambda a, b: (a-b)**2

    if window <= 0:
        window_size = max(len(x_a), len(x_b))
    else:
        window_size = window

    x_a_len = len(x_a)
    x_b_len = len(x_b)

    cost = np.empty((x_a_len, x_b_len))
    gain = np.empty((x_a_len, x_b_len))

    cost[0][0] = distance(x_a[0], x_b[0])
    gain[0][0] = distance(x_a[0], x_b[0])

    for i in range(1, x_a_len):
        cost[i][0] = distance(x_a[i], x_b[0])
        gain[i][0] = gain[i-1][0] + cost[i][0]

    for i in range(1, x_b_len):
        cost[0][i] = distance(x_a[0], x_b[i])
        gain[0][i] = gain[0][i-1] + cost[0][i]

    for i in range(1, x_a_len):
        window_begin = max(1, i-window_size)
        window_end = min(x_b_len, i+window_size)
        for j in range(window_begin, window_end):
            cost[i][j] = distance(x_a[i], x_b[j])
            gain[i][j] = min(gain[i-1][j], gain[i][j-1], gain[i-1][j-1]) + cost[i][j]

    index_a = x_a_len-1
    index_b = x_b_len-1
    path.extend([[x_a_len-1, x_b_len-1]])
    while index_a >= 0:
        if gain[index_a][index_b-1] < min(gain[index_a-1][index_b], gain[index_a-1][index_b-1]):
            path.extend([[index_a, index_b-1]])
            index_b -= 1

        elif gain[index_a-1][index_b] < gain[index_a-1][index_b-1]:
            path.extend([[index_a-1, index_b]])
            index_a -= 1

        else:
            path.extend([[index_a-1, index_b-1]])
            index_a -= 1
            index_b -= 1

        if index_b <= 0:
            index_b = 0


def main():
    x_a = np.arange(0, 15, 0.1)

    y_a = np.sin(x_a)
    y_b = np.sin(x_a + np.pi/3) * (1-np.sin(x_a)/2)

    path = []

    calc_dtw(y_a, y_b, path)

    for item in path:
        plt.plot([x_a[item[0]], x_a[item[1]]], [y_a[item[0]], y_b[item[1]]], lw=1, c="gray")

    plt.plot(x_a, y_a)
    plt.plot(x_a, y_b)

    plt.show()


if __name__ == '__main__':
    main()
