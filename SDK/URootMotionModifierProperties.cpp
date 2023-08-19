#include "ERootMotionModifierOrder.hpp"
#include "UObject.hpp"
#include "URootMotionModifierProperties.hpp"
URootMotionModifierProperties* URootMotionModifierProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.RootMotionModifierProperties");
    return (URootMotionModifierProperties*)res;
}
