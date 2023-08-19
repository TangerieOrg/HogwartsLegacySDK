#include "FCameraStackAnimationRequest.hpp"
#include "UActorComponent.hpp"
#include "UCameraStackAnimationComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCameraStackAnimationComponent* UCameraStackAnimationComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.CameraStackAnimationComponent");
    return (UCameraStackAnimationComponent*)res;
}
void UCameraStackAnimationComponent::PlayAnimation(FCameraStackAnimationRequest& InAnimationRequest, UObject* InRequester) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackAnimationComponent.PlayAnimation"));
    struct Params_PlayAnimation {
        FCameraStackAnimationRequest InAnimationRequest; // 0x0
        UObject* InRequester; // 0x20
    }; // Size: 0x28
    Params_PlayAnimation params{};
    params.InAnimationRequest = (FCameraStackAnimationRequest)InAnimationRequest;
    params.InRequester = (UObject*)InRequester;
    ProcessEvent(func, &params);
    InAnimationRequest = params.InAnimationRequest;
}
void UCameraStackAnimationComponent::EndAnimation(UObject* InRequester) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.CameraStackAnimationComponent.EndAnimation"));
    struct Params_EndAnimation {
        UObject* InRequester; // 0x0
    }; // Size: 0x8
    Params_EndAnimation params{};
    params.InRequester = (UObject*)InRequester;
    ProcessEvent(func, &params);
}
