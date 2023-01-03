# DRL Lecture 1: Policy Gradient
> `Proximal Policy Optimization (PPO)` is a default RL algorithm at `OpenAI`.
outline:
* Policy Gradient
* On-policy -> Off-policy
* Add constraint  
## Policy of Actor 
* policy $\pi$ is a network with parameter $\theta$.
 * Input: `the observation of machine represented` as `vector` or a `matrox`.
 * Output: `each action` corresponds to a neuron in output layer.
### Example
* execute steps: Env -> $s_1$ -> Actor -> $a_1$ -> Env -> $s_2$ -> Actor -> $a_2$ -> ...
  * Trajector $\tau$ = {$s_1$, $a_1$, $s_2$, $a_2$, ..., $s_T$, $a_T$}
  * the probability $p_\theta(\tau)$ of each trajector $\tau$ : $p(s_1)p_\theta(a_1 \mid s_1)p(s_2 \mid s_1, a_1)p_\theta(a_2 \mid s_2)p(s_3 \mid s_2,a_2)$ ...
## Expected Reward
All the things we need to do is `maximize expected reward` $\nabla{\bar{R_\theta}}$.
* Expected Reward $\bar{R_\theta} = \sum{R(\tau)p_\theta(\tau)}$.
