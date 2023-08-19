#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class UHLODProxy;
#pragma pack(push, 1)
class ALODActor : public AActor {
public:
    UStaticMeshComponent* StaticMeshComponent; // 0x248
    char pad_250[0x50];
    UHLODProxy* Proxy; // 0x2a0
    FName Key; // 0x2a8
    float LODDrawDistance; // 0x2b0
    int32_t LodLevel; // 0x2b4
    TArray<AActor*> SubActors; // 0x2b8
    uint8_t CachedNumHLODLevels; // 0x2c8
    char pad_2c9[0x7];
    static ALODActor* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
