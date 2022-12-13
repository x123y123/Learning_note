# Machine Learning basic concept
```html
Lots of Neuron => Neural Network
A column of Neuron => hidden layer
Lots of hidden layer => Deep Learning
```
* ML = Looking for function
## Different types of Functions
* Regression : The function outputs a scalar.
* Classification : Given options (classes), the function outputs the correct one.
* Structured Learning : create something with structure (image, document).

## Find the Functions in three steps (in training data)
1. Function with Unknown Parameters`(Model)`: `y = b + wx --- based on domain knowledge`
    * y,x : known parameters ----- `feature`
    * w,b : unknown parameters (learned from data) ----- `w = weight`, `b = bias`
2. Define Loss from Training Data
    * Loss is a function of parameters `L(b, w)`.
    * Loss : how good a set of values is. 
    > error = |y - y_real| --- `MAE(mean absolute error)`
    > error = (y - y_real)^2 --- `MSE(mean square error)`
    >> if y and y_real are both probability distributions => `Cross-entropy`
3. Optimization (ex. Gradient Descent)
    * w\*, b\* = arg min L --- `w\* b\* the best value of w and b`
    * Gradient Descent : (disadvantage : may only find local minima)
        * if `slope of L/W = Negative` => `Increase w`.
        * if `slope of L/W = Positive` => `Decrease w`.
        * learning_rate(stride) * L/W.
    * hyperparameters : custom parameters, ex. learning_rate, number of iterations.
## model so simple, so we need activate function to approach real data.

* curve = constant + sum of a set of (__/---)
* if the curve in real data may be more `smooth`, maybe use `Sigmoid Function`
> Sigmoid Function
> y = c * (1 / (1 + pow(e, -(b + wx)))) = ci * sigmoid(bi + wi * x)
>> * if we change `w` parameter : `slope` will be changed.
>> * if we change `b` parameter : curve's position will be `shifted left-right`.
>> * if we change `c` parameter : curve's `height` will be changed.

### New Model: more feature

```html
y = b + wx  =>  y = b + sum of (ci * sigmoid(bi + wi * x))

y = b+ sum of (wi * xi)  =>  y = b + sum of (ci * sigmoid (bi + sum of (wij * xj)))
```

## epoch & update
```html
finish a batch   -> an update
finish all batch -> an epoch
```

* Example_1
```html
* 10000 examples (N = 10,000)
* Batch size is 10 (B = 10)
How many update in 1 epoch?

Ans: 1000 updates
```

* Example_2
```html
* 1000 examples (N = 1,000)
* Batch size is 100 (B = 100)
How many update in 1 epoch?

Ans: 10 updates
```

## reference
[ML-2021 Hung-yi Lee](https://www.youtube.com/watch?v=Ye018rCVvOo&list=PLJV_el3uVTsMhtt7_Y6sgTHGHp1Vb2P2J)
