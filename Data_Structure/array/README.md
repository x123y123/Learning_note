# Arrays
* 連續的儲存空間
* 一個index對應一個data
## 2D array
* 二維陣列（`可稱為矩陣`）。
* array A:
```html
    | 1  5  9  |
    | 2  6  10 |
    | 3  7  11 |
    | 4  8  12 |
```
 * row數： 4
 * col數： 3
 * A[0][0] = 1, A[2][1] = 7
 * In C/C++, is using `row-major`.
## Row-major
array A:
 ```html
      | 1  5  9  |
      | 2  6  10 |
      | 3  7  11 |
      | 4  8  12 |
  ```
 In row-major matrix, it will represent:
 ```graphviz
digraph Array
{	
	node[shape=record]
	store1 [label="<f0>1 |<f1>5 |<f2>9|<f3>2|<f4>6|<f5>10|<f6>..."];
}
```
So it can use pointer to find the element:
* `p` pointer to array head.
* `i` row of element.
* `j` col of element.
* `c` total_col of array.
* `d` size of every each element.
> A[i][j] = p + (i * c + j) * d.  =>  A[2][1] = p + (2 * 3 + 1) * d = p + 7d = 7

## cache-aware advantage
Because of cache has `Locality of Reference`, so sometimes useing array(continuous memory) will upper performance in programming
