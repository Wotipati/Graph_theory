import numpy as np
import networkx as nx
import matplotlib.pyplot as plt
import argparse
import random


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument('--node', type=int, default=5)
    args = parser.parse_args()

    n = args.node

    # グラフの作成
    Graph = nx.Graph()

    # ノードの追加
    for i in range(n):
        Graph.add_node('{0}'.format(i))

    # 重み付きエッジの追加
    for i in range(n):
        for j in range(i, n):
            Graph.add_edge('{0}'.format(i), '{0}'.format(j), weight=random.randint(0,20))

    # ラベル（エッジの重み）の追加
    edgeLabels = {(i, j): w['weight'] for i, j, w in Graph.edges(data=True)}

    # 最小全域木を求める
    minTree = nx.minimum_spanning_tree(Graph)

    # グラフの描画
    plt.figure(figsize = (7,7))
    pos = nx.spring_layout(Graph, k=1.2)
    nx.draw_networkx(Graph, pos)
    nx.draw_networkx_edge_labels(Graph, pos, edge_labels=edgeLabels)
    plt.axis("off")

    plt.figure(figsize = (7,7))
    nx.draw_networkx(Graph, pos)
    nx.draw_networkx_edge_labels(Graph, pos, edge_labels=edgeLabels)
    nx.draw_networkx_edges(minTree, pos, edge_color = 'b', width=3)
    plt.axis("off")

    plt.show()


if __name__ == '__main__':
    main()