#include "UCameraStackReticleTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
UCameraStackReticleTargetGetter* UCameraStackReticleTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackReticleTargetGetter");
    return (UCameraStackReticleTargetGetter*)res;
}
