#include "UCogGroupUpDirection.hpp"
#include "UCogGroupUpDirection_CameraWithPitchOffset.hpp"
UCogGroupUpDirection_CameraWithPitchOffset* UCogGroupUpDirection_CameraWithPitchOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupUpDirection_CameraWithPitchOffset");
    return (UCogGroupUpDirection_CameraWithPitchOffset*)res;
}
