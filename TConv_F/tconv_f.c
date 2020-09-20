#include "tconv_f.h"
#include <string.h>
#include <stdlib.h>

/*
 * Padds less significant hex. Adds zeros to end because will be reversed.
 * Parameters:
 *      decInt - the decimal integer to convert to padded hexadecimal string
 * Returns:
 *      dynamically allocated string representation of padded hexadecimal
 */
char *hexFtPad(char *hexStr) {
        while (strlen(hexStr) < 16) {
                strcat(hexStr, "0");
        }
        return hexStr;
}

char *revStr(char *inStr) {
        size_t len = strlen(inStr);
        char temp;
        for (size_t i = 0; i < len / 2; ++i) {
                temp = inStr[i];
                inStr[i] = inStr[len - i - 1];
                inStr[len - i - 1] = temp;
        }
        return inStr;
}

char *decIntToHexStr(int decInt, int pad) {
        char *hexStr = malloc(16 * sizeof(char) + sizeof(char));
        hexStr[0] = '\0';
        while (decInt != 0) {
                char *hexCharStr = decIntToHexCharStr(decInt % 16);
                strcat(hexStr, hexCharStr);
                free(hexCharStr);
                decInt /= 16;
        }
        if (pad) {
                hexStr = hexFtPad(hexStr);
        }
        return revStr(hexStr);
}

void write_string(const char s[]) {
        size_t strLen = 0;
        size_t i = 0;
        while (s[i] != '\0') {
                ++strLen;
                ++i;
        }
        write(1, s, strLen);
}

char intToHexChar(int decInt) {
        char outChar;
        if (decInt < 10) {
                outChar = (char)(decInt + 48);
        }
        else {

                outChar = (char)(decInt + 87);
        }
        return outChar;
}

void formatDecToHex(long decInt, size_t strLen, char charArr[]) {
        for (size_t i = 0; i < strLen; ++i) {
                charArr[i] = '0';
        }
        charArr[strLen] = '\0';
        int digIdx = strLen - 1;
        while (decInt != 0) {
                charArr[digIdx] = intToHexChar(decInt % 16);
                decInt /= 16;
                --digIdx;
        }
}

long hex_to_printable(long byteval) {
        if (byteval >= 32 && byteval <= 126) {
                return byteval;
        }
        else {
                return 46;
        }
}
