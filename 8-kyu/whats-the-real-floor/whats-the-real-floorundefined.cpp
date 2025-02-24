int getRealFloor(int f) {
  if(f <= 0){
    return f;
  }
  
  if(f > 0 && f < 13){
    return f - 1;
  }
    
  return f - 2;
}
