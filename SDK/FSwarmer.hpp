#pragma once
#include <cstdint>
class UStaticMeshComponent;
#pragma pack(push, 1)
struct FSwarmer {
    UStaticMeshComponent* Mesh; // 0x0
    char pad_8[0x20];
}; // Size: 0x28
#pragma pack(pop)
