std::string replaceAll(std::string str) {
  int n = str.length();
  std::string url = "";
  
  for(int i = 0; i < n; i++){
    if(str[i] == '#'){
      break;
    }
    url += str[i];
  }
  
  return url;  
}
