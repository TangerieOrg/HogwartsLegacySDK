#pragma once
#include <cstdint>
namespace EControllerAnalogStick {
#pragma pack(push, 1)
enum Type : uint8_t {
    CAS_LeftStick = 0,
    CAS_RightStick = 1,
    CAS_MAX = 2,
};
#pragma pack(pop)
}
