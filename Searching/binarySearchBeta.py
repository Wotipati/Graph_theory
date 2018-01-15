import numpy as np
import argparse
import bubbleSort


def binary_search(input_list, target, left, right):
    while left < right:
        mid = int((left+right)/2)

        if input_list[mid] < target:
            left = mid + 1
        else:
            right = mid

    if input_list[left] == target:
        return left

    return -1


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--n', type=int, default=8)
    args = parser.parse_args()

    total_number = args.n

    input_list = [1, 2, 2, 2, 2, 2, 2, 3]
    bubbleSort.bubble_sort(input_list)

    print(input_list)

    print('What are you looking for?')
    target = int(input('>> '))

    index = binary_search(input_list, target, 0, total_number)

    if index < 0:
        print('{0} is not found in the tuple'.format(target))
    else:
        print(index+1)


if __name__ == '__main__':
    main()