#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorIsPreferredToyConsideration : public UQualifierConsideration {
public:
    float BonusForPreferredToy; // 0x28
    char pad_2c[0x4];
    static UOptionActorIsPreferredToyConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
