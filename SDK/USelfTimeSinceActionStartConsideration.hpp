#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfTimeSinceActionStartConsideration : public UQualifierConsideration {
public:
    float WindowOffset; // 0x28
    float WindowSize; // 0x2c
    static USelfTimeSinceActionStartConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
