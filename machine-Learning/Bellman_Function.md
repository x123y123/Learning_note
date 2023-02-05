# Bellman Function
> `Value Function` represent RL target. If we find the answer of value function, we also can find RL optimal answer.
>> If we want to find out the answer of value function, we have to use `Bellman function` to simplify it.

We usually face two types of environment:
* Episodic Tasks: exist final state
* Continuing Tasks: doesn't exist final state, but we can set the end point, let it become `Episodic Tasks`.

## Expected Return (G)
Expected Return is the max target, which must be the sum of total reward(R) after time(T).

$G_t = R_t+1 + R_t+2 +R_t+3 + ... + R_T$

But in continuing tasks doesn't exist final state, so we add the `discount factor($\gamma$)`, it also can `represent how important future rewards are to the current state`.
> $0 \le \gamma \le 1$
>> * if $\gamma$ more bigger, it will consider more future.
>> * if $\gamma$ more smaller, it will more focus on current state.

So new expected return:

$G_t = R_(t+1) + \gamma R_t+2$