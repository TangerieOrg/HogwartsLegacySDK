#pragma once
#include <cstdint>
#include "FHLODProxyMesh.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UHLODProxy : public UObject {
public:
    TArray<FHLODProxyMesh> ProxyMeshes; // 0x28
    char pad_38[0x50];
    static UHLODProxy* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
