// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  int leftgran = 0;
  int rightgran = size - 1;
  while (leftgran <= rightgran) {
    int sered = (leftgran + rightgran) / 2;
      if (arr[sered] == value) {
      count++;
      int i = sered - 1;
      while (i >= leftgran && arr[i] == value) {
        count++;
        i--;
      }
      i = sered + 1;
      while (i <= rightgran && arr[i] == value) {
        count++;
        i++;
      }
      break;
    } else if (arr[sered] < value) {
      leftgran = sered + 1;
    } else {
      rightgran = sered - 1;
    }
  }
  return count;
}

