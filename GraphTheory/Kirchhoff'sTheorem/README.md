# kirchhoff.py

行列木定理が成り立っているか確認するコード  

### Usage

    $ python kirchhoff.py --node <total node>

`--node <total node>`の部分でノードの数を指定する  
指定しなければ5つのノードの場合で計算する  


### Example

    $ python kirchhoff.py --node 5  



#### Results  
出力グラフ  
<img width="440" alt="graph" src="https://user-images.githubusercontent.com/26996041/27993580-36a75cf8-64e8-11e7-9c22-33ac5f798896.png">

    Adjacency matrix  
    [[ 0.  1.  1.  0.  0.]  
     [ 1.  0.  0.  1.  0.]  
     [ 1.  0.  0.  1.  1.]  
     [ 0.  1.  1.  0.  0.]  
     [ 0.  0.  1.  0.  0.]]  
    Laplacian matrix  
    [[ 2. -1. -1.  0.  0.]  
     [-1.  2.  0. -1.  0.]  
     [-1.  0.  3. -1. -1.]  
     [ 0. -1. -1.  2.  0.]  
     [ 0.  0. -1.  0.  1.]]  
    cofactors  
    4.0  
    4.0  
    4.0  
    4.0  
    4.0  
    4.0  
    4.0  
    4.0  
    4.0  
    4.0  
    4.0  
    4.0  
    4.0  
    4.0  
    4.0  
