int expressionMatter(a, b, c) {
  List<int> res = [(a + b + c), (a * b * c), ((a + b) * c), (a * (b + c))];
  int max = 0;
  
  for(var i in res){
    if(max < i){
      max = i;
    }
  }
  return max;
}