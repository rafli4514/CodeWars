def even_numbers(arr,n):
    res = [number for number in arr if number % 2 == 0]
    return res[-n:]