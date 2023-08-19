#pragma once
#include <cstdint>
#include "ECollisionChannel.hpp"
#include "FRigUnit.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FRigUnit_SphereTraceWorld : public FRigUnit {
    FVector Start; // 0x8
    FVector End; // 0x14
    ECollisionChannel Channel; // 0x20
    char pad_21[0x3];
    float Radius; // 0x24
    bool bHit; // 0x28
    char pad_29[0x3];
    FVector HitLocation; // 0x2c
    FVector HitNormal; // 0x38
    char pad_44[0x4];
}; // Size: 0x48
#pragma pack(pop)
