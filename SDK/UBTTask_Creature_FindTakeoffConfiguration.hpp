#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "FGameplayTagContainer.hpp"
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_Creature_FindTakeoffConfiguration : public UBTTaskNode {
public:
    TArray<FGameplayTagContainer> TakeoffAnimationArray; // 0x70
    FBlackboardKeySelector MoveTargetLocationKey; // 0x80
    int32_t MaxTakeoffTestsPerTick; // 0xa8
    char pad_ac[0x4];
    static UBTTask_Creature_FindTakeoffConfiguration* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
