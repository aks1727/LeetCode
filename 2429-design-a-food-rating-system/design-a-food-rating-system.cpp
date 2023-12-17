class FoodRatings {
public:
    map<string,map<int,set<string>> >  cuisine_rating; // [cuisine][rating] - > set<string>
    map<string,string> food_type; // [food] - > cuisine
    map<string,int> foodRating; // [food] -> rating
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for(int i = 0 ; i < foods.size() ;i++)
        {
            cuisine_rating[cuisines[i]][ratings[i]].insert(foods[i]);
            food_type[foods[i]] = cuisines[i];
            foodRating[foods[i]] = ratings[i];
        }
    }
    
    void changeRating(string food, int newRating) {
        string cuisine = food_type[food];
        int old_Rating  = foodRating[food];

        cuisine_rating[cuisine][old_Rating].erase(food);
        if(cuisine_rating[cuisine][old_Rating].size()==0)
        {
            cuisine_rating[cuisine].erase(old_Rating);
        }
        foodRating[food]=newRating;
        cuisine_rating[cuisine][newRating].insert(food);
    }
    
    string highestRated(string cuisine) {
        set<string> food_list = (*cuisine_rating[cuisine].rbegin()).second;
        return *food_list.begin();
    }
};

/**
 * Your FoodRatings object will be instantiated and called as such:
 * FoodRatings* obj = new FoodRatings(foods, cuisines, ratings);
 * obj->changeRating(food,newRating);
 * string param_2 = obj->highestRated(cuisine);
 */