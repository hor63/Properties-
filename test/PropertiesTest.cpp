/*
 * PropertiesTest.cpp
 *
 *  Created on: May 1, 2018
 *      Author: hor
 *
 *   This file is part of Properties4CXX, a Java-inspired properties reader
 *   Copyright (C) 2018  Kai Horstmann
 *
 *   This program is free software; you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation; either version 2 of the License, or
 *   any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License along
 *   with this program; if not, write to the Free Software Foundation, Inc.,
 *   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 *
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif


#include "Properties4CXX/Properties.h"
#include "iostream"

int main(int argc,char**argv) {

	std::cout << "argc = " << argc;


	if (argc < 2) {
		std::cerr << "Usage: testProperties <configFile>" << std::endl;
		return 1;
	}

	std::cout << "Config file = " << argv[1] << std::endl;
	Properties4CXX::Properties props(argv[1]);

	props.readConfiguration();

	std::ofstream outStream;
	outStream.open("xx.properties",outStream.out);
	props.writeOut(outStream);
	outStream.close();


}



