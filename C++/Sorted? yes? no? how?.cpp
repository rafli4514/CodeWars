std::string is_sorted_and_how(std::vector<int> array)
{
    int n = array.size();
    bool ascending = true;
    bool descending = true;
  
    for(int i = 1; i < n; i++){
      if(array[i] > array[i - 1]){
        descending = false;
      }
      
      if(array[i] < array[i - 1]){
        ascending = false;
      }
    }
      
      if(ascending){
        return "yes, ascending";
      }else if(descending){
        return "yes, descending";
      }else{
        return "no";
      }
}
