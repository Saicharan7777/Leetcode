class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int h = ((endTime[0] - '0') * 10 + endTime[1] - '0') - ((startTime[0] - '0') * 10 + startTime[1] - '0');
        int m = ((endTime[3] - '0') * 10 + endTime[4] - '0') - ((startTime[3] - '0') * 10 + startTime[4] - '0');
        int s = ((endTime[6] - '0') * 10 + endTime[7] - '0') - ((startTime[6] - '0') * 10 + startTime[7] - '0');

        return (h * 3600) + (m * 60) + s;
    }
};