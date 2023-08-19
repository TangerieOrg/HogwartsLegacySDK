#include "EFourPlayerSplitScreenType.hpp"
#include "EThreePlayerSplitScreenType\Type.hpp"
#include "ETwoPlayerSplitScreenType\Type.hpp"
#include "FGameModeName.hpp"
#include "FSoftClassPath.hpp"
#include "FSoftObjectPath.hpp"
#include "UFunction.hpp"
#include "UGameMapsSettings.hpp"
#include "UObject.hpp"
UGameMapsSettings* UGameMapsSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/EngineSettings.GameMapsSettings");
    return (UGameMapsSettings*)res;
}
UGameMapsSettings* UGameMapsSettings::GetGameMapsSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EngineSettings.GameMapsSettings.GetGameMapsSettings"));
    struct Params_GetGameMapsSettings {
        UGameMapsSettings* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGameMapsSettings params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGameMapsSettings*)params.ReturnValue;
}
void UGameMapsSettings::SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer) {
    static auto func = (UFunction*)(find_uobject("Function /Script/EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1"));
    struct Params_SetSkipAssigningGamepadToPlayer1 {
        bool bSkipFirstPlayer; // 0x0
    }; // Size: 0x1
    Params_SetSkipAssigningGamepadToPlayer1 params{};
    params.bSkipFirstPlayer = (bool)bSkipFirstPlayer;
    ProcessEvent(func, &params);
}
bool UGameMapsSettings::GetSkipAssigningGamepadToPlayer1() {
    static auto func = (UFunction*)(find_uobject("Function /Script/EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1"));
    struct Params_GetSkipAssigningGamepadToPlayer1 {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetSkipAssigningGamepadToPlayer1 params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
