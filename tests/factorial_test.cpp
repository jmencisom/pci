/*
 * The MIT License
 *
 * Copyright 2018 Javier Enciso and Jesús Carvajal.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/* 
 * File:   factorial_test.cpp
 * Author: Javier Enciso and Jesús Carvajal
 *
 * Created on 19 de junio de 2018, 10:26 AM
 */

#include <stdlib.h>
#include <iostream>

#include "factorial.h"

using namespace std;

/*
 * Simple C++ Test Suite
 */

int factorial(int n);

void test1() {
    cout << "factorial_test test 1" << endl;
}

void test2() {
    cout << "factorial_test test 2" << endl;
    int resultado = factorial(5);
    if (resultado != 120){
        cout << "%TEST_FAILED% time=0 testname=test2 (factorial_test) message=error message sample" << endl;
    }
}

int main(int argc, char** argv) {
    cout << "%SUITE_STARTING% factorial_test" << endl;
    cout << "%SUITE_STARTED%" << endl;

    cout << "%TEST_STARTED% test1 (factorial_test)" << endl;
    test1();
    cout << "%TEST_FINISHED% time=0 test1 (factorial_test)" << endl;

    cout << "%TEST_STARTED% test2 (factorial_test)\n" << endl;
    test2();
    cout << "%TEST_FINISHED% time=0 test2 (factorial_test)" << endl;

    cout << "%SUITE_FINISHED% time=0" << endl;

    return (EXIT_SUCCESS);
}

