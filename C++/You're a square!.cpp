bool is_square(int n)
{
  if(n < 0){
    return 0;
  }
  
  if(n == 0){
    return 1;
  }
  
  for(int i = 0; i < n; i++){
    if(i * i == n){
      return 1;
    }
  }
  
  return 0;
  
}
