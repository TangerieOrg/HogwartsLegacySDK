#pragma once
#include <cstdint>
#include "AActor.hpp"
class UConjurationGroundPlacementAreaComponent;
#pragma pack(push, 1)
class AConjurationGroundPlacementAreaActor : public AActor {
public:
    UConjurationGroundPlacementAreaComponent* GroundPlacementAreaComponent; // 0x248
    static AConjurationGroundPlacementAreaActor* StaticClass();
    void BuildMesh();
}; // Size: 0x250
#pragma pack(pop)
