# Graph_theory

#### kirchhoff.py  
行列木定理が成り立っているか確認するコード  

    $ python kirchhoff.py --dim_fn <dimension>

'''html:sample  
    python kirchhoff.py --dim_fn 5  
'''


'''html:result  
    Adjacency matrix  
    [[ 0.  0.  1.  1.  1.]  
    [ 0.  0.  0.  1.  0.]  
    [ 1.  0.  0.  1.  0.]  
    [ 1.  1.  1.  0.  1.]  
    [ 1.  0.  0.  1.  0.]]  
    Laplacian matrix  
    [[ 3.  0. -1. -1. -1.]  
    [ 0.  1.  0. -1.  0.]  
    [-1.  0.  2. -1.  0.]  
    [-1. -1. -1.  4. -1.]  
    [-1.  0.  0. -1.  2.]]  
    cofactors  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
    8.0  
'''
