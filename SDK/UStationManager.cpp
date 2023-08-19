#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UStationComponent.hpp"
#include "UStationManager.hpp"
UStationComponent* UStationManager::GetClosestPlayerBed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationManager.GetClosestPlayerBed"));
    struct Params_GetClosestPlayerBed {
        UStationComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetClosestPlayerBed params{};
    ProcessEvent(func, &params);
    return (UStationComponent*)params.ReturnValue;
}
bool UStationManager::IsPlayerInWorld(FName& InWorldName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationManager.IsPlayerInWorld"));
    struct Params_IsPlayerInWorld {
        FName InWorldName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsPlayerInWorld params{};
    params.InWorldName = (FName)InWorldName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InWorldName = params.InWorldName;
    return (bool)params.ReturnValue;
}
UStationManager* UStationManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StationManager");
    return (UStationManager*)res;
}
UStationManager* UStationManager::GetStationManager() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationManager.GetStationManager"));
    struct Params_GetStationManager {
        UStationManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetStationManager params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UStationManager*)params.ReturnValue;
}
bool UStationManager::FindSiteLocation(FString InSiteName, FVector& Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationManager.FindSiteLocation"));
    struct Params_FindSiteLocation {
        FString InSiteName; // 0x0
        FVector Location; // 0x10
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_FindSiteLocation params{};
    params.InSiteName = (FString)InSiteName;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    Location = params.Location;
    return (bool)params.ReturnValue;
}
bool UStationManager::FindBedSiteLocation(FString InSiteName, FVector& Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StationManager.FindBedSiteLocation"));
    struct Params_FindBedSiteLocation {
        FString InSiteName; // 0x0
        FVector Location; // 0x10
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_FindBedSiteLocation params{};
    params.InSiteName = (FString)InSiteName;
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    Location = params.Location;
    return (bool)params.ReturnValue;
}
