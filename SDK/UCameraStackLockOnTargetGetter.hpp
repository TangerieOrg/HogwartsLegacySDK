#pragma once
#include <cstdint>
#include "UCameraStackReticleTargetGetter.hpp"
#pragma pack(push, 1)
class UCameraStackLockOnTargetGetter : public UCameraStackReticleTargetGetter {
public:
    static UCameraStackLockOnTargetGetter* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
