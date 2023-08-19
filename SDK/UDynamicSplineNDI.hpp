#pragma once
#include <cstdint>
#include "FDynamicSplineUsage.hpp"
#include "UNiagaraDataInterface.hpp"
class AActor;
class UDynamicSplineSet;
class USkeletalMeshComponent;
class UStaticMeshComponent;
#pragma pack(push, 1)
class UDynamicSplineNDI : public UNiagaraDataInterface {
public:
    AActor* HostActor; // 0x38
    UDynamicSplineSet* SplineSet; // 0x40
    FDynamicSplineUsage SplineUsage; // 0x48
    USkeletalMeshComponent* ComputedSkeletalMesh; // 0x50
    UStaticMeshComponent* ComputedStaticMesh; // 0x58
    char pad_60[0x8];
    static UDynamicSplineNDI* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
