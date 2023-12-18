int** generate(int numRows, int* returnSize, int** returnColumnSizes){
    *returnSize=numRows;
    int s=0;
    int **p=(int**)malloc(numRows*sizeof(int*));
    *returnColumnSizes = (int*) malloc(numRows*sizeof(int));
    for(int i=0;i<numRows;i++){
        p[i]=(int*)malloc(sizeof(int)*(i+1));
        (*returnColumnSizes)[i]=i+1;
        p[i][0]=1;
        p[i][i]=1;
        for(int j=1;j<i;j++){
            p[i][j]=p[i-1][j-1]+p[i-1][j];
        }
    }
return p;
}