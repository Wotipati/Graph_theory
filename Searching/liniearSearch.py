import numpy as np
import argparse


def merge_sort(input_list):
    input_range = len(input_list)
    if input_range <= 1:
        return

    divided_range = int(input_range/2)
    buffer = [0] * divided_range

    merge_sort(input_list[:divided_range])
    merge_sort(input_list[divided_range:])

    for i in range(divided_range):
        buffer[i] = input_list[i]

    bi = 0
    li = 0
    di = divided_range

    while bi < divided_range and di < input_range:
        if buffer[bi] <= input_list[di]:
            input_list[li] = buffer[bi]
            li += 1
            bi += 1
        else:
            input_list[li] = input_list[di]
            li += 1
            di += 1

    while bi < divided_range:
        input_list[li] = buffer[bi]
        li += 1
        bi += 1


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--n', type=int, default=8)
    args = parser.parse_args()

    total_number = args.n

    bubble = np.random.randint(10, total_number*10, total_number)

    print('Before:{0}'.format(bubble))

    merge_sort(bubble)

    print('After: {0}'.format(bubble))


if __name__ == '__main__':
    main()