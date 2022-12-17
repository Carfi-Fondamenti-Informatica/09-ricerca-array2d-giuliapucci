int bodyguard (char lista[][20], char nome[20]) {
  int i=0, j=0;
  while ((j>29)and(i<10)) {
    if (lista[i][j]!=nome[j]) {
      i++;
      j=0;
    } else if (lista[i][j]==nome[j]) {
      j++;
    }
  } return 1;
