#include "UCameraStackAttachParentGetter.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackAttachParentGetter* UCameraStackAttachParentGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackAttachParentGetter");
    return (UCameraStackAttachParentGetter*)res;
}
