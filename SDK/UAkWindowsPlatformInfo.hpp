#pragma once
#include <cstdint>
#include "UAkWin64PlatformInfo.hpp"
#pragma pack(push, 1)
class UAkWindowsPlatformInfo : public UAkWin64PlatformInfo {
public:
    static UAkWindowsPlatformInfo* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
