#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "UBackgroundBlur.hpp"
#include "UContentWidget.hpp"
#include "UFunction.hpp"
void UBackgroundBlur::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.BackgroundBlur.SetVerticalAlignment"));
    struct Params_SetVerticalAlignment {
        EVerticalAlignment InVerticalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetVerticalAlignment params{};
    params.InVerticalAlignment = (EVerticalAlignment)InVerticalAlignment;
    ProcessEvent(func, &params);
}
UBackgroundBlur* UBackgroundBlur::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.BackgroundBlur");
    return (UBackgroundBlur*)res;
}
void UBackgroundBlur::SetBlurStrength(float InStrength) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.BackgroundBlur.SetBlurStrength"));
    struct Params_SetBlurStrength {
        float InStrength; // 0x0
    }; // Size: 0x4
    Params_SetBlurStrength params{};
    params.InStrength = (float)InStrength;
    ProcessEvent(func, &params);
}
void UBackgroundBlur::SetPadding(FMargin InPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.BackgroundBlur.SetPadding"));
    struct Params_SetPadding {
        FMargin InPadding; // 0x0
    }; // Size: 0x10
    Params_SetPadding params{};
    params.InPadding = (FMargin)InPadding;
    ProcessEvent(func, &params);
}
void UBackgroundBlur::SetLowQualityFallbackBrush(FSlateBrush& InBrush) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.BackgroundBlur.SetLowQualityFallbackBrush"));
    struct Params_SetLowQualityFallbackBrush {
        FSlateBrush InBrush; // 0x0
    }; // Size: 0x88
    Params_SetLowQualityFallbackBrush params{};
    params.InBrush = (FSlateBrush)InBrush;
    ProcessEvent(func, &params);
    InBrush = params.InBrush;
}
void UBackgroundBlur::SetBlurRadius(int32_t InBlurRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.BackgroundBlur.SetBlurRadius"));
    struct Params_SetBlurRadius {
        int32_t InBlurRadius; // 0x0
    }; // Size: 0x4
    Params_SetBlurRadius params{};
    params.InBlurRadius = (int32_t)InBlurRadius;
    ProcessEvent(func, &params);
}
void UBackgroundBlur::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.BackgroundBlur.SetHorizontalAlignment"));
    struct Params_SetHorizontalAlignment {
        EHorizontalAlignment InHorizontalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetHorizontalAlignment params{};
    params.InHorizontalAlignment = (EHorizontalAlignment)InHorizontalAlignment;
    ProcessEvent(func, &params);
}
void UBackgroundBlur::SetApplyAlphaToBlur(bool bInApplyAlphaToBlur) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.BackgroundBlur.SetApplyAlphaToBlur"));
    struct Params_SetApplyAlphaToBlur {
        bool bInApplyAlphaToBlur; // 0x0
    }; // Size: 0x1
    Params_SetApplyAlphaToBlur params{};
    params.bInApplyAlphaToBlur = (bool)bInApplyAlphaToBlur;
    ProcessEvent(func, &params);
}
