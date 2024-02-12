#pragma once
#include <Functions/FunctionHelpers.h>
#include <string>


std::string toIPv4(const std::string & IPv6)
{
///IPV6 address mapped to IPV4 format
std::string temp = IPv6.substr(7);
return temp;
}

std::string toIPv6(const std::string & IPv4)
{
///IPV4 address mapped to IPV6 format
std::string temp = "::ffff:" + IPv4;
return temp;
}

///toIPv6(192.0.2.146) would yield ::ffff:192.0.2.146, allowing this IPV4 formatted address to be compared or processed with an IPV6