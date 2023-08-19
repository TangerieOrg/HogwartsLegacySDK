#pragma once
#include <cstdint>
namespace EEmberTrickRotation {
#pragma pack(push, 1)
enum Type : uint8_t {
    Yaw = 0,
    Pitch = 1,
    Roll = 2,
    EEmberTrickRotation_MAX = 3,
};
#pragma pack(pop)
}
