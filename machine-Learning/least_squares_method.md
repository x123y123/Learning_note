# Least Squares Method

y
^
|
|     **  *
|   * **
| ** **
|* **
-----------------> x
* if our data is like the above picture, we can find a `Linear Regression`.
* we can use `y = ax + b` to represents the current trend of the data.
* if we sum up the distance between this line and each point on the plane and calculate the average, we will find that the error of the line from the data trend is actually not large:
> prediction = ax + b
> error = y - prediction
> error_total = 1/m * error_sum
* But if we use above formula to predict idea line it may find a vertical line, `because error may be positive or negative, and both of them will eliminate our error`, so we can `use square method to fix the positive and negative canceling effect`, like the following improvement to solve it:
> prediction = ax + b
> error = (y - prediction)^2
> error_total = 1/m * error_sum

