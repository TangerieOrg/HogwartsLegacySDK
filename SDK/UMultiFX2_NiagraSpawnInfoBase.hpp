#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMultiFX2_NiagraSpawnInfoBase : public UObject {
public:
    float Delay; // 0x28
    char pad_2c[0x4];
    static UMultiFX2_NiagraSpawnInfoBase* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
