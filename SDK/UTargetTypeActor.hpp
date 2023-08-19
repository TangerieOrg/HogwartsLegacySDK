#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UTargetTypeBase.hpp"
class AActor;
#pragma pack(push, 1)
class UTargetTypeActor : public UTargetTypeBase {
public:
    char pad_38[0x28];
    static UTargetTypeActor* StaticClass();
    void SetTargetActor(AActor* InTargetActor);
    void SetSocketName(FName InSocketName);
    void SetActorOffset(FVector InActorOffset);
    AActor* GetTargetActor();
    FName GetSocketName();
    FVector GetActorOffset();
}; // Size: 0x60
#pragma pack(pop)
