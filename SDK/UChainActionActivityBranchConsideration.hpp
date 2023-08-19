#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UChainActionActivityBranchConsideration : public UQualifierConsideration {
public:
    FString WhenActiveDescription; // 0x28
    UQualifierConsideration* ConsiderationWhenActive; // 0x38
    FString WhenInactiveDescription; // 0x40
    UQualifierConsideration* ConsiderationWhenInactive; // 0x50
    static UChainActionActivityBranchConsideration* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
