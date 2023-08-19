#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UInstancedStaticMeshComponent.hpp"
class USplineComponent;
#pragma pack(push, 1)
class UChainRenderComponent : public UInstancedStaticMeshComponent {
public:
    float InstanceDistance; // 0x5c0
    FRotator InstanceRotation; // 0x5c4
    FRotator RotationBetweenInstances; // 0x5d0
    FVector InstanceScale; // 0x5dc
    float DistanceOffset; // 0x5e8
    char pad_5ec[0x4];
    static UChainRenderComponent* StaticClass();
    void SetSpline(USplineComponent* InSplineComponent);
}; // Size: 0x5f0
#pragma pack(pop)
