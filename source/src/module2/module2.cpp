/*
 * Copyright (c) 2024 RD Technologies
 *
 *  Created on: 20-Mar-2024
 *      Author: Rohan Dey (rd@rodeytech.com)
 */


#include <iostream>

#include "module2.h"
#include "module2_priv.h"

using namespace std;

Module2::Module2()
{
	var_m2 = 0;
	cout << "Module2 constructor: " << MODULE2_PRIV_CONST <<endl;
}

Module2::~Module2()
{
	cout << "Module2 destructor" <<endl;
}


