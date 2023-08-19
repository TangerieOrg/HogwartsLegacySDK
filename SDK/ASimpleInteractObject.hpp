#pragma once
#include <cstdint>
#include "APhoenixBudgetedActor.hpp"
#include "FDialogueConversationReference.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UCognitionStimuliSourceComponent;
class UClass;
class URootMotionModProperties_Interact;
#pragma pack(push, 1)
class ASimpleInteractObject : public APhoenixBudgetedActor {
public:
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x268
    UClass* AbilityClass; // 0x270
    bool bPartialBody; // 0x278
    char pad_279[0x7];
    UClass* AbilitySpawnActorClass; // 0x280
    FVector AbilitySpawnOffset; // 0x288
    FRotator AbilitySpawnRotationOffset; // 0x294
    URootMotionModProperties_Interact* InteractProperties; // 0x2a0
    float PlayDialogueAfterInteractTime; // 0x2a8
    char pad_2ac[0x4];
    FDialogueConversationReference DialogueEventName; // 0x2b0
    char pad_2c0[0x18];
    static ASimpleInteractObject* StaticClass();
    void PlayDialogue();
    void InteractionInitiated();
    UClass* GetAbilityClass();
}; // Size: 0x2d8
#pragma pack(pop)
