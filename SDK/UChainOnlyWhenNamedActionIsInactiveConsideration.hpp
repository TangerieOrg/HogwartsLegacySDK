#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainOnlyWhenNamedActionIsInactiveConsideration : public UQualifierConsideration {
public:
    FName NamedAction; // 0x28
    UQualifierConsideration* Consideration; // 0x30
    static UChainOnlyWhenNamedActionIsInactiveConsideration* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
