#include "URootMotionModifier.hpp"
#include "URootMotionModifier_FastTravelPort.hpp"
URootMotionModifier_FastTravelPort* URootMotionModifier_FastTravelPort::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_FastTravelPort");
    return (URootMotionModifier_FastTravelPort*)res;
}
