#include "ETextTransformPolicy.hpp"
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UTextBlock.hpp"
#include "UTextLayoutWidget.hpp"
void UTextBlock::SetMinDesiredWidth(float InMinDesiredWidth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TextBlock.SetMinDesiredWidth"));
    struct Params_SetMinDesiredWidth {
        float InMinDesiredWidth; // 0x0
    }; // Size: 0x4
    Params_SetMinDesiredWidth params{};
    params.InMinDesiredWidth = (float)InMinDesiredWidth;
    ProcessEvent(func, &params);
}
UTextBlock* UTextBlock::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.TextBlock");
    return (UTextBlock*)res;
}
void UTextBlock::SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TextBlock.SetTextTransformPolicy"));
    struct Params_SetTextTransformPolicy {
        ETextTransformPolicy InTransformPolicy; // 0x0
    }; // Size: 0x1
    Params_SetTextTransformPolicy params{};
    params.InTransformPolicy = (ETextTransformPolicy)InTransformPolicy;
    ProcessEvent(func, &params);
}
void UTextBlock::SetShadowOffset(FVector2D InShadowOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TextBlock.SetShadowOffset"));
    struct Params_SetShadowOffset {
        FVector2D InShadowOffset; // 0x0
    }; // Size: 0x8
    Params_SetShadowOffset params{};
    params.InShadowOffset = (FVector2D)InShadowOffset;
    ProcessEvent(func, &params);
}
void UTextBlock::SetText() {}
void UTextBlock::SetStrikeBrush(FSlateBrush InStrikeBrush) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TextBlock.SetStrikeBrush"));
    struct Params_SetStrikeBrush {
        FSlateBrush InStrikeBrush; // 0x0
    }; // Size: 0x88
    Params_SetStrikeBrush params{};
    params.InStrikeBrush = (FSlateBrush)InStrikeBrush;
    ProcessEvent(func, &params);
}
void UTextBlock::SetShadowColorAndOpacity(FLinearColor InShadowColorAndOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TextBlock.SetShadowColorAndOpacity"));
    struct Params_SetShadowColorAndOpacity {
        FLinearColor InShadowColorAndOpacity; // 0x0
    }; // Size: 0x10
    Params_SetShadowColorAndOpacity params{};
    params.InShadowColorAndOpacity = (FLinearColor)InShadowColorAndOpacity;
    ProcessEvent(func, &params);
}
void UTextBlock::SetOpacity(float InOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TextBlock.SetOpacity"));
    struct Params_SetOpacity {
        float InOpacity; // 0x0
    }; // Size: 0x4
    Params_SetOpacity params{};
    params.InOpacity = (float)InOpacity;
    ProcessEvent(func, &params);
}
void UTextBlock::SetFont(FSlateFontInfo InFontInfo) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TextBlock.SetFont"));
    struct Params_SetFont {
        FSlateFontInfo InFontInfo; // 0x0
    }; // Size: 0x58
    Params_SetFont params{};
    params.InFontInfo = (FSlateFontInfo)InFontInfo;
    ProcessEvent(func, &params);
}
void UTextBlock::SetColorAndOpacity(FSlateColor InColorAndOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TextBlock.SetColorAndOpacity"));
    struct Params_SetColorAndOpacity {
        FSlateColor InColorAndOpacity; // 0x0
    }; // Size: 0x28
    Params_SetColorAndOpacity params{};
    params.InColorAndOpacity = (FSlateColor)InColorAndOpacity;
    ProcessEvent(func, &params);
}
void UTextBlock::SetAutoWrapText(bool InAutoTextWrap) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TextBlock.SetAutoWrapText"));
    struct Params_SetAutoWrapText {
        bool InAutoTextWrap; // 0x0
    }; // Size: 0x1
    Params_SetAutoWrapText params{};
    params.InAutoTextWrap = (bool)InAutoTextWrap;
    ProcessEvent(func, &params);
}
void UTextBlock::GetText() {}
UMaterialInstanceDynamic* UTextBlock::GetDynamicOutlineMaterial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TextBlock.GetDynamicOutlineMaterial"));
    struct Params_GetDynamicOutlineMaterial {
        UMaterialInstanceDynamic* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDynamicOutlineMaterial params{};
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
UMaterialInstanceDynamic* UTextBlock::GetDynamicFontMaterial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.TextBlock.GetDynamicFontMaterial"));
    struct Params_GetDynamicFontMaterial {
        UMaterialInstanceDynamic* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDynamicFontMaterial params{};
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
