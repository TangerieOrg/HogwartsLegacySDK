#pragma once
#include <cstdint>
#include "ECreatureStance.hpp"
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfCreatureRelaxStanceConsideration : public UQualifierConsideration {
public:
    ECreatureStance Stance; // 0x28
    char pad_29[0x7];
    static USelfCreatureRelaxStanceConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
