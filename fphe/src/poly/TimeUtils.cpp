/*
 * TimeUtils.cpp
 *
 *  Created on: May 17, 2016
 *      Author: kimandrik
 */

#include "poly/TimeUtils.h"

#include <sys/time.h>
#include <iostream>

using namespace std;

TimeUtils::TimeUtils() {
	timeElapsed = 0;
}

void TimeUtils::start(string msg) {
	cout <<"Start " + msg << endl;
	gettimeofday(&startTime, 0);
}

void TimeUtils::stop(string msg) {
    gettimeofday(&stopTime, 0);
    timeElapsed = (stopTime.tv_sec - startTime.tv_sec) * 1000.0;
    timeElapsed += (stopTime.tv_usec - startTime.tv_usec) / 1000.0;
    cout << msg +  " time = "<< timeElapsed << endl;
    expData.push_back(timeElapsed);
}
