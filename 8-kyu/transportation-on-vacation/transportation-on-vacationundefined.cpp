int rental_car_cost(int d){
 int total = d * 40;
  
  if(d >= 3){
    total -= 20;
  }
  
  if(d >= 7) {
    total -= 30;
  }
  
  return total;
}
