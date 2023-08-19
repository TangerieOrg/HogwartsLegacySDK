#pragma once
#include <cstdint>
class UMaterialInterface;
#pragma pack(push, 1)
struct FNamedEmitterMaterial {
    FName Name; // 0x0
    UMaterialInterface* Material; // 0x8
}; // Size: 0x10
#pragma pack(pop)
