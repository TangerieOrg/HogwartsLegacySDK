#include "ECustomInterpType\Type.hpp"
#include "EWandLinkInputType.hpp"
#include "UFunction.hpp"
#include "UWandLinkUIMiniGame.hpp"
#include "UWandLinkUIMiniGame_NewButtonMash.hpp"
UWandLinkUIMiniGame_NewButtonMash* UWandLinkUIMiniGame_NewButtonMash::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WandLinkUIMiniGame_NewButtonMash");
    return (UWandLinkUIMiniGame_NewButtonMash*)res;
}
void UWandLinkUIMiniGame_NewButtonMash::FailTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_NewButtonMash.FailTimerExpired"));
    struct Params_FailTimerExpired {
    }; // Size: 0x0
    Params_FailTimerExpired params{};
    ProcessEvent(func, &params);
}
void UWandLinkUIMiniGame_NewButtonMash::IncorrectSuccessButtonPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_NewButtonMash.IncorrectSuccessButtonPressed"));
    struct Params_IncorrectSuccessButtonPressed {
    }; // Size: 0x0
    Params_IncorrectSuccessButtonPressed params{};
    ProcessEvent(func, &params);
}
void UWandLinkUIMiniGame_NewButtonMash::SuccessTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_NewButtonMash.SuccessTimerExpired"));
    struct Params_SuccessTimerExpired {
    }; // Size: 0x0
    Params_SuccessTimerExpired params{};
    ProcessEvent(func, &params);
}
void UWandLinkUIMiniGame_NewButtonMash::SuccessComboButtonReleased() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_NewButtonMash.SuccessComboButtonReleased"));
    struct Params_SuccessComboButtonReleased {
    }; // Size: 0x0
    Params_SuccessComboButtonReleased params{};
    ProcessEvent(func, &params);
}
void UWandLinkUIMiniGame_NewButtonMash::SuccessComboButtonPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_NewButtonMash.SuccessComboButtonPressed"));
    struct Params_SuccessComboButtonPressed {
    }; // Size: 0x0
    Params_SuccessComboButtonPressed params{};
    ProcessEvent(func, &params);
}
void UWandLinkUIMiniGame_NewButtonMash::SuccessButtonPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_NewButtonMash.SuccessButtonPressed"));
    struct Params_SuccessButtonPressed {
    }; // Size: 0x0
    Params_SuccessButtonPressed params{};
    ProcessEvent(func, &params);
}
void UWandLinkUIMiniGame_NewButtonMash::IncorrectButtonMashed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_NewButtonMash.IncorrectButtonMashed"));
    struct Params_IncorrectButtonMashed {
    }; // Size: 0x0
    Params_IncorrectButtonMashed params{};
    ProcessEvent(func, &params);
}
void UWandLinkUIMiniGame_NewButtonMash::CorrectButtonMashed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_NewButtonMash.CorrectButtonMashed"));
    struct Params_CorrectButtonMashed {
    }; // Size: 0x0
    Params_CorrectButtonMashed params{};
    ProcessEvent(func, &params);
}
void UWandLinkUIMiniGame_NewButtonMash::CheatButtonSuccessPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_NewButtonMash.CheatButtonSuccessPressed"));
    struct Params_CheatButtonSuccessPressed {
    }; // Size: 0x0
    Params_CheatButtonSuccessPressed params{};
    ProcessEvent(func, &params);
}
void UWandLinkUIMiniGame_NewButtonMash::CheatButtonFailPressed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WandLinkUIMiniGame_NewButtonMash.CheatButtonFailPressed"));
    struct Params_CheatButtonFailPressed {
    }; // Size: 0x0
    Params_CheatButtonFailPressed params{};
    ProcessEvent(func, &params);
}
