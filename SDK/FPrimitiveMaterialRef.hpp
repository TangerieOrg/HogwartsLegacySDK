#pragma once
#include <cstdint>
class UPrimitiveComponent;
class UDecalComponent;
#pragma pack(push, 1)
struct FPrimitiveMaterialRef {
    UPrimitiveComponent* Primitive; // 0x0
    UDecalComponent* Decal; // 0x8
    int32_t ElementIndex; // 0x10
    char pad_14[0x4];
}; // Size: 0x18
#pragma pack(pop)
