#pragma once
#include <cstdint>
#include "FFXAutoTriggerFXSpawnInfo.hpp"
class AActor;
#pragma pack(push, 1)
struct FFXAutoTriggerFXSpawnInfoWithActors : public FFXAutoTriggerFXSpawnInfo {
    AActor* Target; // 0x28
    AActor* Instigator; // 0x30
}; // Size: 0x38
#pragma pack(pop)
