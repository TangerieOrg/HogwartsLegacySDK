#pragma once
#include <cstdint>
#include "UFloatProvider.hpp"
#pragma pack(push, 1)
class UFloat_RemapValue : public UFloatProvider {
public:
    UFloatProvider* Input; // 0x28
    UFloatProvider* MinInput; // 0x30
    UFloatProvider* MaxInput; // 0x38
    UFloatProvider* MinOutput; // 0x40
    UFloatProvider* MaxOutput; // 0x48
    static UFloat_RemapValue* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
