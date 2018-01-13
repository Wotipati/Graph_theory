import numpy as np
import argparse


def quick_sort(left, right, input_list):
    if left >= right:
        return

    threshold = input_list[left]

    lower = left
    upper = right

    while lower < upper:
        while lower <= upper and input_list[lower] <= threshold:
            lower += 1

        while lower <= upper and input_list[upper] > threshold:
            upper -= 1

        if lower < upper:
            stack = input_list[lower]
            input_list[lower] = input_list[upper]
            input_list[upper] = stack

    stack = input_list[left]
    input_list[left] = input_list[upper]
    input_list[upper] = stack

    quick_sort(left, upper-1, input_list)
    quick_sort(upper+1, right, input_list)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--n', type=int, default=8)
    args = parser.parse_args()

    total_number = args.n

    bubble = np.random.randint(10, total_number*10, total_number)

    print('Before:{0}'.format(bubble))

    quick_sort(0, total_number-1, bubble)

    print('After: {0}'.format(bubble))


if __name__ == '__main__':
    main()