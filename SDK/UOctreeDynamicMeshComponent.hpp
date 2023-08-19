#pragma once
#include <cstdint>
#include "UBaseDynamicMeshComponent.hpp"
#pragma pack(push, 1)
class UOctreeDynamicMeshComponent : public UBaseDynamicMeshComponent {
public:
    char pad_4f0[0x18];
    bool bExplicitShowWireframe; // 0x508
    char pad_509[0xf7];
    static UOctreeDynamicMeshComponent* StaticClass();
}; // Size: 0x600
#pragma pack(pop)
