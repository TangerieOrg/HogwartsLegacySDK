#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorUserInput.hpp"
#include "UCurveFloat.hpp"
UCameraStackBehaviorUserInput* UCameraStackBehaviorUserInput::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorUserInput");
    return (UCameraStackBehaviorUserInput*)res;
}
