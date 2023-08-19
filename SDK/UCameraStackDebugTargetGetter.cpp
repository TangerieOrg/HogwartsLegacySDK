#include "UCameraStackDebugTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
UCameraStackDebugTargetGetter* UCameraStackDebugTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackDebugTargetGetter");
    return (UCameraStackDebugTargetGetter*)res;
}
