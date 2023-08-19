#pragma once
#include <cstdint>
namespace EParticleCollisionResponse {
#pragma pack(push, 1)
enum Type : uint8_t {
    Bounce = 0,
    Stop = 1,
    Kill = 2,
    EParticleCollisionResponse_MAX = 3,
};
#pragma pack(pop)
}
