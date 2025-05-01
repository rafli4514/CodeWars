def remove(st, n):
    new_st = ""
    
    for ch in st:
        if ch == "!" and n > 0:
            n -= 1
            continue
        new_st += ch
    
    return new_st
​