#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorContextAwareInteractionTypeConsideration : public UQualifierConsideration {
public:
    FName WantedInteraction; // 0x28
    bool bConsiderActorDistance; // 0x30
    char pad_31[0x7];
    static UOptionActorContextAwareInteractionTypeConsideration* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
