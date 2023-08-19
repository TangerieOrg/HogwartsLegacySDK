#include "UCogGroupFocusDirection.hpp"
#include "UCogGroupFocusDirection_CameraWithPitchOffset.hpp"
UCogGroupFocusDirection_CameraWithPitchOffset* UCogGroupFocusDirection_CameraWithPitchOffset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupFocusDirection_CameraWithPitchOffset");
    return (UCogGroupFocusDirection_CameraWithPitchOffset*)res;
}
