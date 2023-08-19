#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class USkeletalMeshComponent;
#pragma pack(push, 1)
class USkeletalMeshSocket : public UObject {
public:
    FName SocketName; // 0x28
    FName BoneName; // 0x30
    FVector RelativeLocation; // 0x38
    FRotator RelativeRotation; // 0x44
    FVector RelativeScale; // 0x50
    bool bForceAlwaysAnimated; // 0x5c
    char pad_5d[0x3];
    static USkeletalMeshSocket* StaticClass();
    void InitializeSocketFromLocation(USkeletalMeshComponent* skelComp, FVector WorldLocation, FVector WorldNormal);
    FVector GetSocketLocation(USkeletalMeshComponent* skelComp);
}; // Size: 0x60
#pragma pack(pop)
