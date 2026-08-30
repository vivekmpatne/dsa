class Solution {
  public:
    vector<int> getMarks(vector<int> &l, vector<int> &r, vector<int> &rank) {
        // code here
        int n = l.size();
        std::vector<long long> prefix_size(n);

        long long current_total = 0;
        for (int i = 0; i < n; ++i) {
            current_total += (r[i] - l[i] + 1);
            prefix_size[i] = current_total;
        }

        std::vector<int> result;
        result.reserve(rank.size());


        for (int q : rank) {
           
            auto it = std::lower_bound(prefix_size.begin(), prefix_size.end(), q);
            int idx = std::distance(prefix_size.begin(), it);

            long long prev_marks = (idx > 0) ? prefix_size[idx - 1] : 0;
            long long offset = q - prev_marks - 1; 

            result.push_back(l[idx] + offset);
        }

        return result;
    }
};