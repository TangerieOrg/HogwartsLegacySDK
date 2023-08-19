#include "UCameraStackNamedSecondaryTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
UCameraStackNamedSecondaryTargetGetter* UCameraStackNamedSecondaryTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackNamedSecondaryTargetGetter");
    return (UCameraStackNamedSecondaryTargetGetter*)res;
}
