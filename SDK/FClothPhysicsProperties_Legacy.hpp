#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FClothPhysicsProperties_Legacy {
    float VerticalResistance; // 0x0
    float HorizontalResistance; // 0x4
    float BendResistance; // 0x8
    float ShearResistance; // 0xc
    float Friction; // 0x10
    float Damping; // 0x14
    float TetherStiffness; // 0x18
    float TetherLimit; // 0x1c
    float Drag; // 0x20
    float StiffnessFrequency; // 0x24
    float GravityScale; // 0x28
    float MassScale; // 0x2c
    float InertiaBlend; // 0x30
    float SelfCollisionThickness; // 0x34
    float SelfCollisionSquashScale; // 0x38
    float SelfCollisionStiffness; // 0x3c
    float SolverFrequency; // 0x40
    float FiberCompression; // 0x44
    float FiberExpansion; // 0x48
    float FiberResistance; // 0x4c
}; // Size: 0x50
#pragma pack(pop)
