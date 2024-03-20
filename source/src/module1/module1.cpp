/*
 * Copyright (c) 2024 RD Technologies
 *
 *  Created on: 20-Mar-2024
 *      Author: Rohan Dey (rd@rodeytech.com)
 */


#include <iostream>

#include "module1.h"
#include "module1_priv.h"

using namespace std;

Module1::Module1()
{
	var_m1 = 0;
	cout << "Module1 constructor: " << MODULE1_PRIV_CONST <<endl;
}

Module1::~Module1()
{
	cout << "Module1 destructor" <<endl;
}


