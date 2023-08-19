#pragma once
#include <cstdint>
#include "UWeightMapSetProperties.hpp"
#pragma pack(push, 1)
class USmoothWeightMapSetProperties : public UWeightMapSetProperties {
public:
    float MinSmoothMultiplier; // 0x80
    char pad_84[0x4];
    static USmoothWeightMapSetProperties* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
