#pragma once
#include <cstdint>
#include "UAnyButtonInputBehavior.hpp"
#pragma pack(push, 1)
class UPositionPlaneOnSceneInputBehavior : public UAnyButtonInputBehavior {
public:
    char pad_80[0x30];
    static UPositionPlaneOnSceneInputBehavior* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
