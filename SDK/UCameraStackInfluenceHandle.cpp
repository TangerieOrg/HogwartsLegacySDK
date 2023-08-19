#include "UCameraStackInfluenceHandle.hpp"
#include "UCameraStackVolumePreset.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCameraStackInfluenceHandle* UCameraStackInfluenceHandle::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackInfluenceHandle");
    return (UCameraStackInfluenceHandle*)res;
}
void UCameraStackInfluenceHandle::SetInfluenceWeight(float NewWeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInfluenceHandle.SetInfluenceWeight"));
    struct Params_SetInfluenceWeight {
        float NewWeight; // 0x0
    }; // Size: 0x4
    Params_SetInfluenceWeight params{};
    params.NewWeight = (float)NewWeight;
    ProcessEvent(func, &params);
}
