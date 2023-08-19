#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ELightOnOffFXTargetMode : uint8_t {
    UseParentOnOff = 0,
    UseComponentOnOff = 1,
    ChildrenThatMatchParent = 2,
    ChildrenThatOpposeParent = 3,
    ELightOnOffFXTargetMode_MAX = 4,
};
#pragma pack(pop)
