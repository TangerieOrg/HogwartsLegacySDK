#include "FLerpVolumesScalarName.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarLerpVolumeActor.hpp"
UFXAutoTriggerScalarLerpVolumeActor* UFXAutoTriggerScalarLerpVolumeActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarLerpVolumeActor");
    return (UFXAutoTriggerScalarLerpVolumeActor*)res;
}
