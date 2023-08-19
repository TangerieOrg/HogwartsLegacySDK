#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
class UCognitionStimuliSourceComponent;
class UClass;
class URootMotionModProperties_Interact;
#pragma pack(push, 1)
class AWorldInteractObject : public AWorldObject {
public:
    UCognitionStimuliSourceComponent* CognitionStimuliSource; // 0x2b0
    UClass* AbilityClass; // 0x2b8
    UClass* AbilitySpawnActorClass; // 0x2c0
    FVector AbilitySpawnOffset; // 0x2c8
    FRotator AbilitySpawnRotationOffset; // 0x2d4
    URootMotionModProperties_Interact* InteractProperties; // 0x2e0
    static AWorldInteractObject* StaticClass();
    void InteractionInitiated();
}; // Size: 0x2e8
#pragma pack(pop)
