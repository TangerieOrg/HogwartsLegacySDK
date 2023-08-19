#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMapPathComponent;
#pragma pack(push, 1)
class APhoenixPathActor : public AActor {
public:
    UMaterialInstanceDynamic* PathDynamicMaterial; // 0x248
    UMaterialInterface* PathMaterial; // 0x250
    UMaterialInterface* WorldPathMaterial; // 0x258
    TArray<FVector> ManagedPathPoints; // 0x260
    float PathWidth; // 0x270
    char pad_274[0x4];
    UMapPathComponent* PathComponent; // 0x278
    static APhoenixPathActor* StaticClass();
}; // Size: 0x280
#pragma pack(pop)
