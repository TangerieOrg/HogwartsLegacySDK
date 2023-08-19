#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
class AStaticMeshActor;
#pragma pack(push, 1)
class UBindSphereToMaterialComponent : public USceneComponent {
public:
    char pad_220[0x18];
    AStaticMeshActor* SphereToUse; // 0x238
    FName NameOfSphereComponent; // 0x240
    FName MaterialParamForCenter; // 0x248
    FName MaterialParamForRadius; // 0x250
    char pad_258[0x8];
    static UBindSphereToMaterialComponent* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
