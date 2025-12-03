#ifndef KNNSTRING_H
#define KNNSTRING_H

#include "KNN.h"

class KNNString : public KNN<vector<string>> {
public:
    using KNN::KNN;

    int levenshtein(const string& a, const string& b) const {
        int m = a.size(), n = b.size();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1));

        for (int i = 0; i <= m; ++i) dp[i][0] = i;
        for (int j = 0; j <= n; ++j) dp[0][j] = j;

        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (a[i - 1] == b[j - 1])
                    dp[i][j] = dp[i - 1][j - 1];
                else
                    dp[i][j] = 1 + min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
            }
        }
        return dp[m][n];
    }

    double similarityMeasure(const vector<string>& a, const vector<string>& b) const override {
        double total = 0;
        for (size_t i = 0; i < a.size(); ++i) {
            total += levenshtein(a[i], b[i]);
        }
        return total;
    }
};

#endif
