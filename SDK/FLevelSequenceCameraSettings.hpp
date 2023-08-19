#pragma once
#include <cstdint>
#include "EAspectRatioAxisConstraint.hpp"
#pragma pack(push, 1)
struct FLevelSequenceCameraSettings {
    bool bOverrideAspectRatioAxisConstraint; // 0x0
    EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
}; // Size: 0x2
#pragma pack(pop)
