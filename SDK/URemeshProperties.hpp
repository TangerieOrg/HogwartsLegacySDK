#pragma once
#include <cstdint>
#include "UMeshConstraintProperties.hpp"
#pragma pack(push, 1)
class URemeshProperties : public UMeshConstraintProperties {
public:
    float SmoothingStrength; // 0x68
    bool bFlips; // 0x6c
    bool bSplits; // 0x6d
    bool bCollapses; // 0x6e
    char pad_6f[0x1];
    static URemeshProperties* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
