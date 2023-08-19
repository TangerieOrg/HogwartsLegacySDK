#pragma once
#include <cstdint>
class UStaticMesh;
#pragma pack(push, 1)
struct FHLODProxyMesh {
    char pad_0[0x20];
    UStaticMesh* StaticMesh; // 0x20
    FName Key; // 0x28
}; // Size: 0x30
#pragma pack(pop)
