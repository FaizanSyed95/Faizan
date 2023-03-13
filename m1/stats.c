/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file stats.c
 * @brief This is the code implementation file for Assessment m1 
 *
 * This is the assessment m1 file for the intro to embedded programing course.
 *
 * @author Faizan Syed
 * @date 03/12/2023
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char minimum, maximum, median = 0;
  float mean =0;
  

  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);
  
}


void print_statistics(unsigned char array[], unsigned int length){
	printf("\nThe original array:\n");
	print_array(array, length);

	unsigned char median = find_median(array, length);
	printf("\nMedian: %d\n", median);

	unsigned char mean = find_mean(array, length);
	printf("Mean: %d\n", mean);

	unsigned char max = find_max(array, length);
	printf("Max: %d\n", max);

	unsigned char min = find_min(array, length);
	printf("Min: %d\n", min);

	sort_array(array, length);
	printf("\nThe sorted array:\n");
	print_array(array, length) ; 
}

void print_array(unsigned char array[] ,  unsigned int length) {
	for(int i = 0; i < length; i++) {
		if (i % 8 == 0 && i != 0 )  {
			printf("\n") ;
		}
		printf("%d ", array[i]) ;
	}
	printf("\n") ;
}

unsigned char find_median(unsigned char array[] , unsigned int length) {
	unsigned char median ;
	if (length % 2 == 0)  {
		median = (array [length/2 - 1] + array[length/2] )  / 2;
	} else {
		median = array[length/2] ;
	}
	return median ;
}

unsigned char find_mean (unsigned char array[] ,  unsigned int length){
	unsigned int sum = 0 ;
	for(int i = 0; i < length; i++){
		sum += array[i] ;	
	}
	return (unsigned char) ( sum / length ) ;
}

unsigned char  find_max(unsigned char array[] , unsigned int length) {
	unsigned char max = array[0] ;
	for(int i = 1 ;  i < length; i++) {
		if (array[i] > max)  {
			max = array[i] ;
		}
	} 
	return max ;
}

unsigned char find_min(unsigned char array[] ,  unsigned int length){
	unsigned char min = array[0] ;
	for(int i = 1; i < length; i++) {
		if (array[i] < min)  {
			min = array[i] ;
		}
	}
	return min ;
}

void sort_array(unsigned char array[] , unsigned int length ){
	unsigned char temp ;
	for(int i = 0; i < length; i++) {
		for(int j = i + 1; j < length; j++) {
			if(array[j] > array[i]) {
				temp =  array[j];
				array[j] =  array[i];
				array[i] =  temp;
			}
		}
	}
}

/* Add other Implementation File Code Here */




/* Add other Implementation File Code Here */
