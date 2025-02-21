
// Code Leet code ke According likha gya he  explanation khud se kr lena 
class Solution {
  public:
      int maxFrequencyElements(vector<int>& nums) {
          unordered_map<int, int> freq;
          int maxFreq = 0, count = 0;
          
          // Count the frequency of each element
          for (int num : nums) {
              freq[num]++;
              maxFreq = max(maxFreq, freq[num]); // Update max frequency
          }
  
          // Sum up occurrences of elements that have the max frequency
          for (auto& it : freq) {
              if (it.second == maxFreq) {
                  count += it.second;
              }
          }
  
          return count;
      }
  };
