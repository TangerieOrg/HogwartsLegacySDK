#pragma once
#include <cstdint>
#include "UProceduralMeshComponent.hpp"
#pragma pack(push, 1)
class UTesselatedPlaneComponent : public UProceduralMeshComponent {
public:
    static UTesselatedPlaneComponent* StaticClass();
    void Construct();
}; // Size: 0x510
#pragma pack(pop)
