class Solution {
private:
    bool check (int a[26], int b[26]){
        for(int i=0;i<26;i++)
            if(a[i]!=b[i])
                return false;
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        
        
        int count1[26]={0};

        for(int i=0;i<s1.length();i++){
            int index = s1[i]-'a';
            count1[index]++;
        }
        int i=0;
        int size = s1.length();
        int count2[26] = {0};

        while(i<size && i<s2.length()){
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }
        if(check(count1,count2))
            return 1;

        while(i<s2.length()){
            int index = s2[i] - 'a';
            count2[index] ++;

            index = s2[i-size]-'a';
            count2[index]--;
            i++;
            
            if(check(count1,count2))
                return 1;
        }
        return 0;
    }
};