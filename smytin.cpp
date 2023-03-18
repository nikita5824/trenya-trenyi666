#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string longest_common_substring(string str1, string str2) {
    int n1 = str1.length();
    int n2 = str2.length();

    int dp[n1+1][n2+1];
    int max_length = 0;
    int end_pos = 0;

    for (int i = 0; i <= n1; i++) {
        for (int j = 0; j <= n2; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            } else if (str1[i-1] == str2[j-1]) {
                dp[i][j] = dp[i-1][j-1] + 1;
                if (dp[i][j] > max_length) {
                    max_length = dp[i][j];
                    end_pos = i;
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    if (max_length == 0) {
        return "";
    } else {
        return str1.substr(end_pos - max_length, max_length);
    }
}

int main() {
    string str1 = "hello world";
    string str2 = "hola mundo";
    string common_substring = longest_common_substring(str1, str2);
    cout << "Longest common substring: " << common_substring << endl;
    return 0;
}
