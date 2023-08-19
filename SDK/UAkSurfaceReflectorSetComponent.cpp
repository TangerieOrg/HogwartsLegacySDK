#include "AActor.hpp"
#include "FAkSurfacePoly.hpp"
#include "UAkAcousticTextureSetComponent.hpp"
#include "UAkSurfaceReflectorSetComponent.hpp"
#include "UFunction.hpp"
UAkSurfaceReflectorSetComponent* UAkSurfaceReflectorSetComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkSurfaceReflectorSetComponent");
    return (UAkSurfaceReflectorSetComponent*)res;
}
void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSurfaceReflectorSetComponent.RemoveSurfaceReflectorSet"));
    struct Params_RemoveSurfaceReflectorSet {
    }; // Size: 0x0
    Params_RemoveSurfaceReflectorSet params{};
    ProcessEvent(func, &params);
}
void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSurfaceReflectorSetComponent.UpdateSurfaceReflectorSet"));
    struct Params_UpdateSurfaceReflectorSet {
    }; // Size: 0x0
    Params_UpdateSurfaceReflectorSet params{};
    ProcessEvent(func, &params);
}
void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkSurfaceReflectorSetComponent.SendSurfaceReflectorSet"));
    struct Params_SendSurfaceReflectorSet {
    }; // Size: 0x0
    Params_SendSurfaceReflectorSet params{};
    ProcessEvent(func, &params);
}
