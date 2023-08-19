#include "UCameraStackInfluenceHandle.hpp"
#include "UCameraStackInfluenceManager.hpp"
#include "UCameraStackVolumePreset.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UCameraStackInfluenceManager::UnregisterInfluence(UCameraStackInfluenceHandle* InHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInfluenceManager.UnregisterInfluence"));
    struct Params_UnregisterInfluence {
        UCameraStackInfluenceHandle* InHandle; // 0x0
    }; // Size: 0x8
    Params_UnregisterInfluence params{};
    params.InHandle = (UCameraStackInfluenceHandle*)InHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UCameraStackInfluenceManager* UCameraStackInfluenceManager::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackInfluenceManager");
    return (UCameraStackInfluenceManager*)res;
}
UCameraStackInfluenceHandle* UCameraStackInfluenceManager::RegisterInfluence(UCameraStackVolumePreset* InPreset, int32_t Priority, float MaxBlendSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackInfluenceManager.RegisterInfluence"));
    struct Params_RegisterInfluence {
        UCameraStackVolumePreset* InPreset; // 0x0
        int32_t Priority; // 0x8
        float MaxBlendSpeed; // 0xc
        UCameraStackInfluenceHandle* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_RegisterInfluence params{};
    params.InPreset = (UCameraStackVolumePreset*)InPreset;
    params.Priority = (int32_t)Priority;
    params.MaxBlendSpeed = (float)MaxBlendSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCameraStackInfluenceHandle*)params.ReturnValue;
}
