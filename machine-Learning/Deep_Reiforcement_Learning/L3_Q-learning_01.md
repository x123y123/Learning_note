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

#### Example (MC v.s. TD)
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

    $V^\pi(s_b) = 3/4$
