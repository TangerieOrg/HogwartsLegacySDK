#pragma once
#include <cstdint>
namespace EConstraintTransform {
#pragma pack(push, 1)
enum Type : uint8_t {
    Absolute = 0,
    Relative = 1,
    EConstraintTransform_MAX = 2,
};
#pragma pack(pop)
}
