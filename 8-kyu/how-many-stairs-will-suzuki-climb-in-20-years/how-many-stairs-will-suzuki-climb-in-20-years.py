def stairs_in_20(tangga):
    total_langkah: int = 0
    
    for langkah_harian in tangga:
        for langkah in langkah_harian:
            total_langkah = total_langkah + langkah
            
    total_20_tahun: int = total_langkah * 20
    
    return total_20_tahun