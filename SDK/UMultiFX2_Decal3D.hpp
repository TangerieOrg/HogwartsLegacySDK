#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
class UClass;
#pragma pack(push, 1)
class UMultiFX2_Decal3D : public UMultiFX2_Filtered {
public:
    UClass* Decal3D; // 0x68
    bool Decal3DRandomOrientation; // 0x70
    char pad_71[0x3];
    float LifeSpan; // 0x74
    static UMultiFX2_Decal3D* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
