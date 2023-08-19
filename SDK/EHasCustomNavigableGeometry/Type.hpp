#pragma once
#include <cstdint>
namespace EHasCustomNavigableGeometry {
#pragma pack(push, 1)
enum Type : uint8_t {
    No = 0,
    Yes = 1,
    EvenIfNotCollidable = 2,
    DontExport = 3,
    EHasCustomNavigableGeometry_MAX = 4,
};
#pragma pack(pop)
}
