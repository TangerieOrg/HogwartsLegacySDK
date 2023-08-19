#include "APlayerCameraManager.hpp"
#include "UFunction.hpp"
#include "UTargetTypeBase.hpp"
#include "UTargetTypeCamera.hpp"
void UTargetTypeCamera::SetPlayerCameraManager(APlayerCameraManager* InPlayerCameraManager) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeCamera.SetPlayerCameraManager"));
    struct Params_SetPlayerCameraManager {
        APlayerCameraManager* InPlayerCameraManager; // 0x0
    }; // Size: 0x8
    Params_SetPlayerCameraManager params{};
    params.InPlayerCameraManager = (APlayerCameraManager*)InPlayerCameraManager;
    ProcessEvent(func, &params);
}
UTargetTypeCamera* UTargetTypeCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.TargetTypeCamera");
    return (UTargetTypeCamera*)res;
}
APlayerCameraManager* UTargetTypeCamera::GetPlayerCameraManager() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeCamera.GetPlayerCameraManager"));
    struct Params_GetPlayerCameraManager {
        APlayerCameraManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPlayerCameraManager params{};
    ProcessEvent(func, &params);
    return (APlayerCameraManager*)params.ReturnValue;
}
