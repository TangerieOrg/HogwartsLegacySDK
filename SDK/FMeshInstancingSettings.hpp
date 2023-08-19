#pragma once
#include <cstdint>
#include "EMeshInstancingReplacementMethod.hpp"
class UClass;
#pragma pack(push, 1)
struct FMeshInstancingSettings {
    UClass* ActorClassToUse; // 0x0
    int32_t InstanceReplacementThreshold; // 0x8
    EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
    bool bSkipMeshesWithVertexColors; // 0xd
    bool bUseHLODVolumes; // 0xe
    char pad_f[0x1];
    UClass* ISMComponentToUse; // 0x10
}; // Size: 0x18
#pragma pack(pop)
