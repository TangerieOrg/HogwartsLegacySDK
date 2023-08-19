#pragma once
#include <cstdint>
#include "ECameraFixupLayer.hpp"
#include "FGameplayTagContainer.hpp"
class UCameraFixupOperation;
class UCameraFixupActorAction;
#pragma pack(push, 1)
struct FDialogLineRule_CameraFixup {
    FGameplayTagContainer Tags; // 0x0
    ECameraFixupLayer Layer; // 0x20
    char pad_21[0x7];
    TArray<UCameraFixupOperation*> Operations; // 0x28
    TArray<UCameraFixupActorAction*> ActorActions; // 0x38
}; // Size: 0x48
#pragma pack(pop)
