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
 * @file stats.h
 * @brief This is the header file for stats.c Assessment assignment 1 
 *
 * Creating header file for stats.c with all the functions.
 *
 * @author Faizan Syed
 * @date 03/12/2023
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief Prints the statistics of an array, including minimum, maximum, mean, and median.
 *
 * This function takes an array of unsigned char data items and its length as input, 
 * and then calculates and prints the minimum, maximum, mean, and median of the 
 * data items in the array.
 *
 * @param array The array of unsigned char data items.
 * @param length The length of the array.
 *
 * @return None
 */
void print_statistics(unsigned char array[], unsigned int length);

/**
 * @brief Prints the elements of an array.
 *
 * This function takes an array of unsigned char data items and its length as input, 
 * and then prints the elements of the array.
 *
 * @param array The array of unsigned char data items.
 * @param length The length of the array.
 *
 * @return None
 */
void print_array(unsigned char array[], unsigned int length);

/**
 * @brief Finds the median value of an array.
 *
 * This function takes an array of unsigned char data items and its length as input, 
 * and then calculates and returns the median value of the data items in the array.
 *
 * @param array The array of unsigned char data items.
 * @param length The length of the array.
 *
 * @return The median value of the data items in the array.
 */
unsigned char find_median(unsigned char array[], unsigned int length);

/**
 * @brief Finds the mean value of an array.
 *
 * This function takes an array of unsigned char data items and its length as input, 
 * and then calculates and returns the mean value of the data items in the array.
 *
 * @param array The array of unsigned char data items.
 * @param length The length of the array.
 *
 * @return The mean value of the data items in the array.
 */
unsigned char find_mean(unsigned char array[], unsigned int length);

/**
 * @brief Finds the maximum value of an array.
 *
 * This function takes an array of unsigned char data items and its length as input, 
 * and then returns the maximum value of the data items in the array.
 *
 * @param array The array of unsigned char data items.
 * @param length The length of the array.
 *
 * @return The maximum value of the data items in the array.
 */
unsigned char find_max(unsigned char array[], unsigned int length);

/**
 * @brief Finds the minimum value of an array.
 *
 * This function takes an array of unsigned char data items and its length as input, 
 * and then returns the minimum value of the data items in the array.
 *
 * @param array The array of unsigned char data items.
 * @param length The length of the array.
 *
 * @return The minimum value of the data items in the array.
 */
unsigned char find_min(unsigned char array[], unsigned int length);

/**
 * @brief Sorts an array in descending order.
 *
 * This function takes an array of unsigned char data items and its length as input, 
 * and then sorts the data items in descending order.
 *
 * @param array The array of unsigned char data items.
 * @param length The length of the array.
 *
 * @return None
 */
void sort_array(unsigned char array[], unsigned int length);

#endif /* __STATS_H__ */
