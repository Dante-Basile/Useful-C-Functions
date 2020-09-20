/*
 * Extra functions for typeconversion and formatting.
 */

#ifndef TCONV_F_H
#define TCONV_F_H

/*
 * Reverse the order of a dynamically allocated string.
 * Parameters:
 *      inStr - string to be reversed
 * Returns:
 *      the string in reverse order
 */
char *revStr(char *inStr);

/*
 * Write null terminated string to stdout.
 * Parameters:
 * 	s - char array ending in null terminator
 */
void write_string(const char s[]);

/*              
 * Converts a decimal integer into the corresponding hexadecimal char.
 * Parameters:
 *      decInt - the integer to be converted
 * Returns:
 *      the char representing the hexadecimal digit
 */
char intToHexChar(int decInt);

/*
 * Converts decimal integer into a hexadecimal string of specified length.
 * Requires intToHexChar().
 * Parameters:
 *      decInt - the integer to format
 *      strLen - the length of string to return (not counting '\0')
 *      charArr - the char array to add the string to,
 *              must be at least size: strLen + 1
 */
void formatDecToHex(long decInt, size_t strLen, char charArr[]);

/*
 * Converts any hex byteval into a printable char. Period (46) is given if
 * not printable.
 * Parameters:
 * 	byteval - the value of the byte char representation
 * Returns:
 * 	the byte, converted to a period (46) if necessary
 */
long hex_to_printable(long byteval);

#endif
