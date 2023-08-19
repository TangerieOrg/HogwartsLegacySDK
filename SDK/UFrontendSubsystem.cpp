#include "UFrontendSubsystem.hpp"
#include "UFunction.hpp"
#include "UGameInstanceSubsystem.hpp"
#include "UObject.hpp"
UFrontendSubsystem* UFrontendSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FrontendSubsystem");
    return (UFrontendSubsystem*)res;
}
void UFrontendSubsystem::ReleaseTitleScreen(UObject* LienHolder, FName LienholderName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrontendSubsystem.ReleaseTitleScreen"));
    struct Params_ReleaseTitleScreen {
        UObject* LienHolder; // 0x0
        FName LienholderName; // 0x8
    }; // Size: 0x10
    Params_ReleaseTitleScreen params{};
    params.LienHolder = (UObject*)LienHolder;
    params.LienholderName = (FName)LienholderName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UFrontendSubsystem::IsTitleScreenHeld(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrontendSubsystem.IsTitleScreenHeld"));
    struct Params_IsTitleScreenHeld {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsTitleScreenHeld params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UFrontendSubsystem::HoldTitleScreen(UObject* LienHolder, FName LienholderName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FrontendSubsystem.HoldTitleScreen"));
    struct Params_HoldTitleScreen {
        UObject* LienHolder; // 0x0
        FName LienholderName; // 0x8
    }; // Size: 0x10
    Params_HoldTitleScreen params{};
    params.LienHolder = (UObject*)LienHolder;
    params.LienholderName = (FName)LienholderName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
