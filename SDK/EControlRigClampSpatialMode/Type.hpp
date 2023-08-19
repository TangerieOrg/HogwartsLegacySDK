#pragma once
#include <cstdint>
namespace EControlRigClampSpatialMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    Plane = 0,
    Cylinder = 1,
    Sphere = 2,
    EControlRigClampSpatialMode_MAX = 3,
};
#pragma pack(pop)
}
