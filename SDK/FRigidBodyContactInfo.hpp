#pragma once
#include <cstdint>
#include "FVector.hpp"
class UPhysicalMaterial;
#pragma pack(push, 1)
struct FRigidBodyContactInfo {
    FVector ContactPosition; // 0x0
    FVector ContactNormal; // 0xc
    float ContactPenetration; // 0x18
    char pad_1c[0x4];
    UPhysicalMaterial* PhysMaterial[2]; // 0x20
}; // Size: 0x30
#pragma pack(pop)
