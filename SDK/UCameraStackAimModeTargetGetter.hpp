#pragma once
#include <cstdint>
#include "UCameraStackLockOnTargetGetter.hpp"
#pragma pack(push, 1)
class UCameraStackAimModeTargetGetter : public UCameraStackLockOnTargetGetter {
public:
    static UCameraStackAimModeTargetGetter* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
