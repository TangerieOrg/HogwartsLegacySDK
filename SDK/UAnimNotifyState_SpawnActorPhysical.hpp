#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimNotifyState.hpp"
class UClass;
class UStaticMesh;
#pragma pack(push, 1)
class UAnimNotifyState_SpawnActorPhysical : public UAnimNotifyState {
public:
    UClass* SpawnActorClass; // 0x30
    FName AttachSocket; // 0x38
    UStaticMesh* StaticMeshOverride; // 0x40
    FVector LocationOffset; // 0x48
    FRotator RotationOffset; // 0x54
    FVector Scale; // 0x60
    bool bTurnPhysicalAtEnd; // 0x6c
    char pad_6d[0x3];
    float ActorLifeSpan; // 0x70
    char pad_74[0x54];
    static UAnimNotifyState_SpawnActorPhysical* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
