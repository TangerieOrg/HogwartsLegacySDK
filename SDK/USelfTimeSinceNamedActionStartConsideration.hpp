#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfTimeSinceNamedActionStartConsideration : public UQualifierConsideration {
public:
    FName Action; // 0x28
    float WindowOffset; // 0x30
    float WindowSize; // 0x34
    static USelfTimeSinceNamedActionStartConsideration* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
