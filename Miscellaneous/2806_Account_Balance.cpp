/*class Solution {
public:
    int accountBalanceAfterPurchase(int purchaseAmount) {
        int r=(purchaseAmount/10)*10;
        if((purchaseAmount-r)<5){
            return 100-r;
        }
        else{
            return 100-(r+10);
        }

    }
};
*/

/*
class Solution {
public:
    int accountBalanceAfterPurchase(int pa) {
        
        double x = (double)pa/10;
        int y = round(x);
        y=y*10;
        
        return 100-y;
        
    }
};
*/