#include "UCameraStackAimModeTargetGetter.hpp"
#include "UCameraStackLockOnTargetGetter.hpp"
UCameraStackAimModeTargetGetter* UCameraStackAimModeTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackAimModeTargetGetter");
    return (UCameraStackAimModeTargetGetter*)res;
}
