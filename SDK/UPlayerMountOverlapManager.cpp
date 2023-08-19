#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPlayerMountOverlapManager.hpp"
bool UPlayerMountOverlapManager::CanSpeedUp() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerMountOverlapManager.CanSpeedUp"));
    struct Params_CanSpeedUp {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanSpeedUp params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPlayerMountOverlapManager::GetInNoMountZone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerMountOverlapManager.GetInNoMountZone"));
    struct Params_GetInNoMountZone {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetInNoMountZone params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UPlayerMountOverlapManager* UPlayerMountOverlapManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PlayerMountOverlapManager");
    return (UPlayerMountOverlapManager*)res;
}
bool UPlayerMountOverlapManager::IsInsideFacingEntry(bool bDraw) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerMountOverlapManager.IsInsideFacingEntry"));
    struct Params_IsInsideFacingEntry {
        bool bDraw; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsInsideFacingEntry params{};
    params.bDraw = (bool)bDraw;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UPlayerMountOverlapManager::GetTimeInNoMountZone(float& Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerMountOverlapManager.GetTimeInNoMountZone"));
    struct Params_GetTimeInNoMountZone {
        float Time; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetTimeInNoMountZone params{};
    params.Time = (float)Time;
    ProcessEvent(func, &params);
    Time = params.Time;
    return (bool)params.ReturnValue;
}
UPlayerMountOverlapManager* UPlayerMountOverlapManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PlayerMountOverlapManager.Get"));
    struct Params_Get {
        UPlayerMountOverlapManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPlayerMountOverlapManager*)params.ReturnValue;
}
