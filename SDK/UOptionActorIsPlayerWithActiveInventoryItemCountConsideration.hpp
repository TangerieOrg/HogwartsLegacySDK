#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorIsPlayerWithActiveInventoryItemCountConsideration : public UQualifierConsideration {
public:
    int32_t ItemCountMinimumScore; // 0x28
    int32_t ItemCountMaximumScore; // 0x2c
    static UOptionActorIsPlayerWithActiveInventoryItemCountConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
