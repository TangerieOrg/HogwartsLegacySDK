#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UPerkFX : public UObject {
public:
    static UPerkFX* StaticClass();
    static void DoPerkFX(FString PerkName, AActor* InActor, FVector InLocation, FRotator InRotation);
}; // Size: 0x28
#pragma pack(pop)
