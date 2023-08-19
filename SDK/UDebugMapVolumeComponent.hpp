#pragma once
#include <cstdint>
#include "UProceduralMeshComponent.hpp"
#pragma pack(push, 1)
class UDebugMapVolumeComponent : public UProceduralMeshComponent {
public:
    char pad_510[0x60];
    static UDebugMapVolumeComponent* StaticClass();
}; // Size: 0x570
#pragma pack(pop)
