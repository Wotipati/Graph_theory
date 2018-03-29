# BinaryTree
- あるノードが最大2個しか子ノードを持たないツリー構造（2分木）
- 親ノードより小さい値は親ノードより上に、大きい値は下に位置する

#### Example
```$xslt
        6
    22
        24
            26
71
        91
    97
Please enter the next operation.
1: Add, 2: Delete, 0: Finish 1
Please enter the number that you want to add: 30
        6
    22
        24
            26
                30　<< 30が追加される
71
        91
    97
Please enter the next operation.
1: Add, 2: Delete, 0: Finish 2
Please enter the number that you want to delete: 26
        6
    22
        24
            30　　  << 26が消去される
71
        91
    97
Please enter the next operation.
1: Add, 2: Delete, 0: Finish 1
Please enter the number that you want to add: 5
            5      << 5が追加される
        6
    22
        24
            30
71
        91
    97
Please enter the next operation.
1: Add, 2: Delete, 0: Finish 2
Please enter the number that you want to delete: 22
        5
    6               << 22が消去される
        24
            30    
71
        91
    97
```

#### struct Node
2分木を構成するノードを実装した構造体
```c++
struct Node{
    int value_;      // ノードが保持する値
    Node *left_;     // 自分より小さい値を持ったノードへのポインタ
    Node *right_;    // 自分より大きい値を持ったノードへのポインタ
    Node *parent_;   // 親ノードへのポインタ
};
```

#### class BinaryTree
2分木を実装したクラス
```c++
class BinaryTree{
public:
    BinaryTree();
    ~BinaryTree();

    void insertNode(int value);
    bool deleteNode(int value);
    Node *searchNode(int value) const;
    void setupTree(int num);
    void displayTree() const;
    void clearTree();
```
##### `void insertNode(int value)`
2分木に指定した値（`value`）を挿入する

##### `void deleteNode(int value)`
2分木から指定した値（`value`）を取り除く

##### `Node *searchNode(int value);`
指定した値を持ったノードののポインタを返す

##### `void setUpTree(int num)`
2分木に指定した個数（`num`）のノード（値は0~99のランダム）を追加する

##### `void displayTree()`
現在の2分木の状態を表示

##### `coid clearTree()`
2分木全体を消去

