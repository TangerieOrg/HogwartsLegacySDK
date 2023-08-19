#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ERevolvePropertiesPolygroupMode : uint8_t {
    Single = 0,
    PerFace = 1,
    PerStep = 2,
    AccordingToProfileCurve = 3,
    ERevolvePropertiesPolygroupMode_MAX = 4,
};
#pragma pack(pop)
