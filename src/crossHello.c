/*
 * =====================================================================================
 *
 *       Filename:  crossHello.c
 *
 *    Description:  Test - Hello world cross-compiled for bot Linux and Windows
 *
 *        Version:  1.0
 *        Created:  11/05/2011 01:56:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Cristiano Prato (CrP), cristiano.prato@gmail.com
 *        Company:  
 *
 * =====================================================================================
 */


#include <stdio.h>
#include <stdlib.h>

int main(int arch, char *argv[])
{
	printf ( "Cross hello!!!\n" );
	
#ifdef HOST_LINUX
	printf ( "This is Linux version\n" );
#endif
#ifdef HOST_WINDOWS
	printf ( "This is Windows version\n" );
#endif

	printf ( "End of program - exit now\n" );

	return 0;
}
