int mango(int quantity, int price)
{  
 
  int total;
  int free;
  
  if(quantity >= 3) {
    free = quantity / 3;
    quantity -= free;
  }
  
  total = quantity * price;
  
  return total;  
}
