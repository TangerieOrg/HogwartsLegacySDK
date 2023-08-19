#pragma once
#include <cstdint>
#include "UStaticMeshComponent.hpp"
#pragma pack(push, 1)
class UControlPointMeshComponent : public UStaticMeshComponent {
public:
    float VirtualTextureMainPassMaxDrawDistance; // 0x510
    char pad_514[0xc];
    static UControlPointMeshComponent* StaticClass();
}; // Size: 0x520
#pragma pack(pop)
