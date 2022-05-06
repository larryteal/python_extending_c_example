int c_prime_counter(int frm, int til) {
  int primecount = 0;
  for (int num = frm; num <= til; num++) {
    int flag = 0;
    if (num > 1) {
      for (int candidate = 2; candidate < num; candidate++) {
        if ((num % candidate) == 0) {
          flag = 1;
          break;
        }
      }
      
      if (flag == 0) {
        primecount++;
      }
    }
  }
  return primecount;
}