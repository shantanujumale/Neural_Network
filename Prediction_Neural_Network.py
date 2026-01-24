# def mcculloch_pitts(x, w, n, thr):
#     total_sum = 0
#     for i in range(n):
#         total_sum += x[i] * w[i]

#     if total_sum >= thr:
#         return 1
#     else:
#         return 0


# # Main program
# x = [0, 0]          # inputs
# w = [1, 1]          # weights

# print("Enter input (0 or 1):")
# x[0] = int(input("x1: "))
# x[1] = int(input("x2: "))

# # AND gate
# thr = 2
# print("AND gate output:", mcculloch_pitts(x, w, 2, thr))

# # OR gate
# thr = 1
# print("OR gate output:", mcculloch_pitts(x, w, 2, thr))


#------------------------------------------------------------------------


import pandas as pd
import numpy as np
import math


# input = [[0,0],[0,1],[1,0],[1,1]]
# traget=[0,0,0,1]

# w=[0,0]
# b=0
# learning_rate=0.1

# # Training  for 5 iterations
# for epoch in range(5):
#     print(f'Epch {epoch + 1}')
#     for i in range(len(input)):
#         x=input[i]
#         target=traget[i]

#         #perceptron output
#         output = 1 if (w[0] * x[0] + w[1] * x[1] + b)>0 else 0

#         #weight update

#         w[0] += learning_rate * (target - output)* x[0]
#         w[1] += learning_rate * (target - output)* x[1]
#         b += learning_rate * (target - output)
#         print(f'Input: {x}, Target: {target}, Output: {output}, Weights: {w}, Bias: {b} ')



#------------------------------------------------------------------------
#Simple Loan Eligibility Checker (classification)

data=[
    [45000, 5, 0],
    [60000, 10, 1],
    [35000, 3, 0],
    [80000, 15, 1],
    [120000, 20, 1],
    [30000, 2, 0]
]

# scaling factors
income_scale=10000
age_scale=100


#Initial weight and bias
w=[0,0]
b=0
learning_rate=0.01
epochs=500 # more epochs for better traning

#sigmoid function

def sigmoid(x):
    return 1/(1+math.exp(-x))

#Traning using basic gradient descent

for epoch in range(epochs):
    for d in data:
        income,age,target=d
        x1=income/income_scale
        x2=age/age_scale
        z=w[0] * x1 + w[1] * x2 +b
        y=sigmoid(z)

        error = target - y

        # weight update

        w[0] += learning_rate *  error * x1
        w[1] += learning_rate * error * x2
        b+=learning_rate * error

print("traning complete")
print(f"Weight: {w}, Bias: {b}\n")

#test user input
while True:

    income=float(input("Enter your annual income: "))
    age=float(input("Enter your age: "))

    x1=income/income_scale
    x2=age/age_scale

    output=sigmoid(w[0] * x1 + w[1] * x2 +b)

    #treshold 0.5
    if output >= 0.5:
        print('Congratulations! You are eligible for the loan.')

    else:
        print("sorry, you are not eligible for loan.")



