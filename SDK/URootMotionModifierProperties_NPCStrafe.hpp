#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_NPCStrafe : public URootMotionModifierProperties {
public:
    TArray<FDbSingleColumnInfo> SubtypeIds; // 0x30
    static URootMotionModifierProperties_NPCStrafe* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
