#include "UCameraStackAvatarFaceTargetGetter.hpp"
#include "UCameraStackAvatarTargetTrackerGetterBase.hpp"
UCameraStackAvatarFaceTargetGetter* UCameraStackAvatarFaceTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackAvatarFaceTargetGetter");
    return (UCameraStackAvatarFaceTargetGetter*)res;
}
