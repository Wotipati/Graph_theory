# 01Sorting

#### Usage
```
python XXXX.py --n <生成するリストの個数>
```

##### example
```
$ python 01bubbleSort.py --n 5
Before:[40 44 10 39 24]
After: [10 24 39 40 44]
```

---

##### 01bubbleSort.py
- シンプルなバブルソート

##### 02bubbleSortBeta.py
- バブルソートの改良版
- 改良前の半分の計算量で済む
- 「ループが一回終了するごとに、配列後方要素が確実にソート済みになる」という性質を利用