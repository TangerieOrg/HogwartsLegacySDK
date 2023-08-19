#pragma once
#include <cstdint>
#include "UAblAbilityTaskScratchPad.hpp"
class AActor;
#pragma pack(push, 1)
class UAblCentaurSpawnMunitionTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    AActor* EquipArrowActor; // 0x28
    static UAblCentaurSpawnMunitionTaskScratchPad* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
