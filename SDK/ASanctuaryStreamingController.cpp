#include "AActor.hpp"
#include "ASanctuaryStreamingController.hpp"
#include "FSanctuaryStreamingIslandDefinition.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void ASanctuaryStreamingController::OnUpdateStreamingState() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.OnUpdateStreamingState"));
    struct Params_OnUpdateStreamingState {
    }; // Size: 0x0
    Params_OnUpdateStreamingState params{};
    ProcessEvent(func, &params);
}
ASanctuaryStreamingController* ASanctuaryStreamingController::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryStreamingController");
    return (ASanctuaryStreamingController*)res;
}
void ASanctuaryStreamingController::SetActiveIslandFromZone(FName InZoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.SetActiveIslandFromZone"));
    struct Params_SetActiveIslandFromZone {
        FName InZoneName; // 0x0
    }; // Size: 0x8
    Params_SetActiveIslandFromZone params{};
    params.InZoneName = (FName)InZoneName;
    ProcessEvent(func, &params);
}
void ASanctuaryStreamingController::UnlockLockForZone(FName ZoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.UnlockLockForZone"));
    struct Params_UnlockLockForZone {
        FName ZoneName; // 0x0
    }; // Size: 0x8
    Params_UnlockLockForZone params{};
    params.ZoneName = (FName)ZoneName;
    ProcessEvent(func, &params);
}
void ASanctuaryStreamingController::UnloadZoneExplicitly(FName ZoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.UnloadZoneExplicitly"));
    struct Params_UnloadZoneExplicitly {
        FName ZoneName; // 0x0
    }; // Size: 0x8
    Params_UnloadZoneExplicitly params{};
    params.ZoneName = (FName)ZoneName;
    ProcessEvent(func, &params);
}
void ASanctuaryStreamingController::SetActiveIsland(FName InActiveIsland) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.SetActiveIsland"));
    struct Params_SetActiveIsland {
        FName InActiveIsland; // 0x0
    }; // Size: 0x8
    Params_SetActiveIsland params{};
    params.InActiveIsland = (FName)InActiveIsland;
    ProcessEvent(func, &params);
}
void ASanctuaryStreamingController::RequestZoneReadyToEnter(UObject* WorldContextObject, FName ZoneName) {}
void ASanctuaryStreamingController::RequestZoneLoad(FName ZoneName, bool bMakeVisible, bool bIgnoreLock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.RequestZoneLoad"));
    struct Params_RequestZoneLoad {
        FName ZoneName; // 0x0
        bool bMakeVisible; // 0x8
        bool bIgnoreLock; // 0x9
    }; // Size: 0xa
    Params_RequestZoneLoad params{};
    params.ZoneName = (FName)ZoneName;
    params.bMakeVisible = (bool)bMakeVisible;
    params.bIgnoreLock = (bool)bIgnoreLock;
    ProcessEvent(func, &params);
}
void ASanctuaryStreamingController::MakeZoneVisible(FName ZoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.MakeZoneVisible"));
    struct Params_MakeZoneVisible {
        FName ZoneName; // 0x0
    }; // Size: 0x8
    Params_MakeZoneVisible params{};
    params.ZoneName = (FName)ZoneName;
    ProcessEvent(func, &params);
}
bool ASanctuaryStreamingController::IsZoneUnlocked(FName ZoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.IsZoneUnlocked"));
    struct Params_IsZoneUnlocked {
        FName ZoneName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsZoneUnlocked params{};
    params.ZoneName = (FName)ZoneName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ASanctuaryStreamingController::IsZoneReadyToEnter(FName ZoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.IsZoneReadyToEnter"));
    struct Params_IsZoneReadyToEnter {
        FName ZoneName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsZoneReadyToEnter params{};
    params.ZoneName = (FName)ZoneName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ASanctuaryStreamingController::IsZoneMinimumLoadVisible(FName ZoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.IsZoneMinimumLoadVisible"));
    struct Params_IsZoneMinimumLoadVisible {
        FName ZoneName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsZoneMinimumLoadVisible params{};
    params.ZoneName = (FName)ZoneName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ASanctuaryStreamingController::IsZoneMinimumLoadComplete(FName ZoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.IsZoneMinimumLoadComplete"));
    struct Params_IsZoneMinimumLoadComplete {
        FName ZoneName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsZoneMinimumLoadComplete params{};
    params.ZoneName = (FName)ZoneName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ASanctuaryStreamingController::IsZoneCompletelyVisible(FName ZoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.IsZoneCompletelyVisible"));
    struct Params_IsZoneCompletelyVisible {
        FName ZoneName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsZoneCompletelyVisible params{};
    params.ZoneName = (FName)ZoneName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASanctuaryStreamingController::HideParallelLevelsInInactiveIslands() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.HideParallelLevelsInInactiveIslands"));
    struct Params_HideParallelLevelsInInactiveIslands {
    }; // Size: 0x0
    Params_HideParallelLevelsInInactiveIslands params{};
    ProcessEvent(func, &params);
}
FName ASanctuaryStreamingController::GetIslandForZone(FName InZoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.GetIslandForZone"));
    struct Params_GetIslandForZone {
        FName InZoneName; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetIslandForZone params{};
    params.InZoneName = (FName)InZoneName;
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
ASanctuaryStreamingController* ASanctuaryStreamingController::Get(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.Get"));
    struct Params_Get {
        UObject* WorldContextObject; // 0x0
        ASanctuaryStreamingController* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Get params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (ASanctuaryStreamingController*)params.ReturnValue;
}
bool ASanctuaryStreamingController::DoesZoneExist(FName ZoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.DoesZoneExist"));
    struct Params_DoesZoneExist {
        FName ZoneName; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DoesZoneExist params{};
    params.ZoneName = (FName)ZoneName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ASanctuaryStreamingController::BlockingMinimalZoneLoad(FName ZoneName, bool bMakeVisible) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SanctuaryStreamingController.BlockingMinimalZoneLoad"));
    struct Params_BlockingMinimalZoneLoad {
        FName ZoneName; // 0x0
        bool bMakeVisible; // 0x8
    }; // Size: 0x9
    Params_BlockingMinimalZoneLoad params{};
    params.ZoneName = (FName)ZoneName;
    params.bMakeVisible = (bool)bMakeVisible;
    ProcessEvent(func, &params);
}
