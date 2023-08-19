#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
#pragma pack(push, 1)
class UMultiFX2_MaterialParameterBase : public UMultiFX2_Filtered {
public:
    FName MaterialName; // 0x68
    int32_t MaterialIndex; // 0x70
    bool bApplyToAll; // 0x74
    char pad_75[0x3];
    FName ParameterName; // 0x78
    FName MeshName; // 0x80
    bool bApplyToAllMeshes; // 0x88
    bool bCreateMIDs; // 0x89
    char pad_8a[0x6];
    static UMultiFX2_MaterialParameterBase* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
