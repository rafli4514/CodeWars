bool consecutive(std::vector<int>arr, int a,int b){
  int n = arr.size();
  
  for(int i = 0; i < n - 1; i++){
    if((arr[i] == a && arr[i+1] == b) || (arr[i] == b && arr[i+1] == a)){
      return true;
    }
  }
  
  return false;
}
