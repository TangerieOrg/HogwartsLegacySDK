#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "FSlateColor.hpp"
#include "FVector2D.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "USlateBrushAsset.hpp"
#include "UTexture2D.hpp"
#include "UTexture2DDynamic.hpp"
#include "UWidget.hpp"
void UImage::SetBrushFromTextureDynamic(UTexture2DDynamic* Texture, bool bMatchSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Image.SetBrushFromTextureDynamic"));
    struct Params_SetBrushFromTextureDynamic {
        UTexture2DDynamic* Texture; // 0x0
        bool bMatchSize; // 0x8
    }; // Size: 0x9
    Params_SetBrushFromTextureDynamic params{};
    params.Texture = (UTexture2DDynamic*)Texture;
    params.bMatchSize = (bool)bMatchSize;
    ProcessEvent(func, &params);
}
UImage* UImage::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.Image");
    return (UImage*)res;
}
void UImage::SetOpacity(float InOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Image.SetOpacity"));
    struct Params_SetOpacity {
        float InOpacity; // 0x0
    }; // Size: 0x4
    Params_SetOpacity params{};
    params.InOpacity = (float)InOpacity;
    ProcessEvent(func, &params);
}
void UImage::SetColorAndOpacity(FLinearColor InColorAndOpacity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Image.SetColorAndOpacity"));
    struct Params_SetColorAndOpacity {
        FLinearColor InColorAndOpacity; // 0x0
    }; // Size: 0x10
    Params_SetColorAndOpacity params{};
    params.InColorAndOpacity = (FLinearColor)InColorAndOpacity;
    ProcessEvent(func, &params);
}
void UImage::SetBrushResourceObject(UObject* ResourceObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Image.SetBrushResourceObject"));
    struct Params_SetBrushResourceObject {
        UObject* ResourceObject; // 0x0
    }; // Size: 0x8
    Params_SetBrushResourceObject params{};
    params.ResourceObject = (UObject*)ResourceObject;
    ProcessEvent(func, &params);
}
void UImage::SetBrushSize(FVector2D DesiredSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Image.SetBrushSize"));
    struct Params_SetBrushSize {
        FVector2D DesiredSize; // 0x0
    }; // Size: 0x8
    Params_SetBrushSize params{};
    params.DesiredSize = (FVector2D)DesiredSize;
    ProcessEvent(func, &params);
}
void UImage::SetBrushTintColor(FSlateColor TintColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Image.SetBrushTintColor"));
    struct Params_SetBrushTintColor {
        FSlateColor TintColor; // 0x0
    }; // Size: 0x28
    Params_SetBrushTintColor params{};
    params.TintColor = (FSlateColor)TintColor;
    ProcessEvent(func, &params);
}
void UImage::SetBrushFromTexture(UTexture2D* Texture, bool bMatchSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Image.SetBrushFromTexture"));
    struct Params_SetBrushFromTexture {
        UTexture2D* Texture; // 0x0
        bool bMatchSize; // 0x8
    }; // Size: 0x9
    Params_SetBrushFromTexture params{};
    params.Texture = (UTexture2D*)Texture;
    params.bMatchSize = (bool)bMatchSize;
    ProcessEvent(func, &params);
}
void UImage::SetBrushFromSoftMaterial() {}
void UImage::SetBrushFromSoftTexture() {}
void UImage::SetBrushFromMaterial(UMaterialInterface* Material) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Image.SetBrushFromMaterial"));
    struct Params_SetBrushFromMaterial {
        UMaterialInterface* Material; // 0x0
    }; // Size: 0x8
    Params_SetBrushFromMaterial params{};
    params.Material = (UMaterialInterface*)Material;
    ProcessEvent(func, &params);
}
void UImage::SetBrushFromAtlasInterface() {}
void UImage::SetBrushFromAsset(USlateBrushAsset* Asset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Image.SetBrushFromAsset"));
    struct Params_SetBrushFromAsset {
        USlateBrushAsset* Asset; // 0x0
    }; // Size: 0x8
    Params_SetBrushFromAsset params{};
    params.Asset = (USlateBrushAsset*)Asset;
    ProcessEvent(func, &params);
}
void UImage::SetBrush(FSlateBrush& InBrush) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Image.SetBrush"));
    struct Params_SetBrush {
        FSlateBrush InBrush; // 0x0
    }; // Size: 0x88
    Params_SetBrush params{};
    params.InBrush = (FSlateBrush)InBrush;
    ProcessEvent(func, &params);
    InBrush = params.InBrush;
}
UMaterialInstanceDynamic* UImage::GetDynamicMaterial() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.Image.GetDynamicMaterial"));
    struct Params_GetDynamicMaterial {
        UMaterialInstanceDynamic* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDynamicMaterial params{};
    ProcessEvent(func, &params);
    return (UMaterialInstanceDynamic*)params.ReturnValue;
}
