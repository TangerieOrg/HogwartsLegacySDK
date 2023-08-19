#pragma once
#include <cstdint>
#include "UCameraShakePattern.hpp"
#pragma pack(push, 1)
class UMatineeCameraShakePattern : public UCameraShakePattern {
public:
    static UMatineeCameraShakePattern* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
