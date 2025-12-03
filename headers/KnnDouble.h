#ifndef KNNDOUBLE_H
#define KNNDOUBLE_H

#include "KNN.h"

class KNNDouble : public KNN<pair<double, double>> {
public:
    using KNN::KNN;

    double similarityMeasure(const pair<double, double>& a, const pair<double, double>& b) const override {
        double dx = a.first - b.first;
        double dy = a.second - b.second;
        return sqrt(dx * dx + dy * dy);
    }
};

#endif
