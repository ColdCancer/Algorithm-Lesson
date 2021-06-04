## 费马小定理

若 p 是质数，则对任意整数 a，有 $a^p \equiv a(mod\ p)$

## 欧拉定理

若正整数 a，n 互质，则 $a^{\phi(n)} \equiv 1(mod\ n)$

## 欧拉定理的推论

若正整数 a，n 互质，则对任意正整数 b，有 $a^b \equiv a^{b \mod \phi(n)} (mod\ n)$

特别地，当 a，n 不一定互质且 $\phi(n) < b$ 是，有 $a^b \equiv a^{b \mod \phi(n) + \phi(n)} (mod\ n)$

## Lucas 定理

若 p 是质数，则对于任意整数 $1 \leq m \leq n$ 有， $C^m_n \equiv C^{m\%p}_{n\%p}*C^{m/p}_{n/p}(mod\ p)$

## Catalan 数列

$$Cat_n=\frac{C^n_{2n}}{n+1}$$

- n 对合法括号（）序列的数量
- 1,2,...,n 栈的合法出栈数量
- n 个节点不同的二叉树数量
- 从(0,0)到(n,n)向上或向右不触碰对角线的合法数量 $2Cat_{n-1}$