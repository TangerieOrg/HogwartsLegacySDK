#include "EHorizontalAlignment.hpp"
#include "EVerticalAlignment.hpp"
#include "FLinearColor.hpp"
#include "FMargin.hpp"
#include "FSlateBrush.hpp"
#include "FVector2D.hpp"
#include "UBorder.hpp"
#include "UContentWidget.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "USlateBrushAsset.hpp"
#include "UTexture2D.hpp"
void UBorder::SetContentColorAndOpacity(FLinearColor InContentColorAndOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Border.SetContentColorAndOpacity"));
    struct Params_SetContentColorAndOpacity {
        FLinearColor InContentColorAndOpacity; // 0x0
    }; // Size: 0x10
    Params_SetContentColorAndOpacity params{};
    params.InContentColorAndOpacity = (FLinearColor)InContentColorAndOpacity;
    ProcessEvent(func, &params);
}
void UBorder::SetVerticalAlignment(EVerticalAlignment InVerticalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Border.SetVerticalAlignment"));
    struct Params_SetVerticalAlignment {
        EVerticalAlignment InVerticalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetVerticalAlignment params{};
    params.InVerticalAlignment = (EVerticalAlignment)InVerticalAlignment;
    ProcessEvent(func, &params);
}
UBorder* UBorder::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.Border");
    return (UBorder*)res;
}
void UBorder::SetPadding(FMargin InPadding) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Border.SetPadding"));
    struct Params_SetPadding {
        FMargin InPadding; // 0x0
    }; // Size: 0x10
    Params_SetPadding params{};
    params.InPadding = (FMargin)InPadding;
    ProcessEvent(func, &params);
}
void UBorder::SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Border.SetHorizontalAlignment"));
    struct Params_SetHorizontalAlignment {
        EHorizontalAlignment InHorizontalAlignment; // 0x0
    }; // Size: 0x1
    Params_SetHorizontalAlignment params{};
    params.InHorizontalAlignment = (EHorizontalAlignment)InHorizontalAlignment;
    ProcessEvent(func, &params);
}
void UBorder::SetDesiredSizeScale(FVector2D InScale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Border.SetDesiredSizeScale"));
    struct Params_SetDesiredSizeScale {
        FVector2D InScale; // 0x0
    }; // Size: 0x8
    Params_SetDesiredSizeScale params{};
    params.InScale = (FVector2D)InScale;
    ProcessEvent(func, &params);
}
void UBorder::SetBrushFromTexture(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Border.SetBrushFromTexture"));
    struct Params_SetBrushFromTexture {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_SetBrushFromTexture params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void UBorder::SetBrushFromMaterial(UMaterialInterface* Material) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Border.SetBrushFromMaterial"));
    struct Params_SetBrushFromMaterial {
        UMaterialInterface* Material; // 0x0
    }; // Size: 0x8
    Params_SetBrushFromMaterial params{};
    params.Material = (UMaterialInterface*)Material;
    ProcessEvent(func, &params);
}
void UBorder::SetBrushFromAsset(USlateBrushAsset* Asset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Border.SetBrushFromAsset"));
    struct Params_SetBrushFromAsset {
        USlateBrushAsset* Asset; // 0x0
    }; // Size: 0x8
    Params_SetBrushFromAsset params{};
    params.Asset = (USlateBrushAsset*)Asset;
    ProcessEvent(func, &params);
}
void UBorder::SetBrushColor(FLinearColor InBrushColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Border.SetBrushColor"));
    struct Params_SetBrushColor {
        FLinearColor InBrushColor; // 0x0
    }; // Size: 0x10
    Params_SetBrushColor params{};
    params.InBrushColor = (FLinearColor)InBrushColor;
    ProcessEvent(func, &params);
}
void UBorder::SetBrush(FSlateBrush& InBrush) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Border.SetBrush"));
    struct Params_SetBrush {
        FSlateBrush InBrush; // 0x0
    }; // Size: 0x88
    Params_SetBrush params{};
    params.InBrush = (FSlateBrush)InBrush;
    ProcessEvent(func, &params);
    InBrush = params.InBrush;
}
UMaterialInstanceDynamic* UBorder::GetDynamicMaterial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Border.GetDynamicMaterial"));
    struct Params_GetDynamicMaterial {
        UMaterialInstanceDynamic* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDynamicMaterial params{};
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
