#pragma once
#include <cstdint>
#include "UDeveloperSettings.hpp"
#pragma pack(push, 1)
class UMeshSimplificationSettings : public UDeveloperSettings {
public:
    FName MeshReductionModuleName; // 0x38
    float wLevelLodExclusion_MinExtent; // 0x40
    char pad_44[0x4];
    static UMeshSimplificationSettings* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
