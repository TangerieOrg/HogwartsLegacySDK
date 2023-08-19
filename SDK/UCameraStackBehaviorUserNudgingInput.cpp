#include "FCameraOptionName.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorUserNudgingInput.hpp"
#include "UCurveFloat.hpp"
UCameraStackBehaviorUserNudgingInput* UCameraStackBehaviorUserNudgingInput::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorUserNudgingInput");
    return (UCameraStackBehaviorUserNudgingInput*)res;
}
