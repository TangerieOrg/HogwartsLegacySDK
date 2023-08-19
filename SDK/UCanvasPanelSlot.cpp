#include "FAnchorData.hpp"
#include "FAnchors.hpp"
#include "FMargin.hpp"
#include "FVector2D.hpp"
#include "UCanvasPanelSlot.hpp"
#include "UFunction.hpp"
#include "UPanelSlot.hpp"
void UCanvasPanelSlot::SetPosition(FVector2D InPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.SetPosition"));
    struct Params_SetPosition {
        FVector2D InPosition; // 0x0
    }; // Size: 0x8
    Params_SetPosition params{};
    params.InPosition = (FVector2D)InPosition;
    ProcessEvent(func, &params);
}
UCanvasPanelSlot* UCanvasPanelSlot::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.CanvasPanelSlot");
    return (UCanvasPanelSlot*)res;
}
void UCanvasPanelSlot::SetZOrder(int32_t InZOrder) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.SetZOrder"));
    struct Params_SetZOrder {
        int32_t InZOrder; // 0x0
    }; // Size: 0x4
    Params_SetZOrder params{};
    params.InZOrder = (int32_t)InZOrder;
    ProcessEvent(func, &params);
}
void UCanvasPanelSlot::SetLayout(FAnchorData& InLayoutData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.SetLayout"));
    struct Params_SetLayout {
        FAnchorData InLayoutData; // 0x0
    }; // Size: 0x28
    Params_SetLayout params{};
    params.InLayoutData = (FAnchorData)InLayoutData;
    ProcessEvent(func, &params);
    InLayoutData = params.InLayoutData;
}
void UCanvasPanelSlot::SetOffsets(FMargin InOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.SetOffsets"));
    struct Params_SetOffsets {
        FMargin InOffset; // 0x0
    }; // Size: 0x10
    Params_SetOffsets params{};
    params.InOffset = (FMargin)InOffset;
    ProcessEvent(func, &params);
}
void UCanvasPanelSlot::SetSize(FVector2D InSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.SetSize"));
    struct Params_SetSize {
        FVector2D InSize; // 0x0
    }; // Size: 0x8
    Params_SetSize params{};
    params.InSize = (FVector2D)InSize;
    ProcessEvent(func, &params);
}
void UCanvasPanelSlot::SetMinimum(FVector2D InMinimumAnchors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.SetMinimum"));
    struct Params_SetMinimum {
        FVector2D InMinimumAnchors; // 0x0
    }; // Size: 0x8
    Params_SetMinimum params{};
    params.InMinimumAnchors = (FVector2D)InMinimumAnchors;
    ProcessEvent(func, &params);
}
void UCanvasPanelSlot::SetMaximum(FVector2D InMaximumAnchors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.SetMaximum"));
    struct Params_SetMaximum {
        FVector2D InMaximumAnchors; // 0x0
    }; // Size: 0x8
    Params_SetMaximum params{};
    params.InMaximumAnchors = (FVector2D)InMaximumAnchors;
    ProcessEvent(func, &params);
}
void UCanvasPanelSlot::SetAlignment(FVector2D InAlignment) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.SetAlignment"));
    struct Params_SetAlignment {
        FVector2D InAlignment; // 0x0
    }; // Size: 0x8
    Params_SetAlignment params{};
    params.InAlignment = (FVector2D)InAlignment;
    ProcessEvent(func, &params);
}
void UCanvasPanelSlot::SetAutoSize(bool InbAutoSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.SetAutoSize"));
    struct Params_SetAutoSize {
        bool InbAutoSize; // 0x0
    }; // Size: 0x1
    Params_SetAutoSize params{};
    params.InbAutoSize = (bool)InbAutoSize;
    ProcessEvent(func, &params);
}
void UCanvasPanelSlot::SetAnchors(FAnchors InAnchors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.SetAnchors"));
    struct Params_SetAnchors {
        FAnchors InAnchors; // 0x0
    }; // Size: 0x10
    Params_SetAnchors params{};
    params.InAnchors = (FAnchors)InAnchors;
    ProcessEvent(func, &params);
}
int32_t UCanvasPanelSlot::GetZOrder() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.GetZOrder"));
    struct Params_GetZOrder {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetZOrder params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector2D UCanvasPanelSlot::GetSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.GetSize"));
    struct Params_GetSize {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSize params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FVector2D UCanvasPanelSlot::GetPosition() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.GetPosition"));
    struct Params_GetPosition {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPosition params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
FMargin UCanvasPanelSlot::GetOffsets() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.GetOffsets"));
    struct Params_GetOffsets {
        FMargin ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetOffsets params{};
    ProcessEvent(func, &params);
    return (FMargin)params.ReturnValue;
}
FAnchorData UCanvasPanelSlot::GetLayout() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.GetLayout"));
    struct Params_GetLayout {
        FAnchorData ReturnValue; // 0x0
    }; // Size: 0x28
    Params_GetLayout params{};
    ProcessEvent(func, &params);
    return (FAnchorData)params.ReturnValue;
}
bool UCanvasPanelSlot::GetAutoSize() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.GetAutoSize"));
    struct Params_GetAutoSize {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAutoSize params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FAnchors UCanvasPanelSlot::GetAnchors() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.GetAnchors"));
    struct Params_GetAnchors {
        FAnchors ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetAnchors params{};
    ProcessEvent(func, &params);
    return (FAnchors)params.ReturnValue;
}
FVector2D UCanvasPanelSlot::GetAlignment() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UMG.CanvasPanelSlot.GetAlignment"));
    struct Params_GetAlignment {
        FVector2D ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAlignment params{};
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
