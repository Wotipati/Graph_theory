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
- シンプルなリニアサーチ(線形探索)

#### [linearSearchBeta.py](https://github.com/Wotipati/dataStructuresAndAlgorithms/blob/master/Searching/linearSearchBeta.py)
- リニアサーチ改良版
- "番兵"を用いた高速化
- indexの範囲のチェックが無い分高速化