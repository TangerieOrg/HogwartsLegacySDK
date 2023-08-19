#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorIsBuffedConsideration : public UQualifierConsideration {
public:
    FName EffectIDDBValue; // 0x28
    static UOptionActorIsBuffedConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
