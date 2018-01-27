# Queue
配列 or リストを利用したキュー

### 配列を利用したキュー
- リストを利用したものより、やや高速
- データが満杯になる可能性がある

#### Example
```
You add  1 & 2 & 3 / Now Queue: 1, 2, 3, 0, 0,
You pull 1         / Now Queue: 0, 2, 3, 0, 0,
You add  4 & 5     / Now Queue: 0, 2, 3, 4, 5,
You pull 2         / Now Queue: 0, 0, 3, 4, 5,
You add  6         / Now Queue: 6, 0, 3, 4, 5,
FULL!!!
You add  7         / Now Queue: 6, 0, 3, 4, 5,
You pull 3         / Now Queue: 6, 0, 0, 4, 5,
You pull 4         / Now Queue: 6, 0, 0, 0, 5,
You pull 5         / Now Queue: 6, 0, 0, 0, 0,
You pull 6         / Now Queue: 0, 0, 0, 0, 0,
You pull EMPTY
```

### リストを利用したキュー
- メモリの許す限りデータの追加が可能
- やや低速

#### Example
```
You add  1 & 2 & 3 / Now Queue: 1, 2, 3
You pull 1         / Now Queue: 2, 3
You add  4 & 5     / Now Queue: 2, 3, 4, 5
You pull 2         / Now Queue: 3, 4, 5
You add  6         / Now Queue: 3, 4, 5, 6
You add  7         / Now Queue: 3, 4, 5, 6, 7
You pull 3         / Now Queue: 4, 5, 6, 7
You pull 4         / Now Queue: 5, 6, 7
You pull 5         / Now Queue: 6, 7
You pull 6         / Now Queue: 7
You pull 7         / Now Queue: 0
You pull Empty
```
