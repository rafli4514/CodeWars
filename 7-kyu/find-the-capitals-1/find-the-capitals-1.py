def capitals(kata):
    hasil: list[int] = []
    
    for i in range(len(kata)):
        if kata[i].isupper():
            hasil.append(i)
    
    return hasil
            