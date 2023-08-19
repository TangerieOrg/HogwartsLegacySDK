#include "UCameraStackAvatarAimAtTargetGetter.hpp"
#include "UCameraStackAvatarTargetTrackerGetterBase.hpp"
UCameraStackAvatarAimAtTargetGetter* UCameraStackAvatarAimAtTargetGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackAvatarAimAtTargetGetter");
    return (UCameraStackAvatarAimAtTargetGetter*)res;
}
