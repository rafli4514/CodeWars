String rnaToDna(String dna) {
  List<String> rna = [];
  for(var huruf in dna.split("")){
    if (huruf == "T"){
      rna.add("U");
      continue;
    }
    rna.add(huruf);
  }
  
  return rna.join("");
}