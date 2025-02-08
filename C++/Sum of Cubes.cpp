unsigned int sum_cubes(unsigned int n) {
  int sum = 0;
  
  for(int i = 0; i <= n; i++){
    int cube = i * i * i;
    sum += cube;
  }
  
  return sum;
}
