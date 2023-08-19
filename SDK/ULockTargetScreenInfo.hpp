#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class ULockTargetScreenInfo : public UObject {
public:
    char pad_28[0x18];
    static ULockTargetScreenInfo* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
