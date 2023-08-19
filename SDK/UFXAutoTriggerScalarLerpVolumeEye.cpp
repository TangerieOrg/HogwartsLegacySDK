#include "FLerpVolumesScalarName.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarLerpVolumeEye.hpp"
UFXAutoTriggerScalarLerpVolumeEye* UFXAutoTriggerScalarLerpVolumeEye::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarLerpVolumeEye");
    return (UFXAutoTriggerScalarLerpVolumeEye*)res;
}
