import numpy as np
import matplotlib.pyplot as plt

# Define the function f(x)
def f(x, a):
    return np.abs(x)**(2/3) + (np.exp(1)/3) * np.sqrt(np.pi - x**2) * np.sin(a * np.pi * x)

# Define the range of x values
x = np.linspace(-np.sqrt(np.pi), np.sqrt(np.pi), 400)

# Set the value of a
a = 10

# Compute the y values
y = f(x, a)

# Plot the function
plt.figure(figsize=(10, 6))
plt.plot(x, y, label=f'a={a}')

# Add labels and title
plt.xlabel('x')
plt.ylabel('f(x)')
plt.title('Plot of f(x) for a=10')
plt.legend()
plt.grid(True)
plt.show()