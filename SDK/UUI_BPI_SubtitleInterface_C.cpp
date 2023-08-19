#include "UFunction.hpp"
#include "UInterface.hpp"
#include "URichTextBlock.hpp"
#include "UUI_BPI_SubtitleInterface_C.hpp"
void UUI_BPI_SubtitleInterface_C::ResetHeight() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_SubtitleInterface.UI_BPI_SubtitleInterface_C.ResetHeight"));
    struct Params_ResetHeight {
    }; // Size: 0x0
    Params_ResetHeight params{};
    ProcessEvent(func, &params);
}
UUI_BPI_SubtitleInterface_C* UUI_BPI_SubtitleInterface_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Interfaces/UI_BPI_SubtitleInterface.UI_BPI_SubtitleInterface_C");
    return (UUI_BPI_SubtitleInterface_C*)res;
}
void UUI_BPI_SubtitleInterface_C::AdjustHeight(float PixelsUP) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_SubtitleInterface.UI_BPI_SubtitleInterface_C.AdjustHeight"));
    struct Params_AdjustHeight {
        float PixelsUP; // 0x0
    }; // Size: 0x4
    Params_AdjustHeight params{};
    params.PixelsUP = (float)PixelsUP;
    ProcessEvent(func, &params);
}
void UUI_BPI_SubtitleInterface_C::SubtitlesCleanup() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_SubtitleInterface.UI_BPI_SubtitleInterface_C.SubtitlesCleanup"));
    struct Params_SubtitlesCleanup {
    }; // Size: 0x0
    Params_SubtitlesCleanup params{};
    ProcessEvent(func, &params);
}
void UUI_BPI_SubtitleInterface_C::SetRichText(FString InputString) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_SubtitleInterface.UI_BPI_SubtitleInterface_C.SetRichText"));
    struct Params_SetRichText {
        FString InputString; // 0x0
    }; // Size: 0x10
    Params_SetRichText params{};
    params.InputString = (FString)InputString;
    ProcessEvent(func, &params);
}
void UUI_BPI_SubtitleInterface_C::GetRichText(URichTextBlock*& NewParam) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_SubtitleInterface.UI_BPI_SubtitleInterface_C.GetRichText"));
    struct Params_GetRichText {
        URichTextBlock* NewParam; // 0x0
    }; // Size: 0x8
    Params_GetRichText params{};
    params.NewParam = (URichTextBlock*)NewParam;
    ProcessEvent(func, &params);
    NewParam = params.NewParam;
}
