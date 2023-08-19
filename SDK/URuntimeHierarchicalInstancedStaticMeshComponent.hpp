#pragma once
#include <cstdint>
#include "UHierarchicalInstancedStaticMeshComponent.hpp"
#pragma pack(push, 1)
class URuntimeHierarchicalInstancedStaticMeshComponent : public UHierarchicalInstancedStaticMeshComponent {
public:
    static URuntimeHierarchicalInstancedStaticMeshComponent* StaticClass();
}; // Size: 0x6b0
#pragma pack(pop)
