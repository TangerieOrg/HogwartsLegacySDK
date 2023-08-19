#include "UCameraStackKillCamTargetGetter.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
UCameraStackKillCamTargetGetter* UCameraStackKillCamTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackKillCamTargetGetter");
    return (UCameraStackKillCamTargetGetter*)res;
}
