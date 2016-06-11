/* -*- Mode:C++; c-file-style:"gnu"; indent-tabs-mode:nil; -*- */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation;
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "ns3/core-module.h"

#include <iostream>

using namespace ns3;

NS_LOG_COMPONENT_DEFINE ("HelloSimulator");

static void printHello(std::string word,std::string id,int freq) {
	std::cout<<Simulator::Now()<<" Hello!!!!!! "<<word<<" your student id is "<<id<<std::endl;
	Simulator::Schedule(Seconds(freq),&printHello,word,id,freq);
}
// ./test arg0 arg1 arg2
// argc=4
// argv[0] -> "test"
// argv[1] -> "arg0"
// argv[2] -> "arg1"
// argv[3] -> "arg2"
// argv[4] -> NULL
int
main (int argc, char *argv[])
{
	CommandLine cmd;
	std::string name,id;
	int freq,endtime;
	cmd.AddValue ("name", "my name 123123", name);
	cmd.AddValue ("id","my id",id);
	cmd.AddValue ("freq","freq",freq);
	cmd.AddValue ("endtime","endtime",endtime);
	cmd.Parse(argc,argv);
	std::cout<<"start"<<std::endl;
	printHello(name,id,freq);
//	std::cout<<"hello commit"<<std::endl;
	//std::cout<<"start"<<std::endl;
	Simulator::Stop(Seconds(endtime));
	Simulator::Run ();
	Simulator::Destroy ();
}
