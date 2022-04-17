#include <iostream>
#include <vector>
using namespace std;

bool betterThanAverage(vector<int> classPoints, int yourPoints) {
    float sum = 0;
    for (auto & elem : classPoints)
    {
        sum = sum + elem;
    }
    return yourPoints > float(sum / classPoints.size());
}

int main(){
    betterThanAverage({2, 3}, 5);
}
