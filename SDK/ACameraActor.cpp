#include "AActor.hpp"
#include "ACameraActor.hpp"
#include "EAutoReceiveInput\Type.hpp"
#include "FPostProcessSettings.hpp"
#include "UCameraComponent.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
ACameraActor* ACameraActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CameraActor");
    return (ACameraActor*)res;
}
int32_t ACameraActor::GetAutoActivatePlayerIndex() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraActor.GetAutoActivatePlayerIndex"));
    struct Params_GetAutoActivatePlayerIndex {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetAutoActivatePlayerIndex params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
