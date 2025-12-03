#ifndef KNN_H
#define KNN_H

#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

template <typename T>
class KNN {
protected:
    int k;

public:
    KNN() : k(3) {}
    KNN(int _k) : k(_k) {}
    int getK() const { return k; }

    virtual double similarityMeasure(const T& a, const T& b) const = 0;

    vector<int> findNearestNeighbours(const vector<T>& trainData, const T& target) const {
        vector<pair<double, int>> distances;

        for (size_t i = 0; i < trainData.size(); ++i) {
            double dist = similarityMeasure(trainData[i], target);
            distances.push_back({dist, (int)i});
        }

        sort(distances.begin(), distances.end());

        vector<int> neighbors;
        for (int i = 0; i < k && i < (int)distances.size(); ++i) {
            neighbors.push_back(distances[i].second);
        }

        return neighbors;
    }
};

#endif
