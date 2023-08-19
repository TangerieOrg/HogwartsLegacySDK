#include "UCameraStackCapturedBeastTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetter.hpp"
UCameraStackCapturedBeastTargetGetter* UCameraStackCapturedBeastTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackCapturedBeastTargetGetter");
    return (UCameraStackCapturedBeastTargetGetter*)res;
}
