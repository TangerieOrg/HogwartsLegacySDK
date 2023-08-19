#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#pragma pack(push, 1)
class UFoliageInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
public:
    char pad_6b0[0x20];
    FGuid GenerationGuid; // 0x6d0
    static UFoliageInstancedStaticMeshComponent* StaticClass();
}; // Size: 0x6e0
#pragma pack(pop)
