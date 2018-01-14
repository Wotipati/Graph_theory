import numpy as np
import argparse


def comb_sort(input_list):
    input_range = len(input_list)
    gap = input_range

    while True:
        gap = int(gap / 1.3)

        if gap == 0:
            gap = 1

        flag = False

        for i in range(input_range - gap):
            if input_list[i] > input_list[i+gap]:
                stack = input_list[i]
                input_list[i] = input_list[i+gap]
                input_list[i+gap] = stack
                flag = True

        if gap == 1 and (not flag):
            break


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--n', type=int, default=8)
    args = parser.parse_args()

    total_number = args.n

    bubble = np.random.randint(10, total_number*10, total_number)

    print('Before:{0}'.format(bubble))

    comb_sort(bubble)

    print('After: {0}'.format(bubble))


if __name__ == '__main__':
    main()