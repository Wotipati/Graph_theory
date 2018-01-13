# Sorting

### Usage
```
python XXXX.py --n <生成するリストの個数>
```

### Example
```
$ python bubbleSort.py --n 5
Before:[40 44 10 39 24]
After: [10 24 39 40 44]
```

---

#### [bubbleSort.py](https://github.com/Wotipati/dataStructuresAndAlgorithms/blob/master/01Sorting/bubbleSort.py)
- シンプルなバブルソート

#### [bubbleSortBeta.py](https://github.com/Wotipati/dataStructuresAndAlgorithms/blob/master/01Sorting/bubbleSortBeta.py)
- バブルソートの改良版
- 改良前の半分の計算量で済む
- 「ループが一回終了するごとに、配列後方要素が確実にソート済みになる」という性質を利用

#### [quickSort.py](https://github.com/Wotipati/dataStructuresAndAlgorithms/blob/master/01Sorting/quickSort.py)
- クイックソート
- 基準値（ピポッド）は配列の先頭