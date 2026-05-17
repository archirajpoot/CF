int left=0;
int right=matrix[0].size();
int top=0;
int bottom=matrix.size();
while(top<=bottom && left<=right){
    for(int i=left;i<right;i++){
        cout<<matrix[top][i];
    }
    top++;
    for(int i=top;i<bottom;i++){
        cout<<matrix[i][right];
    }
    right--;
    for(int i=right;i>=left;i--){
        cout<<matrix[bottom][i];
    }
    bottom--;
    for(int i=bottom;i>=top;i--){
        cout<<matrix[i][left];
    }
    left++;
}