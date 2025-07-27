List<bool> flickSwitch(List<String> lst) {
  List<bool> hasil = [];
  bool selainFlick = true;
    
  for(var i in lst){
    if(i == "flick"){
      selainFlick = !selainFlick;
      hasil.add(selainFlick);
      continue;
    }
    hasil.add(selainFlick);
  }
  
  return hasil;
}