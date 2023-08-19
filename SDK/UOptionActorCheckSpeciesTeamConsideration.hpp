#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorCheckSpeciesTeamConsideration : public UQualifierConsideration {
public:
    FName Team; // 0x28
    static UOptionActorCheckSpeciesTeamConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
