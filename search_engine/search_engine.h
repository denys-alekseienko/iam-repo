#include <vector>
using namespace std;

class Search_Engine_Interface {
    public:
        virtual vector<double> binarySearch(int target) = 0;
        virtual ~Search_Engine_Interface() {}
};

class Search_Engine : public Search_Engine_Interface {
    private:
        vector<int> keys;
        vector<vector<double>> memory_matrix;
    public:
        Search_Engine::Search_Engine(vector<int> keys, vector<vector<double>> memory_matrix);
        vector<double> binarySearch(int target);
};