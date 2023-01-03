# DRL Lecture 1: Policy Gradient
> `Proximal Policy Optimization (PPO)` is a default RL algorithm at `OpenAI`.
outline:
* Policy Gradient
* On-policy -> Off-policy
* Add constraint  
## Policy of Actor 
* policy \`$pi$\` is a network with parameter `\$theta$`.
 * Input: `the observation of machine represented` as `vector` or a `matrox`.
 * Output: `each action` corresponds to a neuron in output layer.
 * exe steps: Env -> $s_1$ -> Actor -> $a_1$ -> Env -> $s_2$ -> Actor -> $s_2$ -> ...
  * Trajector $\tao$


