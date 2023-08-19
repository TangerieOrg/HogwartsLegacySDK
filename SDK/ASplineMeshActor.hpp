#pragma once
#include <cstdint>
#include "AActor.hpp"
class USplineMeshComponent;
#pragma pack(push, 1)
class ASplineMeshActor : public AActor {
public:
    USplineMeshComponent* SplineMeshComponent; // 0x248
    static ASplineMeshActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
