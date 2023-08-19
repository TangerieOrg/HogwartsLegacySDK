#pragma once
#include <cstdint>
#include "AActor.hpp"
class UControlPointMeshComponent;
#pragma pack(push, 1)
class AControlPointMeshActor : public AActor {
public:
    UControlPointMeshComponent* ControlPointMeshComponent; // 0x248
    static AControlPointMeshActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
