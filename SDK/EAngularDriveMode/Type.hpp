#pragma once
#include <cstdint>
namespace EAngularDriveMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    SLERP = 0,
    TwistAndSwing = 1,
    EAngularDriveMode_MAX = 2,
};
#pragma pack(pop)
}
