#include "FVector.hpp"
#include "UCameraStackMountCreatureGetter.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackMountCreatureGetter* UCameraStackMountCreatureGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackMountCreatureGetter");
    return (UCameraStackMountCreatureGetter*)res;
}
