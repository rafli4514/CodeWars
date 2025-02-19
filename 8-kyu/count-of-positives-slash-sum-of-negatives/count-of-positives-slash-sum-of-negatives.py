def count_positives_sum_negatives(arr):
    positive = 0
    negative = 0
    
    if arr == []:
        return arr
    
    for i in range(len(arr)):
        if arr[i] > 0:
            positive += 1
        elif arr[i] < 0:
            negative += arr[i]
            
    return [positive, negative]