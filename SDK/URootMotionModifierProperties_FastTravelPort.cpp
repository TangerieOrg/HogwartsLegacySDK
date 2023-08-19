#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_FastTravelPort.hpp"
URootMotionModifierProperties_FastTravelPort* URootMotionModifierProperties_FastTravelPort::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_FastTravelPort");
    return (URootMotionModifierProperties_FastTravelPort*)res;
}
