#pragma once
#include <cstdint>
namespace EBodyCollisionResponse {
#pragma pack(push, 1)
enum Type : uint8_t {
    BodyCollision_Enabled = 0,
    BodyCollision_Disabled = 1,
    BodyCollision_MAX = 2,
};
#pragma pack(pop)
}
