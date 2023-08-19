#pragma once
#include <cstdint>
namespace ESplineCoordinateSpace {
#pragma pack(push, 1)
enum Type : uint8_t {
    Local = 0,
    World = 1,
    ESplineCoordinateSpace_MAX = 2,
};
#pragma pack(pop)
}
