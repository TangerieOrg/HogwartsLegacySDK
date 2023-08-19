#include "APlayerController.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "ULeaderboardBlueprintLibrary.hpp"
ULeaderboardBlueprintLibrary* ULeaderboardBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary");
    return (ULeaderboardBlueprintLibrary*)res;
}
bool ULeaderboardBlueprintLibrary::WriteLeaderboardInteger(APlayerController* PlayerController, FName StatName, int32_t StatValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger"));
    struct Params_WriteLeaderboardInteger {
        APlayerController* PlayerController; // 0x0
        FName StatName; // 0x8
        int32_t StatValue; // 0x10
        bool ReturnValue; // 0x14
    }; // Size: 0x15
    Params_WriteLeaderboardInteger params{};
    params.PlayerController = (APlayerController*)PlayerController;
    params.StatName = (FName)StatName;
    params.StatValue = (int32_t)StatValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
