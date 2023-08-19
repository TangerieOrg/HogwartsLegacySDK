#pragma once
#include <cstdint>
#include "ETrailWidthMode.hpp"
#include "UAnimNotifyState.hpp"
class UParticleSystem;
class USkeletalMeshComponent;
class UAnimSequenceBase;
#pragma pack(push, 1)
class UAnimNotifyState_Trail : public UAnimNotifyState {
public:
    UParticleSystem* PSTemplate; // 0x30
    FName FirstSocketName; // 0x38
    FName SecondSocketName; // 0x40
    ETrailWidthMode WidthScaleMode; // 0x48
    char pad_49[0x3];
    FName WidthScaleCurve; // 0x4c
    uint8_t bRecycleSpawnedSystems : 1; // 0x54
    uint8_t pad_bitfield_54_1 : 7;
    char pad_55[0x3];
    static UAnimNotifyState_Trail* StaticClass();
    UParticleSystem* OverridePSTemplate(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation);
}; // Size: 0x58
#pragma pack(pop)
