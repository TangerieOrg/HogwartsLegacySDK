#pragma once
#include <cstdint>
#include "FBoxSphereBounds.hpp"
#include "UMeshComponent.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class ULineSetComponent : public UMeshComponent {
public:
    FBoxSphereBounds Bounds; // 0x4b0
    bool bBoundsDirty; // 0x4cc
    char pad_4cd[0x43];
    static ULineSetComponent* StaticClass();
}; // Size: 0x510
#pragma pack(pop)
