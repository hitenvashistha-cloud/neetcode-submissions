class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
       
        stack<double>st;
        vector<double> time(position.size());
        vector<pair<int,int>> cars;
        
        for(int i = 0 ; i < position.size(); i++){
          cars.push_back({position[i],speed[i]});
        }
        sort(cars.begin(),cars.end());

        for(int i = 0 ; i < position.size(); i++){
           time[i] = (target - cars[i].first) / (double)cars[i].second;
        }
      for (int i = position.size() - 1; i >= 0; i--) {
    if (st.empty() || time[i] > st.top()) {
        st.push(time[i]);
    }
}
        
        return st.size();
    }
};
