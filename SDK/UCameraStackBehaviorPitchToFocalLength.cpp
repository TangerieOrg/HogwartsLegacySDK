#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorPitchToFocalLength.hpp"
#include "UCurveFloat.hpp"
UCameraStackBehaviorPitchToFocalLength* UCameraStackBehaviorPitchToFocalLength::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorPitchToFocalLength");
    return (UCameraStackBehaviorPitchToFocalLength*)res;
}
