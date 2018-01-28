import argparse

def gcd(a, b):
    i = a
    while i > 0:
        if a%i == 0 and b%i == 0:
            break
        i -= 1

    return i


def multi_gcd(input_list):
    if len(input_list) == 2:
        return gcd(input_list[0], input_list[1])

    return gcd(input_list[-1], multi_gcd(input_list[:-1]))


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('integers', type=int, nargs='+')
    args = parser.parse_args()

    print("input list: {0}".format(args.integers))

    print("-> Greatest Common Divisor: {0}".format(multi_gcd(args.integers)))


if __name__ == '__main__':
    main()