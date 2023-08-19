#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAnimNotifyState.hpp"
class UClass;
#pragma pack(push, 1)
class UAnimNotify_BlueprintSpawn : public UAnimNotifyState {
public:
    UClass* BlueprintActor; // 0x30
    FName ParentSocketName; // 0x38
    FName ChildSocketName; // 0x40
    FVector LocationOffset; // 0x48
    FRotator RotationOffset; // 0x54
    char pad_60[0x28];
    static UAnimNotify_BlueprintSpawn* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
