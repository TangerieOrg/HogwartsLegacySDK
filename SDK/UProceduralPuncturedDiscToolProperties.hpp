#pragma once
#include <cstdint>
#include "UProceduralDiscToolProperties.hpp"
#pragma pack(push, 1)
class UProceduralPuncturedDiscToolProperties : public UProceduralDiscToolProperties {
public:
    float HoleRadius; // 0x80
    char pad_84[0x4];
    static UProceduralPuncturedDiscToolProperties* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
