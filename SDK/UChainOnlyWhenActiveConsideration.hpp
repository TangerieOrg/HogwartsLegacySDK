#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainOnlyWhenActiveConsideration : public UQualifierConsideration {
public:
    UQualifierConsideration* Consideration; // 0x28
    static UChainOnlyWhenActiveConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
