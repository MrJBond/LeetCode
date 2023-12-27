class Solution {
public:

// Brute force ( Runtime error )

/*int minCost(string colors, vector<int>& neededTime){
    vector<vector<int>> costs;
    for(int i = 0; colors[i] != '\0'; i++){
	char first = colors[i];
	vector<int> vec;
	vec.push_back(neededTime[i]);

	int j = i+1;	

    if(colors[i] == colors[i+1]){
	    while(first == colors[j]){
	        vec.push_back(neededTime[j]);
	        j++;
	    }	
	    i = i+j-1;
    }
	costs.push_back(vec);
    }   

	int result = 0;
 	for(int i = 0; i<costs.size(); i++){
	   if(costs[i].size() != 1){
	     //for(int j = 0; j < costs[i].size(); j++){
		 //   result += costs[i][j];
	     //} 
         result += std::accumulate(costs[i].begin(), costs[i].end(),0);
                                
	     result -= *max_element(costs[i].begin(), costs[i].end());
	   }
	}
	return result;
}*/

int minCost(string colors, vector<int>& neededTime){
   int result = 0;
   int prev = 0;

   for(int i = 1; colors[i] != '\0'; i++){

      if(colors[prev] != colors[i]){
          prev = i;
      }else{
        int prevEl = neededTime[prev];
        int el = neededTime[i];

        if(prevEl > el){
           result += el;
        }else{
           result += prevEl;
           prev = i;
        }
      }
   }
   return result;
}
};
