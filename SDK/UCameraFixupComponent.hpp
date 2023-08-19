#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UActorComponent.hpp"
class UObject;
class AActor;
#pragma pack(push, 1)
class UCameraFixupComponent : public UActorComponent {
public:
    char pad_c8[0xc8];
    UObject* LastCameraFixupOperations; // 0x190
    static UCameraFixupComponent* StaticClass();
    void LightRigBlueprintShowDebug(AActor* LightRigActor);
    FVector GetTarget(bool& bOutHasValidTarget);
}; // Size: 0x198
#pragma pack(pop)
