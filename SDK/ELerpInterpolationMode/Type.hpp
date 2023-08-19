#pragma once
#include <cstdint>
namespace ELerpInterpolationMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    QuatInterp = 0,
    EulerInterp = 1,
    DualQuatInterp = 2,
    ELerpInterpolationMode_MAX = 3,
};
#pragma pack(pop)
}
