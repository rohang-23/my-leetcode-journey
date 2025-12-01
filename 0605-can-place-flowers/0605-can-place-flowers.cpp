// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//         int m = flowerbed.size();
//         int count=0;
//         int i=0;
//         if(flowerbed[i+1]==0 ){
//             flowerbed[i]=1;
//         }
//         if(flowerbed[m-2]==0)
//             flowerbed[m-1]=1;
//         }
//         for(int i=1;i<(m-1);i++){
//             if(flowerbed[i-1]==0 && flowerbed[i+1]==0 && flowerbed[i]==0){
//                 flowerbed[i]=1;
//                 count++;
//             }
//         }
//         if(count>=) return true;
//         else return false;
//     }
// };
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int m = flowerbed.size();
        int count = 0;

        if (n == 0) return true; // nothing to plant

        for (int i = 0; i < m; i++) {
            if (flowerbed[i] == 0) {
                bool emptyLeft  = (i == 0)     || (flowerbed[i-1] == 0);
                bool emptyRight = (i == m - 1) || (flowerbed[i+1] == 0);

                if (emptyLeft && emptyRight) {
                    flowerbed[i] = 1; // plant here 🌱
                    count++;
                    if (count >= n) return true; // early exit
                }
            }
        }

        return count >= n;
    }
};
