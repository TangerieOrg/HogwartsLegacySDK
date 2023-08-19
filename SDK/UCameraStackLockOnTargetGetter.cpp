#include "UCameraStackLockOnTargetGetter.hpp"
#include "UCameraStackReticleTargetGetter.hpp"
UCameraStackLockOnTargetGetter* UCameraStackLockOnTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackLockOnTargetGetter");
    return (UCameraStackLockOnTargetGetter*)res;
}
