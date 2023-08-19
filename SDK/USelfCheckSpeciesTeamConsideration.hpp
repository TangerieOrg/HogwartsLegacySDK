#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfCheckSpeciesTeamConsideration : public UQualifierConsideration {
public:
    FName Team; // 0x28
    static USelfCheckSpeciesTeamConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
