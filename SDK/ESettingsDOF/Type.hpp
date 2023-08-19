#pragma once
#include <cstdint>
namespace ESettingsDOF {
#pragma pack(push, 1)
enum Type : uint8_t {
    Full3D = 0,
    YZPlane = 1,
    XZPlane = 2,
    XYPlane = 3,
    ESettingsDOF_MAX = 4,
};
#pragma pack(pop)
}
