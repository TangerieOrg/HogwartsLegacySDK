#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector_NetQuantize100.hpp"
class AActor;
class USceneComponent;
#pragma pack(push, 1)
struct FRepAttachment {
    AActor* AttachParent; // 0x0
    FVector_NetQuantize100 LocationOffset; // 0x8
    FVector_NetQuantize100 RelativeScale3D; // 0x14
    FRotator RotationOffset; // 0x20
    FName AttachSocket; // 0x2c
    char pad_34[0x4];
    USceneComponent* AttachComponent; // 0x38
}; // Size: 0x40
#pragma pack(pop)
