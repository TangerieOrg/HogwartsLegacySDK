#include "ARace.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URaceManager.hpp"
ARace* URaceManager::GetRaceFromID(FString RaceId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RaceManager.GetRaceFromID"));
    struct Params_GetRaceFromID {
        FString RaceId; // 0x0
        ARace* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetRaceFromID params{};
    params.RaceId = (FString)RaceId;
    ProcessEvent(func, &params);
    return (ARace*)params.ReturnValue;
}
URaceManager* URaceManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RaceManager");
    return (URaceManager*)res;
}
URaceManager* URaceManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RaceManager.Get"));
    struct Params_Get {
        URaceManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (URaceManager*)params.ReturnValue;
}
ARace* URaceManager::StartRace(FString RaceName, bool bIsMission) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RaceManager.StartRace"));
    struct Params_StartRace {
        FString RaceName; // 0x0
        bool bIsMission; // 0x10
        char pad_11[0x7];
        ARace* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_StartRace params{};
    params.RaceName = (FString)RaceName;
    params.bIsMission = (bool)bIsMission;
    ProcessEvent(func, &params);
    return (ARace*)params.ReturnValue;
}
ARace* URaceManager::GetActiveRace() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RaceManager.GetActiveRace"));
    struct Params_GetActiveRace {
        ARace* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetActiveRace params{};
    ProcessEvent(func, &params);
    return (ARace*)params.ReturnValue;
}
