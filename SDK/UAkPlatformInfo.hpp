#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkPlatformInfo : public UObject {
public:
    char pad_28[0x48];
    static UAkPlatformInfo* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
