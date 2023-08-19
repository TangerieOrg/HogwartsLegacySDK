#include "FARPose3D.hpp"
#include "UARTrackedGeometry.hpp"
#include "UARTrackedPose.hpp"
#include "UFunction.hpp"
UARTrackedPose* UARTrackedPose::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARTrackedPose");
    return (UARTrackedPose*)res;
}
FARPose3D UARTrackedPose::GetTrackedPoseData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedPose.GetTrackedPoseData"));
    struct Params_GetTrackedPoseData {
        FARPose3D ReturnValue; // 0x0
    }; // Size: 0x50
    Params_GetTrackedPoseData params{};
    ProcessEvent(func, &params);
    return (FARPose3D)params.ReturnValue;
}
