/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   CTest.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: W2Wizard <w2.wizzard@gmail.com>              +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/10 15:22:50 by W2Wizard      #+#    #+#                 */
/*   Updated: 2021/09/10 15:22:50 by W2Wizard      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_TEST_H
#define C_TEST_H

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <memory.h>

// Error message buffer for when a test fails.
char	ErrMsg[128];

////////////////////////////////////////////////////////////////////////////////////

/** 
 * Unit test assertion macro, to simplify test failure.
 * @param Condition If true, will cause the test to fail.
 */
#define TEST_ASSERT(Condition) 									\
	if (Condition)												\
	{															\
		sprintf(ErrMsg, "Fail Reason: \"%s\"\n", #Condition);	\
		return (0);												\
	}															\
	
/** 
 * Simple wrapper to standardized functions marked for testing.
 * @param Name The desirec name for the test function.
 */
#define TEST_DECLARE(Name)	\
	int32_t	UNIT_##Name()	\

/** 
 * Runs a given Unit test.
 * @param Func The function to test, should be marked with "UNIT".
 * @param ExitAtFail If true, program will exit instead of continuing tests.
 */
#define TEST_RUN(Func, ExitAtFail) 				\
	Internal_Test(#Func, &Func, ExitAtFail);	\


////////////////////////////////////////////////////////////////////////////////////

// Internal test function, use TEST_RUN macro to invoke this!
void Internal_Test(const char* Name, int32_t(*T)(void), int32_t ExitAtFail)
{	
	int32_t Result = T();
	printf("Testing: %s -> %s\n", Name, Result ? "Ok!" : "Fail!");
	if (!Result)
	{
		printf("%s\n", ErrMsg);
		if (ExitAtFail)
			exit(0);
	}
	else
		putchar('\n');
}

#endif
