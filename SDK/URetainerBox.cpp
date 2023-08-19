#include "UContentWidget.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "URetainerBox.hpp"
URetainerBox* URetainerBox::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.RetainerBox");
    return (URetainerBox*)res;
}
UMaterialInstanceDynamic* URetainerBox::GetEffectMaterial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RetainerBox.GetEffectMaterial"));
    struct Params_GetEffectMaterial {
        UMaterialInstanceDynamic* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetEffectMaterial params{};
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
void URetainerBox::SetTextureParameter(FName TextureParameter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RetainerBox.SetTextureParameter"));
    struct Params_SetTextureParameter {
        FName TextureParameter; // 0x0
    }; // Size: 0x8
    Params_SetTextureParameter params{};
    params.TextureParameter = (FName)TextureParameter;
    ProcessEvent(func, &params);
}
void URetainerBox::SetRetainRendering(bool bInRetainRendering) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RetainerBox.SetRetainRendering"));
    struct Params_SetRetainRendering {
        bool bInRetainRendering; // 0x0
    }; // Size: 0x1
    Params_SetRetainRendering params{};
    params.bInRetainRendering = (bool)bInRetainRendering;
    ProcessEvent(func, &params);
}
void URetainerBox::SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RetainerBox.SetRenderingPhase"));
    struct Params_SetRenderingPhase {
        int32_t RenderPhase; // 0x0
        int32_t TotalPhases; // 0x4
    }; // Size: 0x8
    Params_SetRenderingPhase params{};
    params.RenderPhase = (int32_t)RenderPhase;
    params.TotalPhases = (int32_t)TotalPhases;
    ProcessEvent(func, &params);
}
void URetainerBox::SetEffectMaterial(UMaterialInterface* EffectMaterial) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RetainerBox.SetEffectMaterial"));
    struct Params_SetEffectMaterial {
        UMaterialInterface* EffectMaterial; // 0x0
    }; // Size: 0x8
    Params_SetEffectMaterial params{};
    params.EffectMaterial = (UMaterialInterface*)EffectMaterial;
    ProcessEvent(func, &params);
}
void URetainerBox::RequestRender() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.RetainerBox.RequestRender"));
    struct Params_RequestRender {
    }; // Size: 0x0
    Params_RequestRender params{};
    ProcessEvent(func, &params);
}
