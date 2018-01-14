import numpy as np
import argparse


def linear_search(input_tuple, target):
    index = 0
    while index < len(input_tuple):
        if input_tuple[index] == target:
            break
        index += 1

    if index < len(input_tuple):
        return index
    else:
        return -1


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--n', type=int, default=8)
    args = parser.parse_args()

    total_number = args.n

    input_tuple = tuple(np.random.randint(10, total_number*10, total_number))

    print(input_tuple)

    print('What are you looking for?')
    target = int(input('>> '))

    index = linear_search(input_tuple, target)

    if index < 0:
        print('{0} is not found in the tuple'.format(target))
    else:
        print(index+1)


if __name__ == '__main__':
    main()