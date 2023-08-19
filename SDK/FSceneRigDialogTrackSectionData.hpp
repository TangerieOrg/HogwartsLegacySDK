#pragma once
#include <cstdint>
#include "FAudioDialogueFlags.hpp"
#pragma pack(push, 1)
struct FSceneRigDialogTrackSectionData {
    FString EventName; // 0x0
    char pad_10[0x50];
    bool StopWhenAttachedToDestroyed; // 0x60
    FAudioDialogueFlags AudioDialogueFlags; // 0x61
}; // Size: 0x68
#pragma pack(pop)
