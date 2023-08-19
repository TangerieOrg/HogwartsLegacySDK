#include "UCogGroupUpDirection.hpp"
#include "UCogGroupUpDirection_CameraRayCast.hpp"
UCogGroupUpDirection_CameraRayCast* UCogGroupUpDirection_CameraRayCast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupUpDirection_CameraRayCast");
    return (UCogGroupUpDirection_CameraRayCast*)res;
}
