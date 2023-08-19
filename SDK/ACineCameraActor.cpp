#include "ACameraActor.hpp"
#include "ACineCameraActor.hpp"
#include "FCameraLookatTrackingSettings.hpp"
#include "UCineCameraComponent.hpp"
#include "UFunction.hpp"
ACineCameraActor* ACineCameraActor::StaticClass() {
    static auto res = find_uobject("Class /Script/CinematicCamera.CineCameraActor");
    return (ACineCameraActor*)res;
}
UCineCameraComponent* ACineCameraActor::GetCineCameraComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent"));
    struct Params_GetCineCameraComponent {
        UCineCameraComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCineCameraComponent params{};
    ProcessEvent(func, &params);
    return (UCineCameraComponent*)params.ReturnValue;
}
