#pragma once
#include <cstdint>
#include "UMeshComponent.hpp"
#pragma pack(push, 1)
class UBaseDynamicMeshComponent : public UMeshComponent {
public:
    char pad_4b0[0x40];
    static UBaseDynamicMeshComponent* StaticClass();
}; // Size: 0x4f0
#pragma pack(pop)
