#include "UCogGroupFocusDirection.hpp"
#include "UCogGroupFocusDirection_CameraRayCast.hpp"
UCogGroupFocusDirection_CameraRayCast* UCogGroupFocusDirection_CameraRayCast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupFocusDirection_CameraRayCast");
    return (UCogGroupFocusDirection_CameraRayCast*)res;
}
