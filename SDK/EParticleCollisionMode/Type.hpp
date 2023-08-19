#pragma once
#include <cstdint>
namespace EParticleCollisionMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    SceneDepth = 0,
    DistanceField = 1,
    EParticleCollisionMode_MAX = 2,
};
#pragma pack(pop)
}
