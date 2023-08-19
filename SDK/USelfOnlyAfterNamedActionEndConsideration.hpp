#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfOnlyAfterNamedActionEndConsideration : public UQualifierConsideration {
public:
    FName Action; // 0x28
    float WindowSize; // 0x30
    char pad_34[0x4];
    static USelfOnlyAfterNamedActionEndConsideration* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
