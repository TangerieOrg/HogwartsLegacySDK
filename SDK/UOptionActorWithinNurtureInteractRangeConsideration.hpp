#pragma once
#include <cstdint>
#include "ECreatureNurtureInteractRange.hpp"
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorWithinNurtureInteractRangeConsideration : public UQualifierConsideration {
public:
    ECreatureNurtureInteractRange NurtureInteractRange; // 0x28
    char pad_29[0x7];
    static UOptionActorWithinNurtureInteractRangeConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
