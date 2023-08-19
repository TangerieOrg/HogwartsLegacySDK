#include "UCameraStackSecondaryTargetGetter.hpp"
#include "UCameraStackToolInteractionBeastTargetGetter.hpp"
UCameraStackToolInteractionBeastTargetGetter* UCameraStackToolInteractionBeastTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackToolInteractionBeastTargetGetter");
    return (UCameraStackToolInteractionBeastTargetGetter*)res;
}
