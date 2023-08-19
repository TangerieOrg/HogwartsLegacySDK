#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorIsPlayerWithActiveInventoryItemConsideration : public UQualifierConsideration {
public:
    FName ItemName; // 0x28
    static UOptionActorIsPlayerWithActiveInventoryItemConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
