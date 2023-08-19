#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EFieldVectorType : uint8_t {
    Vector_LinearForce = 0,
    Vector_LinearVelocity = 1,
    Vector_AngularVelocity = 2,
    Vector_AngularTorque = 3,
    Vector_PositionTarget = 4,
    Vector_TargetMax = 5,
    Vector_MAX = 6,
};
#pragma pack(pop)
