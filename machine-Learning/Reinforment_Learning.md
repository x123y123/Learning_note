# Reinforcement Learning (RL)
* when we give machine an input, we doesn't know what is the best output.
* In the situation, we don't know the correct answer, we can use RL to fine the answer more better than last one.
## What's RL? (Three steps in ML)
* Machine Learning => Looking for a Function.
* Two parts:
    * Actor.
    * Environment.
> Action = f(Observation)  --------  `find a policy maximizing total reward`
```html
---Observation(Function input)-------> `Actor`----------Action(Function output)-------
|                                          ^                                         |
|                                          |                                         |
|                                          | reward                                  |
|                                          |                                         |
|                                          |                                         |
------------------------------------ `Environment` <----------------------------------
```
### Example: Playing Video Game (Space invader)
The rule of the game:
* Termiation: all the aliens are killed, or your spaceship is destroyed.
* Score: reward.
* How to get score: kill the aliens.
* How to defence: hide behind the shield.
> if we play this game by RL:
>> * Actor: machine.
>> * Environment: PC.
>> * Observation: the frame in the game.
>> * Action: shift left, right.
>> * Reward: if kill an alien, reward = 5.

### Review the normal ML three steps in RL
Three steps:
1. function with unknown.           
```html
Policy Network(Actor): 
1. input of neural network is `Observation`(ex. FCN, CNN, RNN, Transformer).
2. output of neural network is `Action`(ex. Sample based on scores, argmax).
```
2. define loss from training data.
-(total_reward) => loss.
```html
When game over will obtain an episode and total_reward.
```
3. optimization. (c.f. GAN)
* Between Actor and Environment.
```html
Env: Environment.
Tranjectory = {s1, a1, s2, a2....}

Env -> Env_output: s1
Actor_input: s1 ->  Actor -> Actor_output: a1
Env_input: a1 ->  Env  -> Actor_output: s2
                .
                .
                .
```
* Reward
```html
s1--
   |
   --->
        Reward ---> r1
   --->
   |
a1--

s2--
   |
   --->
        Reward ---> r2
   --->
   |
a2--
          .
          .
          .
```
* total Reward
$R(x) = \sum_{T}^{t=1}r_t$
## Policy Gradient (optimization)

### How to control your actor
## Actor-Critic

## Reward Shaping

## No Reward: Learning from Demonstration


## reference
[ML-2021 Hung-yi Lee](https://www.youtube.com/watch?v=Ye018rCVvOo&list=PLJV_el3uVTsMhtt7_Y6sgTHGHp1Vb2P2J)
