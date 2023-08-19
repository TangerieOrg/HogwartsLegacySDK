#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainOnlyWhenInactiveConsideration : public UQualifierConsideration {
public:
    UQualifierConsideration* Consideration; // 0x28
    static UChainOnlyWhenInactiveConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
