#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfActorIsTaggedByBlueprintActorConsideration : public UQualifierConsideration {
public:
    FBlackboardKeySelector BlueprintActor; // 0x28
    FName TagID; // 0x50
    static USelfActorIsTaggedByBlueprintActorConsideration* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
