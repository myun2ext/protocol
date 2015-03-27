#ifndef __MYUN2__PROTOCOL__HPP__
#define __MYUN2__PROTOCOL__HPP__

#include <string>

namespace myun2
{
	namespace protocol
	{
		const ::std::string& method(const char* method, const char* protocol_name, const char* version) {
			return ::std::string(method) + " " + protocol_name + "/" + version;
		}
	}
}

#endif//__MYUN2__PROTOCOL__HPP__
