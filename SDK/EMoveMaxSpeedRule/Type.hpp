#pragma once
#include <cstdint>
namespace EMoveMaxSpeedRule {
#pragma pack(push, 1)
enum Type : uint8_t {
    StartingSpeed = 0,
    DesiredSpeed = 1,
    FixedSpeed = 2,
    EMoveMaxSpeedRule_MAX = 3,
};
#pragma pack(pop)
}
