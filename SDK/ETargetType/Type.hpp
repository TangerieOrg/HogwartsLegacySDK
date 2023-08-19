#pragma once
#include <cstdint>
namespace ETargetType {
#pragma pack(push, 1)
enum Type : uint8_t {
    None = 0,
    Actor = 1,
    Location = 2,
    Camera = 3,
    DesiredDirection = 4,
    StaticDirection = 5,
    Custom = 6,
    ETargetType_MAX = 7,
};
#pragma pack(pop)
}
