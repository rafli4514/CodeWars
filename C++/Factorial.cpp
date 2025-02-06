long long factorial(int n){
  if(n == 0){
    return 1;
  }
  
  return n * factorial(n - 1);
}

long long factorial(int n){
  if(n == 0){
    return 1;
  }
  
  long long res = 1;
  
  for(int i = n; i >= 1; i--){
    res *= i;
  }
  
  return res;
}

long long factorial(int n){
  if(n == 0){
    return 1;
  }
  
  long long res = 1;
  
  while(n > 0){
    res *= n;
    n--;
  }
  
  return res;
}
