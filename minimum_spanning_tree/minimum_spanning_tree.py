import numpy as np
import networkx as nx
import matplotlib.pyplot as plt
import argparse
import random

if __name__ == '__main__':

    parser = argparse.ArgumentParser()
    parser.add_argument('--node_fn', type=int, default=5)
    args = parser.parse_args()

    n = args.node_fn

    Graph = nx.Graph()

    #ノードの追加
    for i in range(n):
        Graph.add_node('{0}'.format(i))

    # エッジの追加
    for i in range(n):
        for j in range(i, n):
            Graph.add_edge('{0}'.format(i), '{0}'.format(j), weight=random.randint(0,10))

    min_tree = nx.minimum_spanning_tree(Graph)

    # グラフの描画
    plt.figure(figsize = (8,8))
    pos = nx.spring_layout(Graph, k=1.5)
    nx.draw_networkx(Graph, pos)
    nx.draw_networkx_edges(min_tree, pos, width=3)

    plt.axis("off")
    plt.show()
