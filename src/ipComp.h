#pragma once
#include <Functions/FunctionHelpers.h>
#include <string>


std::string toIPv4(const std::string& IPv6){
//maps given IPV6 address to IPV4 mapping
std::string temp = IPv6.substr(7);
return temp;
}

std::string toIPv6(const std::string& IPv4){
//maps given IPV4 address to IPV6 mapping
std::string temp = "::ffff:" + IPv4;
return temp;
}

