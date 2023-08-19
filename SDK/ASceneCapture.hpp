#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
class USceneComponent;
#pragma pack(push, 1)
class ASceneCapture : public AActor {
public:
    UStaticMeshComponent* MeshComp; // 0x248
    USceneComponent* SceneComponent; // 0x250
    static ASceneCapture* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
