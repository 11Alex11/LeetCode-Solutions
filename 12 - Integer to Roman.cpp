class Solution {
public:
    string intToRoman(int num) {
        string converted;
        int roman[13];
        int romanInts [13]= {1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string romanSymbols [13] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        for(int i=0;i<13;i++){
            roman[i] = num/romanInts[i];
            num-=roman[i]*romanInts[i];
            for(int j=roman[i];j>0;j--){
                converted+=romanSymbols[i];
            }
        }
        return converted;
    }
};
