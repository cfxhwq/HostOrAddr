//============================================================================
// Name        : MutiThread-Server.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <iostream>
#include <strings.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <pthread.h>
#include <resolv.h>
using namespace std;

int main(){
	res_init();
	_res.options |= RES_USE_INET6;
	cout<< RES_USE_INET6;
}
