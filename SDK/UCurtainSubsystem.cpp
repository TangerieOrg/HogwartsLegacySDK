#include "UClass.hpp"
#include "UCurtainSubsystem.hpp"
#include "UFunction.hpp"
#include "UGameInstanceSubsystem.hpp"
#include "UObject.hpp"
#include "UUserWidget.hpp"
UCurtainSubsystem* UCurtainSubsystem::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.CurtainSubsystem");
    return (UCurtainSubsystem*)res;
}
void UCurtainSubsystem::LowerCurtain(UObject* WhosAsking, FName WhatsYourName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.CurtainSubsystem.LowerCurtain"));
    struct Params_LowerCurtain {
        UObject* WhosAsking; // 0x0
        FName WhatsYourName; // 0x8
    }; // Size: 0x10
    Params_LowerCurtain params{};
    params.WhosAsking = (UObject*)WhosAsking;
    params.WhatsYourName = (FName)WhatsYourName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UCurtainSubsystem::IsCurtainDown(UObject* WhosAsking) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.CurtainSubsystem.IsCurtainDown"));
    struct Params_IsCurtainDown {
        UObject* WhosAsking; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsCurtainDown params{};
    params.WhosAsking = (UObject*)WhosAsking;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FString UCurtainSubsystem::GetLienholderNames() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.CurtainSubsystem.GetLienholderNames"));
    struct Params_GetLienholderNames {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLienholderNames params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
