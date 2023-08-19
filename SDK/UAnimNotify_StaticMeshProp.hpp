#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimNotifyState.hpp"
class UStaticMesh;
#pragma pack(push, 1)
class UAnimNotify_StaticMeshProp : public UAnimNotifyState {
public:
    UStaticMesh* StaticMesh; // 0x30
    FName ParentSocketName; // 0x38
    FVector LocationOffset; // 0x40
    FRotator RotationOffset; // 0x4c
    bool bUseScaleMultiplier; // 0x58
    char pad_59[0x3];
    FVector ScaleMultiplier; // 0x5c
    char pad_68[0x50];
    static UAnimNotify_StaticMeshProp* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
