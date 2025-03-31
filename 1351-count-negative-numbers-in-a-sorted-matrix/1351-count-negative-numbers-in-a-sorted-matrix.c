int countNegatives(int** grid, int gridSize, int* gridColSize) {
    int n_cnt = 0;
    for(int i=0 ; i < gridSize ; i++){
        for(int j=0 ; j<gridColSize[i] ; j++){
            if(grid[i][j] < 0){
                n_cnt ++ ;
            }
        }
    }
    return n_cnt; 
}