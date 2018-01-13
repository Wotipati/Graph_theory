import numpy as np
import argparse


def bubble_sort(input_list):
    total_number = len(input_list)
    flag = True
    finished = 0

    while flag:
        flag = False
        for i in range(total_number-1-finished):
            if input_list[i] > input_list[i+1]:
                stack = input_list[i]
                input_list[i] = input_list[i+1]
                input_list[i+1] = stack
                flag = True

        finished += 1


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--n', type=int, default=8)
    args = parser.parse_args()

    total_number = args.n

    bubble = np.random.randint(10, total_number*10, total_number)

    print('Before:{0}'.format(bubble))

    bubble_sort(bubble)

    print('After: {0}'.format(bubble))


if __name__ == '__main__':
    main()