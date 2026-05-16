import numpy as np

# Step activation function
def step(x):
    return 1 if x >= 0 else 0

# Training data: [hours studied, hours slept]
X = np.array([
    [2, 9],   # studied little, slept a lot → fail
    [1, 5],   # low study, medium sleep → fail
    [6, 2],   # studied well, less sleep → pass
    [7, 1]    # studied a lot, very little sleep → pass
])

# Labels: 0 = Fail, 1 = Pass
y = np.array([0, 0, 1, 1])

# Initialize weights and bias
weights = np.random.rand(2)
bias = np.random.rand(1)
learning_rate = 0.1

# Training loop
for epoch in range(20):  # 20 iterations
    for i in range(len(X)):
        linear_output = np.dot(X[i], weights) + bias
        prediction = step(linear_output)
        
        # Update rule: w = w + lr * (y - y_pred) * x
        error = y[i] - prediction
        weights += learning_rate * error * X[i]
        bias += learning_rate * error

print("Final weights:", weights)
print("Final bias:", bias)

# Test with new data
test = np.array([4, 3])  # studied 4 hrs, slept 3 hrs
result = step(np.dot(test, weights) + bias)
print("Prediction (1=Pass, 0=Fail):", result)
