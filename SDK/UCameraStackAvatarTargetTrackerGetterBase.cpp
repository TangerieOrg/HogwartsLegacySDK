#include "UCameraStackAvatarTargetTrackerGetterBase.hpp"
#include "UCameraStackSecondaryTargetGetterBlend.hpp"
UCameraStackAvatarTargetTrackerGetterBase* UCameraStackAvatarTargetTrackerGetterBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackAvatarTargetTrackerGetterBase");
    return (UCameraStackAvatarTargetTrackerGetterBase*)res;
}
