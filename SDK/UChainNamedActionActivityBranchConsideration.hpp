#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainNamedActionActivityBranchConsideration : public UQualifierConsideration {
public:
    FName NamedAction; // 0x28
    FString WhenActiveDescription; // 0x30
    UQualifierConsideration* ConsiderationWhenActive; // 0x40
    FString WhenInactiveDescription; // 0x48
    UQualifierConsideration* ConsiderationWhenInactive; // 0x58
    static UChainNamedActionActivityBranchConsideration* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
