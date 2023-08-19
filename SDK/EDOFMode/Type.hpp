#pragma once
#include <cstdint>
namespace EDOFMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    Default = 0,
    SixDOF = 1,
    YZPlane = 2,
    XZPlane = 3,
    XYPlane = 4,
    CustomPlane = 5,
    LockRotation = 6,
    None = 7,
    EDOFMode_MAX = 8,
};
#pragma pack(pop)
}
