#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void permuteFun(vector<int>& nums, int i, vector<vector<int>>& ans) {
        
        //base case
        if(i >= nums.size()) {
            ans.push_back(nums);
            return;
        }
        
        for(int j = i; j<nums.size(); j++) {
            swap(nums[i], nums[j]);
            permuteFun(nums, i+1, ans);
            //backtrack
            swap(nums[i], nums[j]);
        }
    }
    
int main() {
    
    /*
        int home[21];

    cout<<"The value is "<<home[15]<<endl;
    */
    vector<int> v{2,3,1};

    
    for(int i = 0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }cout<<endl;

    int i = 0;
    vector<vector<int>> ans;

    permuteFun(v, i, ans);

    vector<int> nextPerm;
        
    sort(ans.begin(), ans.end());

    for(int i = 0; i<ans.size(); i++) {

        if(ans[i] == v && i == ans.size()-1){
            nextPerm = ans[0];
        }
        else if(ans[i] == v) {
            nextPerm = ans[i+1];
        }
    }

    for(int i = 0; i<nextPerm.size(); i++) {
            cout<<nextPerm[i]<<" ";
    }

}