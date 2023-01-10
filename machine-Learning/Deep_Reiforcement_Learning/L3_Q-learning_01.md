# DRL Lecture 3: Q-learning (Basic Idea)

## Critic
* A critic does not directly determine the action
* Given an actor $\pi$, it evaluates how good the actor is
* State value function $V^\pi(s)$
  * When using actor $\pi$, the ***cumulated*** reward expects to be obtained after visiting states $s$
  > The output values of a critic depend on the actor evaluated.

### How to estimate $V^\pi(s)$
* Monte-Carlo(MC) approach:
    * Larger variance : $G_a$ is the summation of many steps
* Temporal-difference(TD) approach:
    * smaller variance

#### Example (MC v.s. TD) - [Sutton, v2, Example 6.4]
* The critic has the following 8 episodes
    * $s_a,r = 0, s_b,r = 0$, END
    * $s_b,r = 1$, END
    * $s_b,r = 1$, END
    * $s_b,r = 1$, END
    * $s_b,r = 1$, END
    * $s_b,r = 1$, END
    * $s_b,r = 1$, END
    * $s_b,r = 1$, END
    * $s_b,r = 1$, END
    * $s_b,r = 0$, END

    > $V^\pi(s_b) = \frac{3}{4}$ \|
    > $V^\pi(s_a) = ? \ 0? \ \frac{3}{4}$
    >> * Monte-Carlo: $V^\pi(s_a) = 0$
    >> * Temporal-defference(TD): $V^\pi(s_a) = V^\pi(s_b) + r$ = $\frac{3}{4} + 0$ 
## Another Critic

* State-action value function $Q^\pi(s,a)$
    * When using actor $\pi$, the ***cumulated*** reward expects to be obtained after taking $a$ at state $s$ 
```html
                $\pi$

```
