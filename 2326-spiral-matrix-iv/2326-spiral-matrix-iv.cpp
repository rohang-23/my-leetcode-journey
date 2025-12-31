class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
       vector<vector<int>> matrix(m,vector<int> (n,-1));
        int minr = 0;
        int minc = 0;
        int maxr = m-1;
        int maxc = n-1;

        ListNode* temp = head;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int j = minr; j<=maxc; j++){
            if(temp==NULL) return matrix;
            matrix[minr][j]= temp->val;
            temp = temp->next;
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        //down
        for(int i= minr; i<=maxr; i++){
             if(temp==NULL) return matrix;
            matrix[i][maxc] = temp->val;
            temp=temp->next;
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //left
        for(int j = maxc; j>=minc; j--){
             if(temp==NULL) return matrix;
            matrix[maxr][j] = temp->val;
            temp = temp->next;
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //up
        for(int i= maxr; i>=minr; i--){
             if(temp==NULL) return matrix;
            matrix[i][minc] = temp->val;
            temp = temp->next;
        }
        minc++;
        if(minr>maxr || minc>maxc) break;
    }
    return matrix;  
    }
};