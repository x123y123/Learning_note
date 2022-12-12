# Machine Learning basic concept
ML = Looking for function
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

## reference
[ML-2021 Hung-yi Lee](https://www.youtube.com/watch?v=Ye018rCVvOo&list=PLJV_el3uVTsMhtt7_Y6sgTHGHp1Vb2P2J)
