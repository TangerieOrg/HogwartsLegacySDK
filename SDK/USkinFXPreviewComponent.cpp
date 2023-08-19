#include "UFunction.hpp"
#include "USceneComponent.hpp"
#include "USkinFXPreviewComponent.hpp"
void USkinFXPreviewComponent::ConstructPreview() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXPreviewComponent.ConstructPreview"));
    struct Params_ConstructPreview {
    }; // Size: 0x0
    Params_ConstructPreview params{};
    ProcessEvent(func, &params);
}
USkinFXPreviewComponent* USkinFXPreviewComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.SkinFXPreviewComponent");
    return (USkinFXPreviewComponent*)res;
}
void USkinFXPreviewComponent::ResetEnvelope() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXPreviewComponent.ResetEnvelope"));
    struct Params_ResetEnvelope {
    }; // Size: 0x0
    Params_ResetEnvelope params{};
    ProcessEvent(func, &params);
}
void USkinFXPreviewComponent::ResetAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SkinFX.SkinFXPreviewComponent.ResetAll"));
    struct Params_ResetAll {
    }; // Size: 0x0
    Params_ResetAll params{};
    ProcessEvent(func, &params);
}
