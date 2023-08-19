#include "AActor.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#include "UCameraStackBehaviorCamera.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UCameraStackBehaviorCamera* UCameraStackBehaviorCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackBehaviorCamera");
    return (UCameraStackBehaviorCamera*)res;
}
void UCameraStackBehaviorCamera::SetSourceCameraComponent(USceneComponent* InSourceCamera, bool bInIsValidOverDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorCamera.SetSourceCameraComponent"));
    struct Params_SetSourceCameraComponent {
        USceneComponent* InSourceCamera; // 0x0
        bool bInIsValidOverDuration; // 0x8
    }; // Size: 0x9
    Params_SetSourceCameraComponent params{};
    params.InSourceCamera = (USceneComponent*)InSourceCamera;
    params.bInIsValidOverDuration = (bool)bInIsValidOverDuration;
    ProcessEvent(func, &params);
}
void UCameraStackBehaviorCamera::SetSourceCamera(AActor* InSourceCamera, bool bInIsValidOverDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackBehaviorCamera.SetSourceCamera"));
    struct Params_SetSourceCamera {
        AActor* InSourceCamera; // 0x0
        bool bInIsValidOverDuration; // 0x8
    }; // Size: 0x9
    Params_SetSourceCamera params{};
    params.InSourceCamera = (AActor*)InSourceCamera;
    params.bInIsValidOverDuration = (bool)bInIsValidOverDuration;
    ProcessEvent(func, &params);
}
