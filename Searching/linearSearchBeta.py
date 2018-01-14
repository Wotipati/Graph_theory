import numpy as np
import argparse


def linear_search_beta(input_list, target):
    stack = input_list[-1]
    input_list[-1] = target

    index = 0
    while input_list[index] != target:
        index += 1

    input_list[-1] = stack

    if index < len(input_list)-1:
        return index
    elif target == stack:
        return len(input_list)-1
    else:
        return -1


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--n', type=int, default=8)
    args = parser.parse_args()

    total_number = args.n

    input_list = np.random.randint(10, total_number*10, total_number)

    print(input_list)

    print('What are you looking for?')
    target = int(input('>> '))

    index = linear_search_beta(input_list, target)

    if index < 0:
        print('{0} is not found in the tuple'.format(target))
    else:
        print(index+1)


if __name__ == '__main__':
    main()