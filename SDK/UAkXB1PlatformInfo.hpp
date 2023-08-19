#pragma once
#include <cstdint>
#include "UAkXboxOneGDKPlatformInfo.hpp"
#pragma pack(push, 1)
class UAkXB1PlatformInfo : public UAkXboxOneGDKPlatformInfo {
public:
    static UAkXB1PlatformInfo* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
