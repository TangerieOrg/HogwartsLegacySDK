#pragma once
#include <cstdint>
#include "AActor.hpp"
class UStaticMeshComponent;
#pragma pack(push, 1)
class AVisibilityMeshActor : public AActor {
public:
    UStaticMeshComponent* VisibilityMesh; // 0x248
    static AVisibilityMeshActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
