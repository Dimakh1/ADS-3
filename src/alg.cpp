// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int count = 0;
  int left = 0;
  int right = size - 1;
  while (left <= right) {
    int middle = (left + right) / 2;
    if (arr[middle] == value) {
      count++;
      int i = middle - 1;
      while (i >= left && arr[i] == value) {
        count++;
        i--;
      }
      i = middle + 1;
      while (i <= right && arr[i] == value) {
        count++;
        i++;
      }
      break;
    } else if (arr[middle] < value) {
      left = middle + 1;
    } else {
      right = middle - 1;
    }
  }
  return count;
}
