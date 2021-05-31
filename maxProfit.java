static int solve(int[] P_i, int N) {
  int i, j, max = 0;
  int maxArray[] = new int[N];

  for (i = 0; i < N; i++) {
    maxArray[i] = P_i[i];
  }
  for (i = 1; i < N; i++) {
    for (j = 0; j < i; j++) {
      if (P_i[i] > P_i[j] && P_i[i] % P_i[j] == 0 && maxArray[i] < maxArray[j] + P_i[i]) {
        maxArray[i] = maxArray[j] + P_i[i];
      }
    }
  }
  for (i = 0; i < N; i++) {
    if (max < maxArray[i]) {
      max = maxArray[i];
    }
  }
  return max;
}
