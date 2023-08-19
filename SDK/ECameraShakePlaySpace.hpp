#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ECameraShakePlaySpace : uint8_t {
    CameraLocal = 0,
    World = 1,
    UserDefined = 2,
    ECameraShakePlaySpace_MAX = 3,
};
#pragma pack(pop)
