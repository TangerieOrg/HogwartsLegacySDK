#pragma once
#include <cstdint>
namespace EControlConstraint {
#pragma pack(push, 1)
enum Type {
    Orientation = 0,
    Translation = 1,
    MAX = 2,
};
#pragma pack(pop)
}
