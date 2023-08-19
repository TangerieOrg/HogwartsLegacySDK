#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorBlackboardBool : public UQualifierConsideration {
public:
    FName BlackboardKeyName; // 0x28
    static UOptionActorBlackboardBool* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
