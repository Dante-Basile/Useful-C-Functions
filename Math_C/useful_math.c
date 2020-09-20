#include "useful_math.h"

int intPow(int a, int b) {
        int res = 1;
        for (int i = 0; i < b; ++i) {
                res *= a;
        }
        return res;
}

int getMax(int aVal, int bVal) {
        if (aVal > bVal) {
                return aVal;
        }
        else {
                return bVal;
        }
}

int rightShiftCheck(int num, int shift) {
        if (shift < 64) {
                return num >> shift;
        }
        else {
                return 0;
        }
}

int leftShiftCheck(int num, int shift) {
        if (shift < 64) {
                return num << shift;
        }
        else {
                return 0;
        }
}
