#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UTimeRigEvent : public UObject {
public:
    int32_t CoordinateIndex; // 0x28
    char pad_2c[0x4];
    static UTimeRigEvent* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
