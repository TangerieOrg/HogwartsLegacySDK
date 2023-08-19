#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFieldPhysicsDefaultFields {
    Field_RadialIntMask = 0,
    Field_RadialFalloff = 1,
    Field_UniformVector = 2,
    Field_RadialVector = 3,
    Field_RadialVectorFalloff = 4,
    Field_EFieldPhysicsDefaultFields_Max = 5,
};
#pragma pack(pop)
