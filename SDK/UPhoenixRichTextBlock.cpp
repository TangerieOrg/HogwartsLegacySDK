#include "FDataTableRowHandle.hpp"
#include "FLinearColor.hpp"
#include "FSlateBrush.hpp"
#include "UFont.hpp"
#include "UFunction.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "URichTextBlock.hpp"
#include "UTexture2D.hpp"
UPhoenixRichTextBlock* UPhoenixRichTextBlock::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixRichTextBlock");
    return (UPhoenixRichTextBlock*)res;
}
void UPhoenixRichTextBlock::SetTextKey(FString Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixRichTextBlock.SetTextKey"));
    struct Params_SetTextKey {
        FString Key; // 0x0
    }; // Size: 0x10
    Params_SetTextKey params{};
    params.Key = (FString)Key;
    ProcessEvent(func, &params);
}
void UPhoenixRichTextBlock::SetPhoenixText(FString InText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixRichTextBlock.SetPhoenixText"));
    struct Params_SetPhoenixText {
        FString InText; // 0x0
    }; // Size: 0x10
    Params_SetPhoenixText params{};
    params.InText = (FString)InText;
    ProcessEvent(func, &params);
}
bool UPhoenixRichTextBlock::PreValidateLocalizationKey(FString RequestedKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixRichTextBlock.PreValidateLocalizationKey"));
    struct Params_PreValidateLocalizationKey {
        FString RequestedKey; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_PreValidateLocalizationKey params{};
    params.RequestedKey = (FString)RequestedKey;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UPhoenixRichTextBlock::ReplaceInputActions(FString KeyText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixRichTextBlock.ReplaceInputActions"));
    struct Params_ReplaceInputActions {
        FString KeyText; // 0x0
        FString ReturnValue; // 0x10
    }; // Size: 0x20
    Params_ReplaceInputActions params{};
    params.KeyText = (FString)KeyText;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UPhoenixRichTextBlock::FontLoadCallback(UFont* Font) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PhoenixRichTextBlock.FontLoadCallback"));
    struct Params_FontLoadCallback {
        UFont* Font; // 0x0
    }; // Size: 0x8
    Params_FontLoadCallback params{};
    params.Font = (UFont*)Font;
    ProcessEvent(func, &params);
}
