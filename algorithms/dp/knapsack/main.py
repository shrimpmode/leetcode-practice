weights = [4,3,1]
values = [30,20,15]

def knapsack(weights, values, capacity):
    dp = [[0] * (capacity + 1) for _ in range(len(weights) + 1)]

    for i in range(1, len(weights)+1):
        for j in range(1, capacity+1):
            print(i,j)
            if weights[i-1] <= j:
                dp[i][j] = max(dp[i-1][j], values[i-1] + dp[i-1][j-weights[i-1]])
            else:
                dp[i][j] = dp[i-1][j]
    
    return dp[capacity-1][len(weights)-1]

capacity = 4
result = knapsack(weights, values, capacity)

print(f'The max value for weight {capacity} is {result}')

