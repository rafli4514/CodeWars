class Kata
{
public:
    std::vector<int> sortArray(std::vector<int> array)
    {
      int n = array.size();
      
      for(int i = 0; i < n; i++) {
        if(array[i] % 2 != 0) {
          for(int j = 0; j < n; j++) {
            if(array[j] % 2 != 0 && array[i] < array[j]) {
              int temp = array[i];
              array[i] = array[j];
              array[j] = temp;
            } 
          }
        }
      }
      
        return array;
    }
};
