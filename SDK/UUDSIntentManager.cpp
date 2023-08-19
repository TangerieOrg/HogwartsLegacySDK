#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UUDSActivityManager.hpp"
#include "UUDSIntentManager.hpp"
void UUDSIntentManager::HandleNavigationPathUpdated(TArray<FVector> NewPath) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UDSIntentManager.HandleNavigationPathUpdated"));
    struct Params_HandleNavigationPathUpdated {
        TArray<FVector> NewPath; // 0x0
    }; // Size: 0x10
    Params_HandleNavigationPathUpdated params{};
    params.NewPath = (TArray<FVector>)NewPath;
    ProcessEvent(func, &params);
}
void UUDSIntentManager::HandleUDSFastTravelFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UDSIntentManager.HandleUDSFastTravelFinished"));
    struct Params_HandleUDSFastTravelFinished {
    }; // Size: 0x0
    Params_HandleUDSFastTravelFinished params{};
    ProcessEvent(func, &params);
}
UUDSIntentManager* UUDSIntentManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.UDSIntentManager");
    return (UUDSIntentManager*)res;
}
void UUDSIntentManager::HandleOnCurtainsRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UDSIntentManager.HandleOnCurtainsRaised"));
    struct Params_HandleOnCurtainsRaised {
    }; // Size: 0x0
    Params_HandleOnCurtainsRaised params{};
    ProcessEvent(func, &params);
}
void UUDSIntentManager::HandleMissionOnCurtainsRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.UDSIntentManager.HandleMissionOnCurtainsRaised"));
    struct Params_HandleMissionOnCurtainsRaised {
    }; // Size: 0x0
    Params_HandleMissionOnCurtainsRaised params{};
    ProcessEvent(func, &params);
}
