# Searching

### Usage
```
python XXXX.py --n <生成するタプルの個数>
<generated tupple>
What are you looking for?
>> <target number & Enter>
>> <index number>
```

### Example
```
$ python linearSearch.py --n 10
(62, 98, 78, 81, 28, 65, 58, 15, 66, 12)
What are you looking for?
>> 58
7
```
```
python linearSearch.py --n 4
(29, 36, 22, 33)
What are you looking for?
>> 20
20 is not found in the tuple

```

---

#### [linearSearch.py](https://github.com/Wotipati/dataStructuresAndAlgorithms/blob/master/Searching/linearSearch.py)
- シンプルなリニアサーチ (線形探索)

#### [linearSearchBeta.py](https://github.com/Wotipati/dataStructuresAndAlgorithms/blob/master/Searching/linearSearchBeta.py)
- リニアサーチ改良版
- "番兵"を用いた高速化
- indexの範囲のチェックが無い分高速化

#### [binarySearch.py](https://github.com/Wotipati/dataStructuresAndAlgorithms/blob/master/Searching/binarySearch.py)
- バイナリサーチ (二分探索)
- ソート済みの配列のサーチに有効

#### [binarySearchBeta.py](https://github.com/Wotipati/dataStructuresAndAlgorithms/blob/master/Searching/binarySearchBeta.py)
- バイナリサーチの改良版
- 同じ値が続く場合、先頭のインデックスを返す

#### [organizationSearch.py](https://github.com/Wotipati/dataStructuresAndAlgorithms/blob/master/Searching/organizationSearch.py)
- 自己組織化探索
- 一度サーチしたデータを一つ先頭へ移動させる
- 本当は一番先頭に移動させたいが、その場合全ての要素を一つずつ移動させるためO(N)の計算量が必要
- "リスト"というデータ構造を使えばO(1)でできる！