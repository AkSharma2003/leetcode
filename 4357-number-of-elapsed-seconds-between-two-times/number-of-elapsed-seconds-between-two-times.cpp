class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int h = stoi(startTime.substr(0, 2));
        int m = stoi(startTime.substr(3, 2));
        int s = stoi(startTime.substr(6, 2));

        int start = (h * 60 + m) * 60 + s;

        h = stoi(endTime.substr(0, 2));
        m = stoi(endTime.substr(3, 2));
        s = stoi(endTime.substr(6, 2));

        int end = (h * 60 + m) * 60 + s;

        return end-start;
    }
};