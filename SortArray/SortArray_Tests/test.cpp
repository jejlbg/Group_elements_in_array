#include "pch.h"
#include "../SortArray/SortArray.cpp"

TEST(TestSortArray, First) {
	int testArr[] = { 1, 1, 20, 3, 1, 2, 1, 21 };
	int sortedArr[] = { 1, 1, 1, 1, 20, 3, 2, 21 };
	sortArray(testArr, 8);
	EXPECT_TRUE(testArr == sortedArr);
}

TEST(TestSortArray, Second) {
	int testArr[] = { 5, 4, 51, 5, 3, 1, 2, 66, 2, 4 };
	int sortedArr[] = { 5, 5, 4, 4, 51, 3, 1, 2, 2, 66 };
	sortArray(testArr, 10);
	EXPECT_TRUE(testArr == sortedArr);
}