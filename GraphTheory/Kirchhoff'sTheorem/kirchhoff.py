import numpy as np
import networkx as nx
import matplotlib.pyplot as plt
import argparse


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--node', type=int, default=5)
    args = parser.parse_args()

    n = args.node

    # 隣接行列Aを作成
    # 乱数でn次元正方行列を作成
    A = np.random.rand(n, n)

    # 対称行列に
    A = np.dot(A, A.T)
    print(A)

    # 各成分を0or1に
    A[A<0.5] = 0
    A[A>=0.5] = 1

    # 対各成分を0に(隣接行列作成完了)
    B = np.diag(A)
    C = np.diag(B)
    A = A - C
    print("Adjacency matrix")
    print(A)

    # ノードの次数を対角成分にもつ行列Dを作成
    D = np.sum(A, axis=1)
    D = np.diag(D)

    # ラプラシアン行列を作成
    H = D - A
    print("Laplacian matrix")
    print(H)


    print("cofactors")
    for i in range(n):
        for j in range(i, n):
            # Hからi行j列を取り除いた小行列(minor)を作成
            Minor = np.delete(H, i, axis=0)
            Minor = np.delete(Minor, j, axis=1)

            # 余因子(cofactor)を計算
            Cofactor = ((-1)**(i+j)) * np.linalg.det(Minor)

            print(Cofactor)


    # 無向グラフの作成
    # 空のグラフの作成
    Graph = nx.Graph()

    #ノードの追加
    for i in range(n):
        Graph.add_node('{0}'.format(i))

    # エッジの追加
    for i in range(n):
        for j in range(i, n):
            if int(A[i][j]) == 1:
                Graph.add_edge('{0}'.format(i), '{0}'.format(j))


    # グラフの描画
    plt.figure(figsize = (5,5))
    pos = nx.spring_layout(Graph, k=0.5)
    nx.draw_networkx(Graph, pos)

    plt.axis("off")
    plt.show()


if __name__ == '__main__':
    main()