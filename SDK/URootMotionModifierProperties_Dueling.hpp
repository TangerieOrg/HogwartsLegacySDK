#pragma once
#include <cstdint>
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_Dueling : public URootMotionModifierProperties {
public:
    float HorizontalRootMotionAmount; // 0x30
    float VerticalRootMotionAmount; // 0x34
    static URootMotionModifierProperties_Dueling* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
