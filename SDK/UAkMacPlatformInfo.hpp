#pragma once
#include <cstdint>
#include "UAkPlatformInfo.hpp"
#pragma pack(push, 1)
class UAkMacPlatformInfo : public UAkPlatformInfo {
public:
    static UAkMacPlatformInfo* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
