#pragma once
#include <cstdint>
#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorDollyZoom.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorUserFOVDollyZoom : public UCameraStackBehaviorDollyZoom {
public:
    FCameraOptionName FieldOfViewOffsetOptionName; // 0x1e8
    char pad_1f0[0x8];
    static UCameraStackBehaviorUserFOVDollyZoom* StaticClass();
}; // Size: 0x1f8
#pragma pack(pop)
