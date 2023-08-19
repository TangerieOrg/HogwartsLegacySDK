#pragma once
#include <cstdint>
#include "UAkPlatformInfo.hpp"
#pragma pack(push, 1)
class UAkWin32PlatformInfo : public UAkPlatformInfo {
public:
    static UAkWin32PlatformInfo* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
