#include "FDebugDisplayProperty.hpp"
#include "UConsole.hpp"
#include "UFunction.hpp"
#include "UGameInstance.hpp"
#include "UGameViewportClient.hpp"
#include "UScriptViewportClient.hpp"
#include "UWorld.hpp"
UGameViewportClient* UGameViewportClient::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.GameViewportClient");
    return (UGameViewportClient*)res;
}
void UGameViewportClient::SSSwapControllers() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameViewportClient.SSSwapControllers"));
    struct Params_SSSwapControllers {
    }; // Size: 0x0
    Params_SSSwapControllers params{};
    ProcessEvent(func, &params);
}
void UGameViewportClient::ShowTitleSafeArea() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameViewportClient.ShowTitleSafeArea"));
    struct Params_ShowTitleSafeArea {
    }; // Size: 0x0
    Params_ShowTitleSafeArea params{};
    ProcessEvent(func, &params);
}
void UGameViewportClient::SetConsoleTarget(int32_t PlayerIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.GameViewportClient.SetConsoleTarget"));
    struct Params_SetConsoleTarget {
        int32_t PlayerIndex; // 0x0
    }; // Size: 0x4
    Params_SetConsoleTarget params{};
    params.PlayerIndex = (int32_t)PlayerIndex;
    ProcessEvent(func, &params);
}
