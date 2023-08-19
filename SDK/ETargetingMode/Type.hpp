#pragma once
#include <cstdint>
namespace ETargetingMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    AutoTarget = 1,
    LockOn = 2,
    ETargetingMode_MAX = 3,
};
#pragma pack(pop)
}
