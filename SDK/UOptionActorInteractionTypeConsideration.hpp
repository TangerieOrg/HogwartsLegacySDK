#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorInteractionTypeConsideration : public UQualifierConsideration {
public:
    FName WantedInteraction; // 0x28
    static UOptionActorInteractionTypeConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
