class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int N = s.length(); //C++���r�����
        int one = 0; //s�̭�, ���X��1�O? ���@�U�|�C�C�ƥX��
        for(int i=0; i<N; i++){ // c/c++�j��( )
            if(s[i]=='1')one += 1;
        }
        //printf("N:%d one:%d",N, one);
        string ans;
        for(int i=0; i<one-1; i++) ans += '1';
        for(int i=0; i<N-one; i++) ans += '0';
        ans += '1';//�̫���1
        return ans;
    }
};
