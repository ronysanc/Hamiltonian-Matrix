# Hamiltonian-Matrix
Generating a hamiltonian in the matrix form
## Hamiltonian
The Hamiltonian can be represented by creation and annihilation operators terms, using the dirac bracket notation the Hamiltonian of system can be write as follows:

$$H=g\sum_{i=1}^{n}\ket{i}\bra{i+1}+\ket{i}\bra{i-1} + \epsilon\sum_{i=1}^{n}\ket{i}\bra{i}$$

In this program we are only concerned with computing the matrix of our Hamiltonian operator, i.e. our matrix has the following form:

$$\hat{H} = \bra{\psi}H\ket{\psi}= 
\begin{bmatrix}
\epsilon & g & 0 & \cdots & 0 \\
g & \epsilon & g & \cdots & 0 \\
0 & g & \epsilon & \cdots & 0 \\
\vdots & \vdots & \vdots & \ddots & g \\
0 & 0 & 0 & \cdots & \epsilon
\end{bmatrix}
$$