#pragma once
#include <cstdint>
#include "UProceduralMeshComponent.hpp"
#pragma pack(push, 1)
class UMapPathComponent : public UProceduralMeshComponent {
public:
    char pad_510[0x60];
    static UMapPathComponent* StaticClass();
}; // Size: 0x570
#pragma pack(pop)
