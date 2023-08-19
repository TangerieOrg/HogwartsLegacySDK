#include "FVector.hpp"
#include "UCameraStackPrimaryCameraTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackPrimaryCameraTargetGetter* UCameraStackPrimaryCameraTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackPrimaryCameraTargetGetter");
    return (UCameraStackPrimaryCameraTargetGetter*)res;
}
