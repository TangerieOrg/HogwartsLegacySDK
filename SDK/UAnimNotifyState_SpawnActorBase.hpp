#pragma once
#include <cstdint>
#include "UAnimNotifyState.hpp"
class UCurveFloat;
class AActor;
#pragma pack(push, 1)
class UAnimNotifyState_SpawnActorBase : public UAnimNotifyState {
public:
    FName AttachSocket; // 0x30
    UCurveFloat* AlphaCurve; // 0x38
    AActor* SpawnedActor; // 0x40
    char pad_48[0x8];
    static UAnimNotifyState_SpawnActorBase* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
