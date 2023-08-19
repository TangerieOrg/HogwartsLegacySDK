#include "UCameraStackSecondaryTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
UCameraStackSecondaryTargetGetterBlend* UCameraStackSecondaryTargetGetterBlend::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackSecondaryTargetGetterBlend");
    return (UCameraStackSecondaryTargetGetterBlend*)res;
}
