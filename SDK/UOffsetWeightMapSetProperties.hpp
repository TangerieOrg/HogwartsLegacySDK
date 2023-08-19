#pragma once
#include <cstdint>
#include "UWeightMapSetProperties.hpp"
#pragma pack(push, 1)
class UOffsetWeightMapSetProperties : public UWeightMapSetProperties {
public:
    float MinDistance; // 0x80
    char pad_84[0x4];
    static UOffsetWeightMapSetProperties* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
