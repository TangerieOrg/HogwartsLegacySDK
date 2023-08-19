#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfActorWaterDepthConsideration : public UQualifierConsideration {
public:
    float MinDepth; // 0x28
    float MaxDepth; // 0x2c
    static USelfActorWaterDepthConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
