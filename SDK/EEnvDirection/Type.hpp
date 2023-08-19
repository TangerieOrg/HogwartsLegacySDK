#pragma once
#include <cstdint>
namespace EEnvDirection {
#pragma pack(push, 1)
enum Type : uint8_t {
    TwoPoints = 0,
    Rotation = 1,
    EEnvDirection_MAX = 2,
};
#pragma pack(pop)
}
