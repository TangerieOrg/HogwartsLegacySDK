#include "UCameraStackAvatarSyncSplineGetter.hpp"
#include "UCameraStackSplineGetter.hpp"
UCameraStackAvatarSyncSplineGetter* UCameraStackAvatarSyncSplineGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackAvatarSyncSplineGetter");
    return (UCameraStackAvatarSyncSplineGetter*)res;
}
