#include "EInputDeviceUsed.hpp"
#include "FLegendItemData.hpp"
#include "FSlateColor.hpp"
#include "UFunction.hpp"
#include "ULegendItem.hpp"
#include "UPhoenixUserWidget.hpp"
ULegendItem* ULegendItem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LegendItem");
    return (ULegendItem*)res;
}
void ULegendItem::UpdateFillMeterStyle(EInputDeviceUsed UsedInputDevice) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.UpdateFillMeterStyle"));
    struct Params_UpdateFillMeterStyle {
        EInputDeviceUsed UsedInputDevice; // 0x0
    }; // Size: 0x1
    Params_UpdateFillMeterStyle params{};
    params.UsedInputDevice = (EInputDeviceUsed)UsedInputDevice;
    ProcessEvent(func, &params);
}
void ULegendItem::StopHolding() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.StopHolding"));
    struct Params_StopHolding {
    }; // Size: 0x0
    Params_StopHolding params{};
    ProcessEvent(func, &params);
}
void ULegendItem::SetProgress(float Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.SetProgress"));
    struct Params_SetProgress {
        float Progress; // 0x0
    }; // Size: 0x4
    Params_SetProgress params{};
    params.Progress = (float)Progress;
    ProcessEvent(func, &params);
}
void ULegendItem::StartHolding() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.StartHolding"));
    struct Params_StartHolding {
    }; // Size: 0x0
    Params_StartHolding params{};
    ProcessEvent(func, &params);
}
void ULegendItem::SetLegendItemData(FLegendItemData& LegendItemData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.SetLegendItemData"));
    struct Params_SetLegendItemData {
        FLegendItemData LegendItemData; // 0x0
    }; // Size: 0x30
    Params_SetLegendItemData params{};
    params.LegendItemData = (FLegendItemData)LegendItemData;
    ProcessEvent(func, &params);
    LegendItemData = params.LegendItemData;
}
void ULegendItem::SetTextColor(FSlateColor InColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.SetTextColor"));
    struct Params_SetTextColor {
        FSlateColor InColor; // 0x0
    }; // Size: 0x28
    Params_SetTextColor params{};
    params.InColor = (FSlateColor)InColor;
    ProcessEvent(func, &params);
}
void ULegendItem::SetProgressUsed(bool ProgressUsed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.SetProgressUsed"));
    struct Params_SetProgressUsed {
        bool ProgressUsed; // 0x0
    }; // Size: 0x1
    Params_SetProgressUsed params{};
    params.ProgressUsed = (bool)ProgressUsed;
    ProcessEvent(func, &params);
}
void ULegendItem::SetHoldDuration(float NewHoldDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.SetHoldDuration"));
    struct Params_SetHoldDuration {
        float NewHoldDuration; // 0x0
    }; // Size: 0x4
    Params_SetHoldDuration params{};
    params.NewHoldDuration = (float)NewHoldDuration;
    ProcessEvent(func, &params);
}
void ULegendItem::SetDisabledState(bool Disabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.SetDisabledState"));
    struct Params_SetDisabledState {
        bool Disabled; // 0x0
    }; // Size: 0x1
    Params_SetDisabledState params{};
    params.Disabled = (bool)Disabled;
    ProcessEvent(func, &params);
}
void ULegendItem::ProgressUsedChanged(bool ProgressUsed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.ProgressUsedChanged"));
    struct Params_ProgressUsedChanged {
        bool ProgressUsed; // 0x0
    }; // Size: 0x1
    Params_ProgressUsedChanged params{};
    params.ProgressUsed = (bool)ProgressUsed;
    ProcessEvent(func, &params);
}
void ULegendItem::ProgressChanged(float Progress) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.ProgressChanged"));
    struct Params_ProgressChanged {
        float Progress; // 0x0
    }; // Size: 0x4
    Params_ProgressChanged params{};
    params.Progress = (float)Progress;
    ProcessEvent(func, &params);
}
void ULegendItem::LegendItemHoldReleaseEvent__DelegateSignature(ULegendItem* LegendItem, bool HoldWasCompleted) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.LegendItem.LegendItemHoldReleaseEvent__DelegateSignature"));
    struct Params_LegendItemHoldReleaseEvent__DelegateSignature {
        ULegendItem* LegendItem; // 0x0
        bool HoldWasCompleted; // 0x8
    }; // Size: 0x9
    Params_LegendItemHoldReleaseEvent__DelegateSignature params{};
    params.LegendItem = (ULegendItem*)LegendItem;
    params.HoldWasCompleted = (bool)HoldWasCompleted;
    ProcessEvent(func, &params);
}
void ULegendItem::LegendItemDataChanged(FString ButtonString, FString TextString, bool TextStringIsLocalized) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.LegendItemDataChanged"));
    struct Params_LegendItemDataChanged {
        FString ButtonString; // 0x0
        FString TextString; // 0x10
        bool TextStringIsLocalized; // 0x20
    }; // Size: 0x21
    Params_LegendItemDataChanged params{};
    params.ButtonString = (FString)ButtonString;
    params.TextString = (FString)TextString;
    params.TextStringIsLocalized = (bool)TextStringIsLocalized;
    ProcessEvent(func, &params);
}
FLegendItemData ULegendItem::GetLegendItemData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.GetLegendItemData"));
    struct Params_GetLegendItemData {
        FLegendItemData ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetLegendItemData params{};
    ProcessEvent(func, &params);
    return (FLegendItemData)params.ReturnValue;
}
void ULegendItem::DisabledStateChanged(bool Disabled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LegendItem.DisabledStateChanged"));
    struct Params_DisabledStateChanged {
        bool Disabled; // 0x0
    }; // Size: 0x1
    Params_DisabledStateChanged params{};
    params.Disabled = (bool)Disabled;
    ProcessEvent(func, &params);
}
