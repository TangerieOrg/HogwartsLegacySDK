#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightOnOffFXTargetType : uint8_t {
    ParentOnly = 0,
    ParentLightOnly = 1,
    ChildrenOnly = 2,
    ChildLightsOnly = 3,
    ParentAndChildren = 4,
    ParentAndChildLightsOnly = 5,
    ELightOnOffFXTargetType_MAX = 6,
};
#pragma pack(pop)
