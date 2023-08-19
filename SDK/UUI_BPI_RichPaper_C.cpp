#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UUI_BPI_RichPaper_C.hpp"
void UUI_BPI_RichPaper_C::MenuReadRichPaper() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_RichPaper.UI_BPI_RichPaper_C.MenuReadRichPaper"));
    struct Params_MenuReadRichPaper {
    }; // Size: 0x0
    Params_MenuReadRichPaper params{};
    ProcessEvent(func, &params);
}
UUI_BPI_RichPaper_C* UUI_BPI_RichPaper_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/Interfaces/UI_BPI_RichPaper.UI_BPI_RichPaper_C");
    return (UUI_BPI_RichPaper_C*)res;
}
void UUI_BPI_RichPaper_C::SetBackgroundImage(FString NewBackground) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_RichPaper.UI_BPI_RichPaper_C.SetBackgroundImage"));
    struct Params_SetBackgroundImage {
        FString NewBackground; // 0x0
    }; // Size: 0x10
    Params_SetBackgroundImage params{};
    params.NewBackground = (FString)NewBackground;
    ProcessEvent(func, &params);
}
void UUI_BPI_RichPaper_C::SetRichPaper(FString RichPaperID, FString sender) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Interfaces/UI_BPI_RichPaper.UI_BPI_RichPaper_C.SetRichPaper"));
    struct Params_SetRichPaper {
        FString RichPaperID; // 0x0
        FString sender; // 0x10
    }; // Size: 0x20
    Params_SetRichPaper params{};
    params.RichPaperID = (FString)RichPaperID;
    params.sender = (FString)sender;
    ProcessEvent(func, &params);
}
