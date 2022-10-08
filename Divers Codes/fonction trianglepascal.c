int** pascal(int N){

    int ** array = 0;

    array = new int *[N];

   for (int i = 0; i < N; i++) {
       array[i] = new int [i+1];
//       array[i][i+1]=0;
       array[i][0] = 1;
       array[i][i] = 1;

        for (int j = 0; j < i+1; j++) {
            if (array[i][j]==0) {
             array[i][j]=array[i-1][j-1]+array[i-1][j];
            }
        }
   }
   return array;
}
