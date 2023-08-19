#pragma once
#include <cstdint>
namespace EMoveMinSpeedRule {
#pragma pack(push, 1)
enum Type : uint8_t {
    ZeroSpeed = 0,
    StartingSpeed = 1,
    FixedSpeed = 2,
    EMoveMinSpeedRule_MAX = 3,
};
#pragma pack(pop)
}
