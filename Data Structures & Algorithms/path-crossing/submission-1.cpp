class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> visited; //sets cant contain duplicates
        int x = 0, y = 0;
        visited.insert({0, 0}); // tracing the walk

        for(char c: path) {
            if(c == 'N') {
                y++;
            } else if(c == 'S') {
                y--;
            } else if(c == 'E') {
                x++;
            } else if(c == 'W') {
                x--;
            }

            // checking if visited before insertion
            if(visited.count({x, y})) {
                return true;
            }

            visited.insert({x, y});
        }

        return false;
    }
};