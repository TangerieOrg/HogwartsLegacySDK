#include "UFunction.hpp"
#include "URevelioPageScreen.hpp"
#include "UScreen.hpp"
URevelioPageScreen* URevelioPageScreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RevelioPageScreen");
    return (URevelioPageScreen*)res;
}
void URevelioPageScreen::SetRevelioPageID(FName PageID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RevelioPageScreen.SetRevelioPageID"));
    struct Params_SetRevelioPageID {
        FName PageID; // 0x0
    }; // Size: 0x8
    Params_SetRevelioPageID params{};
    params.PageID = (FName)PageID;
    ProcessEvent(func, &params);
}
