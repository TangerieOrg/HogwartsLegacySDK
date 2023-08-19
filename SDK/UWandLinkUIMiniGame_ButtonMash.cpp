#include "ECustomInterpType\Type.hpp"
#include "EWandLinkInputType.hpp"
#include "FWandLinkUIMiniGame_ButtonMashDifficultyLevels.hpp"
#include "UFunction.hpp"
#include "UWandLinkUIMiniGame.hpp"
#include "UWandLinkUIMiniGame_ButtonMash.hpp"
void UWandLinkUIMiniGame_ButtonMash::CorrectButtonMashed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_ButtonMash.CorrectButtonMashed"));
    struct Params_CorrectButtonMashed {
    }; // Size: 0x0
    Params_CorrectButtonMashed params{};
    ProcessEvent(func, &params);
}
UWandLinkUIMiniGame_ButtonMash* UWandLinkUIMiniGame_ButtonMash::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WandLinkUIMiniGame_ButtonMash");
    return (UWandLinkUIMiniGame_ButtonMash*)res;
}
void UWandLinkUIMiniGame_ButtonMash::CheatButtonSuccessPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_ButtonMash.CheatButtonSuccessPressed"));
    struct Params_CheatButtonSuccessPressed {
    }; // Size: 0x0
    Params_CheatButtonSuccessPressed params{};
    ProcessEvent(func, &params);
}
void UWandLinkUIMiniGame_ButtonMash::IncorrectButtonMashed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_ButtonMash.IncorrectButtonMashed"));
    struct Params_IncorrectButtonMashed {
    }; // Size: 0x0
    Params_IncorrectButtonMashed params{};
    ProcessEvent(func, &params);
}
void UWandLinkUIMiniGame_ButtonMash::CheatButtonFailPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_ButtonMash.CheatButtonFailPressed"));
    struct Params_CheatButtonFailPressed {
    }; // Size: 0x0
    Params_CheatButtonFailPressed params{};
    ProcessEvent(func, &params);
}
