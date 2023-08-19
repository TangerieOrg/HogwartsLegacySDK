#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UTireType : public UDataAsset {
public:
    float FrictionScale; // 0x30
    char pad_34[0x4];
    static UTireType* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
