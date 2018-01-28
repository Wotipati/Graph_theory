import argparse


def num_of_digit(input, digit):
    if input==0:
        return 0

    if input % 10 == digit:
        ret = 1
    else:
        ret = 0

    return ret + num_of_digit(input//10, digit)


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--input', type=int)
    parser.add_argument('--digit', type=int)
    args = parser.parse_args()

    print(num_of_digit(args.input, args.digit))


if __name__ == '__main__':
    main()