#pragma once
#include <cstdint>
namespace ESplineMeshAxis {
#pragma pack(push, 1)
enum Type : uint8_t {
    X = 0,
    Y = 1,
    Z = 2,
    ESplineMeshAxis_MAX = 3,
};
#pragma pack(pop)
}
