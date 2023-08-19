#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
class UClass;
#pragma pack(push, 1)
class UOptionActorIsPlayerWithActiveInventoryToolConsideration : public UQualifierConsideration {
public:
    UClass* ToolClass; // 0x28
    static UOptionActorIsPlayerWithActiveInventoryToolConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
