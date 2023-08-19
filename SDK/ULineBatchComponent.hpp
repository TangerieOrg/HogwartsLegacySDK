#pragma once
#include <cstdint>
#include "UPrimitiveComponent.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class ULineBatchComponent : public UPrimitiveComponent {
public:
    UMaterialInterface* OverrideMeshMaterial; // 0x480
    char pad_488[0x48];
    static ULineBatchComponent* StaticClass();
}; // Size: 0x4d0
#pragma pack(pop)
