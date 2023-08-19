#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "FSceneRigStage_ActorReference.hpp"
class UDialogueSequenceRule;
#pragma pack(push, 1)
struct FSceneRigRule_RuleAsset {
    uint8_t ForSpecificActor : 1; // 0x0
    uint8_t pad_bitfield_0_1 : 7;
    char pad_1[0x7];
    FSceneRigStage_ActorReference SpecificActor; // 0x8
    FGameplayTagContainer Tags; // 0x18
    UDialogueSequenceRule* Rule; // 0x38
}; // Size: 0x40
#pragma pack(pop)
