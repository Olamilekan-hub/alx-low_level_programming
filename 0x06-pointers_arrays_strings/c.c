#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * print_buffer - prints the content of a buffer
 * @b: pointer to the buffer
 * @size: number of bytes to print
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0) {
		printf("\n");
		return;	}
	for (i = 0; i < size; i += 10)	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j += 2)	{
			if (j < size) {
				printf("%02x", (unsigned char)b[j]);
			} else {
				printf("  "); }
			if (j + 1 < size) {
				printf("%02x", (unsigned char)b[j + 1]);
			} else {
				printf("  "); }
			printf(" "); }
		for (j = i; j < i + 10; j++) {
			if (j < size) {
				if (b[j] >= 32 && b[j] <= 126) {
					printf("%c", b[j]);
				} else {
					printf("."); }
			} else {
				printf(" "); } 	}
		printf("\n"); }
}
