#pragma once
#include <cstdint>
#include "FBoxSphereBounds.hpp"
#include "UMeshComponent.hpp"
#pragma pack(push, 1)
class UTriangleSetComponent : public UMeshComponent {
public:
    char pad_4b0[0x14];
    bool bBoundsDirty; // 0x4c4
    char pad_4c5[0xcb];
    static UTriangleSetComponent* StaticClass();
}; // Size: 0x590
#pragma pack(pop)
