#pragma once
#include <cstdint>
#include "FBoxSphereBounds.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
class AActor;
class UStaticMeshComponent;
#pragma pack(push, 1)
class UObjectBuoyancyComponent : public UActorComponent {
public:
    AActor* Owner; // 0xc8
    UStaticMeshComponent* TargetMesh; // 0xd0
    float TargetMass; // 0xd8
    FVector TargetLoc; // 0xdc
    float HoverHeight; // 0xe8
    float TargetBuoyancy; // 0xec
    float ForcePercent; // 0xf0
    FBoxSphereBounds targetBounds; // 0xf4
    float meshOrigin; // 0x110
    float meshExtent; // 0x114
    bool bTicking; // 0x118
    char pad_119[0x7];
    static UObjectBuoyancyComponent* StaticClass();
    void ToggleOn(bool bToggle);
}; // Size: 0x120
#pragma pack(pop)
