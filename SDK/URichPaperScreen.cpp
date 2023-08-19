#include "UFunction.hpp"
#include "URichPaperScreen.hpp"
#include "UScreen.hpp"
URichPaperScreen* URichPaperScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RichPaperScreen");
    return (URichPaperScreen*)res;
}
void URichPaperScreen::SetRichPaperID(FString RichPaperID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RichPaperScreen.SetRichPaperID"));
    struct Params_SetRichPaperID {
        FString RichPaperID; // 0x0
    }; // Size: 0x10
    Params_SetRichPaperID params{};
    params.RichPaperID = (FString)RichPaperID;
    ProcessEvent(func, &params);
}
