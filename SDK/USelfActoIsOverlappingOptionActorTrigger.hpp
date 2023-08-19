#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfActoIsOverlappingOptionActorTrigger : public UQualifierConsideration {
public:
    FString TriggerName; // 0x28
    static USelfActoIsOverlappingOptionActorTrigger* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
