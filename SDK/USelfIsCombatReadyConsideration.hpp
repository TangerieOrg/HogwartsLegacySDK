#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfIsCombatReadyConsideration : public UQualifierConsideration {
public:
    static USelfIsCombatReadyConsideration* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
