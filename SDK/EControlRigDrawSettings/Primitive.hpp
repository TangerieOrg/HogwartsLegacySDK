#pragma once
#include <cstdint>
namespace EControlRigDrawSettings {
#pragma pack(push, 1)
enum Primitive : uint8_t {
    Points = 0,
    Lines = 1,
    LineStrip = 2,
    DynamicMesh = 3,
    EControlRigDrawSettings_MAX = 4,
};
#pragma pack(pop)
}
