#include "EHorizTextAligment.hpp"
#include "EVerticalTextAligment.hpp"
#include "FColor.hpp"
#include "FVector.hpp"
#include "UFont.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UPrimitiveComponent.hpp"
#include "UTextRenderComponent.hpp"
UTextRenderComponent* UTextRenderComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TextRenderComponent");
    return (UTextRenderComponent*)res;
}
void UTextRenderComponent::SetYScale(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TextRenderComponent.SetYScale"));
    struct Params_SetYScale {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetYScale params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UTextRenderComponent::SetVerticalAlignment(EVerticalTextAligment Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TextRenderComponent.SetVerticalAlignment"));
    struct Params_SetVerticalAlignment {
        EVerticalTextAligment Value; // 0x0
    }; // Size: 0x1
    Params_SetVerticalAlignment params{};
    params.Value = (EVerticalTextAligment)Value;
    ProcessEvent(func, &params);
}
void UTextRenderComponent::SetXScale(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TextRenderComponent.SetXScale"));
    struct Params_SetXScale {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetXScale params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UTextRenderComponent::SetWorldSize(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TextRenderComponent.SetWorldSize"));
    struct Params_SetWorldSize {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetWorldSize params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UTextRenderComponent::SetVertSpacingAdjust(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TextRenderComponent.SetVertSpacingAdjust"));
    struct Params_SetVertSpacingAdjust {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetVertSpacingAdjust params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UTextRenderComponent::K2_SetText() {}
void UTextRenderComponent::SetTextRenderColor(FColor Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TextRenderComponent.SetTextRenderColor"));
    struct Params_SetTextRenderColor {
        FColor Value; // 0x0
    }; // Size: 0x4
    Params_SetTextRenderColor params{};
    params.Value = (FColor)Value;
    ProcessEvent(func, &params);
}
FVector UTextRenderComponent::GetTextLocalSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TextRenderComponent.GetTextLocalSize"));
    struct Params_GetTextLocalSize {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetTextLocalSize params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UTextRenderComponent::SetTextMaterial(UMaterialInterface* Material) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TextRenderComponent.SetTextMaterial"));
    struct Params_SetTextMaterial {
        UMaterialInterface* Material; // 0x0
    }; // Size: 0x8
    Params_SetTextMaterial params{};
    params.Material = (UMaterialInterface*)Material;
    ProcessEvent(func, &params);
}
void UTextRenderComponent::SetText(FString Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TextRenderComponent.SetText"));
    struct Params_SetText {
        FString Value; // 0x0
    }; // Size: 0x10
    Params_SetText params{};
    params.Value = (FString)Value;
    ProcessEvent(func, &params);
}
void UTextRenderComponent::SetHorizSpacingAdjust(float Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TextRenderComponent.SetHorizSpacingAdjust"));
    struct Params_SetHorizSpacingAdjust {
        float Value; // 0x0
    }; // Size: 0x4
    Params_SetHorizSpacingAdjust params{};
    params.Value = (float)Value;
    ProcessEvent(func, &params);
}
void UTextRenderComponent::SetHorizontalAlignment(EHorizTextAligment Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TextRenderComponent.SetHorizontalAlignment"));
    struct Params_SetHorizontalAlignment {
        EHorizTextAligment Value; // 0x0
    }; // Size: 0x1
    Params_SetHorizontalAlignment params{};
    params.Value = (EHorizTextAligment)Value;
    ProcessEvent(func, &params);
}
FVector UTextRenderComponent::GetTextWorldSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TextRenderComponent.GetTextWorldSize"));
    struct Params_GetTextWorldSize {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetTextWorldSize params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UTextRenderComponent::SetFont(UFont* Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TextRenderComponent.SetFont"));
    struct Params_SetFont {
        UFont* Value; // 0x0
    }; // Size: 0x8
    Params_SetFont params{};
    params.Value = (UFont*)Value;
    ProcessEvent(func, &params);
}
