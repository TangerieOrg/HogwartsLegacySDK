#include "FDataTableRowHandle.hpp"
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "FSlateFontInfo.hpp"
#include "FSoftObjectPath.hpp"
#include "UFont.hpp"
#include "UFunction.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UTextBlock.hpp"
UPhoenixTextBlock* UPhoenixTextBlock::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixTextBlock");
    return (UPhoenixTextBlock*)res;
}
void UPhoenixTextBlock::SetTextKey(FString Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixTextBlock.SetTextKey"));
    struct Params_SetTextKey {
        FString Key; // 0x0
    }; // Size: 0x10
    Params_SetTextKey params{};
    params.Key = (FString)Key;
    ProcessEvent(func, &params);
}
void UPhoenixTextBlock::SetColorTag(FDataTableRowHandle NewColorTag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixTextBlock.SetColorTag"));
    struct Params_SetColorTag {
        FDataTableRowHandle NewColorTag; // 0x0
    }; // Size: 0x10
    Params_SetColorTag params{};
    params.NewColorTag = (FDataTableRowHandle)NewColorTag;
    ProcessEvent(func, &params);
}
FString UPhoenixTextBlock::GetPhoenixText() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixTextBlock.GetPhoenixText"));
    struct Params_GetPhoenixText {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetPhoenixText params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UPhoenixTextBlock::PreValidateLocalizationKey(FString RequestedKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixTextBlock.PreValidateLocalizationKey"));
    struct Params_PreValidateLocalizationKey {
        FString RequestedKey; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_PreValidateLocalizationKey params{};
    params.RequestedKey = (FString)RequestedKey;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FDataTableRowHandle UPhoenixTextBlock::GetColorTag() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixTextBlock.GetColorTag"));
    struct Params_GetColorTag {
        FDataTableRowHandle ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetColorTag params{};
    ProcessEvent(func, &params);
    return (FDataTableRowHandle)params.ReturnValue;
}
FSlateFontInfo UPhoenixTextBlock::GetFontInfo() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixTextBlock.GetFontInfo"));
    struct Params_GetFontInfo {
        FSlateFontInfo ReturnValue; // 0x0
    }; // Size: 0x58
    Params_GetFontInfo params{};
    ProcessEvent(func, &params);
    return (FSlateFontInfo)params.ReturnValue;
}
float UPhoenixTextBlock::GetCurrentFontScale() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixTextBlock.GetCurrentFontScale"));
    struct Params_GetCurrentFontScale {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetCurrentFontScale params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UPhoenixTextBlock::FontLoadCallback(UFont* LoadedFont) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixTextBlock.FontLoadCallback"));
    struct Params_FontLoadCallback {
        UFont* LoadedFont; // 0x0
    }; // Size: 0x8
    Params_FontLoadCallback params{};
    params.LoadedFont = (UFont*)LoadedFont;
    ProcessEvent(func, &params);
}
