class Solution {
public:
string categorizeBox(int length, int width, int height, int mass) {
    bool isbulky = false;
    bool isheavy = false;
    long long volume = (long long)length * (long long)width * (long long)height;
    if (length >= 10000 || width >= 10000 || height >= 10000 || volume >= pow(10,9)) {
        isbulky = true;
    }
    if (mass >= 100) {
        isheavy = true;
    }
    if (isbulky && isheavy) {
        return "Both";
    }
    if (!isbulky && !isheavy) {
        return "Neither";
    }
    if (isbulky && !isheavy) {
        return "Bulky";
    }
    if (!isbulky && isheavy) {
        return "Heavy";
    }
    return "";
}

};