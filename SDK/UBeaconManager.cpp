#include "AActor.hpp"
#include "AMarker.hpp"
#include "EBeaconState.hpp"
#include "EBeaconType.hpp"
#include "FVector.hpp"
#include "UBeaconInfo.hpp"
#include "UBeaconManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UScheduledEntity.hpp"
UBeaconInfo* UBeaconManager::GetBeaconByHandleBP(int32_t ObjectHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.GetBeaconByHandleBP"));
    struct Params_GetBeaconByHandleBP {
        int32_t ObjectHandle; // 0x0
        char pad_4[0x4];
        UBeaconInfo* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetBeaconByHandleBP params{};
    params.ObjectHandle = (int32_t)ObjectHandle;
    ProcessEvent(func, &params);
    return (UBeaconInfo*)params.ReturnValue;
}
UBeaconManager* UBeaconManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BeaconManager");
    return (UBeaconManager*)res;
}
void UBeaconManager::RegisterDungeonEntrance(FString DungeonName, FVector Position, float ZRot, FVector BeaconPosition, int32_t EntranceIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.RegisterDungeonEntrance"));
    struct Params_RegisterDungeonEntrance {
        FString DungeonName; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
        FVector BeaconPosition; // 0x20
        int32_t EntranceIndex; // 0x2c
    }; // Size: 0x30
    Params_RegisterDungeonEntrance params{};
    params.DungeonName = (FString)DungeonName;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    params.BeaconPosition = (FVector)BeaconPosition;
    params.EntranceIndex = (int32_t)EntranceIndex;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UBeaconManager::UnRegisterBeaconByHandleBP(int64_t ObjectHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.UnRegisterBeaconByHandleBP"));
    struct Params_UnRegisterBeaconByHandleBP {
        int64_t ObjectHandle; // 0x0
    }; // Size: 0x8
    Params_UnRegisterBeaconByHandleBP params{};
    params.ObjectHandle = (int64_t)ObjectHandle;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UBeaconManager::UpdateExpansionTentPlayer(FVector teleportPosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.UpdateExpansionTentPlayer"));
    struct Params_UpdateExpansionTentPlayer {
        FVector teleportPosition; // 0x0
    }; // Size: 0xc
    Params_UpdateExpansionTentPlayer params{};
    params.teleportPosition = (FVector)teleportPosition;
    ProcessEvent(func, &params);
}
void UBeaconManager::SetBeaconStateByName(EBeaconType BeaconType, FString BeaconName, bool ActiveState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.SetBeaconStateByName"));
    struct Params_SetBeaconStateByName {
        EBeaconType BeaconType; // 0x0
        char pad_1[0x7];
        FString BeaconName; // 0x8
        bool ActiveState; // 0x18
    }; // Size: 0x19
    Params_SetBeaconStateByName params{};
    params.BeaconType = (EBeaconType)BeaconType;
    params.BeaconName = (FString)BeaconName;
    params.ActiveState = (bool)ActiveState;
    ProcessEvent(func, &params);
}
void UBeaconManager::SetBeaconStateBP(int32_t ObjectHandle, EBeaconState BeaconState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.SetBeaconStateBP"));
    struct Params_SetBeaconStateBP {
        int32_t ObjectHandle; // 0x0
        EBeaconState BeaconState; // 0x4
    }; // Size: 0x5
    Params_SetBeaconStateBP params{};
    params.ObjectHandle = (int32_t)ObjectHandle;
    params.BeaconState = (EBeaconState)BeaconState;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UBeaconManager::RegisterSanctuaryExit(FString SanctuaryWorldName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.RegisterSanctuaryExit"));
    struct Params_RegisterSanctuaryExit {
        FString SanctuaryWorldName; // 0x0
    }; // Size: 0x10
    Params_RegisterSanctuaryExit params{};
    params.SanctuaryWorldName = (FString)SanctuaryWorldName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UBeaconManager::SetBeaconRangesByHandle(int32_t ObjectHandle, int32_t InActivationDist, int32_t InEnterExitDist) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.SetBeaconRangesByHandle"));
    struct Params_SetBeaconRangesByHandle {
        int32_t ObjectHandle; // 0x0
        int32_t InActivationDist; // 0x4
        int32_t InEnterExitDist; // 0x8
    }; // Size: 0xc
    Params_SetBeaconRangesByHandle params{};
    params.ObjectHandle = (int32_t)ObjectHandle;
    params.InActivationDist = (int32_t)InActivationDist;
    params.InEnterExitDist = (int32_t)InEnterExitDist;
    ProcessEvent(func, &params);
}
int64_t UBeaconManager::RegisterStaticBeaconBP(EBeaconType BeaconType, FString BeaconName, FString BeaconIcon, FName& BeaconWorld, FVector BeaconPos, bool ShowOnHUD, bool ShowDistanceOnHud, FName BeaconableId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.RegisterStaticBeaconBP"));
    struct Params_RegisterStaticBeaconBP {
        EBeaconType BeaconType; // 0x0
        char pad_1[0x7];
        FString BeaconName; // 0x8
        FString BeaconIcon; // 0x18
        FName BeaconWorld; // 0x28
        FVector BeaconPos; // 0x30
        bool ShowOnHUD; // 0x3c
        bool ShowDistanceOnHud; // 0x3d
        char pad_3e[0x2];
        FName BeaconableId; // 0x40
        int64_t ReturnValue; // 0x48
    }; // Size: 0x50
    Params_RegisterStaticBeaconBP params{};
    params.BeaconType = (EBeaconType)BeaconType;
    params.BeaconName = (FString)BeaconName;
    params.BeaconIcon = (FString)BeaconIcon;
    params.BeaconWorld = (FName)BeaconWorld;
    params.BeaconPos = (FVector)BeaconPos;
    params.ShowOnHUD = (bool)ShowOnHUD;
    params.ShowDistanceOnHud = (bool)ShowDistanceOnHud;
    params.BeaconableId = (FName)BeaconableId;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BeaconWorld = params.BeaconWorld;
    return (int64_t)params.ReturnValue;
}
void UBeaconManager::RegisterExpansionTent(FString tentID, FVector Position, bool bIsEntrance) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.RegisterExpansionTent"));
    struct Params_RegisterExpansionTent {
        FString tentID; // 0x0
        FVector Position; // 0x10
        bool bIsEntrance; // 0x1c
    }; // Size: 0x1d
    Params_RegisterExpansionTent params{};
    params.tentID = (FString)tentID;
    params.Position = (FVector)Position;
    params.bIsEntrance = (bool)bIsEntrance;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int64_t UBeaconManager::RegisterDynamicBeaconScheduledEntityBP(EBeaconType BeaconType, FString BeaconName, FString BeaconIcon, FName& BeaconWorld, FVector BeaconPos, UScheduledEntity* NewBeaconScheduledEntity, bool ShowOnHUD, bool ShowDistanceOnHud) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.RegisterDynamicBeaconScheduledEntityBP"));
    struct Params_RegisterDynamicBeaconScheduledEntityBP {
        EBeaconType BeaconType; // 0x0
        char pad_1[0x7];
        FString BeaconName; // 0x8
        FString BeaconIcon; // 0x18
        FName BeaconWorld; // 0x28
        FVector BeaconPos; // 0x30
        char pad_3c[0x4];
        UScheduledEntity* NewBeaconScheduledEntity; // 0x40
        bool ShowOnHUD; // 0x48
        bool ShowDistanceOnHud; // 0x49
        char pad_4a[0x6];
        int64_t ReturnValue; // 0x50
    }; // Size: 0x58
    Params_RegisterDynamicBeaconScheduledEntityBP params{};
    params.BeaconType = (EBeaconType)BeaconType;
    params.BeaconName = (FString)BeaconName;
    params.BeaconIcon = (FString)BeaconIcon;
    params.BeaconWorld = (FName)BeaconWorld;
    params.BeaconPos = (FVector)BeaconPos;
    params.NewBeaconScheduledEntity = (UScheduledEntity*)NewBeaconScheduledEntity;
    params.ShowOnHUD = (bool)ShowOnHUD;
    params.ShowDistanceOnHud = (bool)ShowDistanceOnHud;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BeaconWorld = params.BeaconWorld;
    return (int64_t)params.ReturnValue;
}
int64_t UBeaconManager::RegisterDynamicBeaconObjectBP(EBeaconType BeaconType, FString BeaconName, FString BeaconIcon, FName& BeaconWorld, FVector BeaconPos, AActor* NewBeaconObject, bool ShowOnHUD, bool ShowDistanceOnHud) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.RegisterDynamicBeaconObjectBP"));
    struct Params_RegisterDynamicBeaconObjectBP {
        EBeaconType BeaconType; // 0x0
        char pad_1[0x7];
        FString BeaconName; // 0x8
        FString BeaconIcon; // 0x18
        FName BeaconWorld; // 0x28
        FVector BeaconPos; // 0x30
        char pad_3c[0x4];
        AActor* NewBeaconObject; // 0x40
        bool ShowOnHUD; // 0x48
        bool ShowDistanceOnHud; // 0x49
        char pad_4a[0x6];
        int64_t ReturnValue; // 0x50
    }; // Size: 0x58
    Params_RegisterDynamicBeaconObjectBP params{};
    params.BeaconType = (EBeaconType)BeaconType;
    params.BeaconName = (FString)BeaconName;
    params.BeaconIcon = (FString)BeaconIcon;
    params.BeaconWorld = (FName)BeaconWorld;
    params.BeaconPos = (FVector)BeaconPos;
    params.NewBeaconObject = (AActor*)NewBeaconObject;
    params.ShowOnHUD = (bool)ShowOnHUD;
    params.ShowDistanceOnHud = (bool)ShowDistanceOnHud;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    BeaconWorld = params.BeaconWorld;
    return (int64_t)params.ReturnValue;
}
void UBeaconManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UBeaconManager::RegisterDungeonExit(FVector Position, FName UID, bool Disable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.RegisterDungeonExit"));
    struct Params_RegisterDungeonExit {
        FVector Position; // 0x0
        FName UID; // 0xc
        bool Disable; // 0x14
    }; // Size: 0x15
    Params_RegisterDungeonExit params{};
    params.Position = (FVector)Position;
    params.UID = (FName)UID;
    params.Disable = (bool)Disable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UBeaconManager::OnRevelioEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.OnRevelioEnd"));
    struct Params_OnRevelioEnd {
    }; // Size: 0x0
    Params_OnRevelioEnd params{};
    ProcessEvent(func, &params);
}
void UBeaconManager::OnRevelioStart(float RevelioViewMeters) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.OnRevelioStart"));
    struct Params_OnRevelioStart {
        float RevelioViewMeters; // 0x0
    }; // Size: 0x4
    Params_OnRevelioStart params{};
    params.RevelioViewMeters = (float)RevelioViewMeters;
    ProcessEvent(func, &params);
}
void UBeaconManager::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
bool UBeaconManager::IsActorBeaconComplete(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.IsActorBeaconComplete"));
    struct Params_IsActorBeaconComplete {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsActorBeaconComplete params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AMarker* UBeaconManager::GetMarkerActor(AActor* InParentActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.GetMarkerActor"));
    struct Params_GetMarkerActor {
        AActor* InParentActor; // 0x0
        AMarker* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetMarkerActor params{};
    params.InParentActor = (AActor*)InParentActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AMarker*)params.ReturnValue;
}
void UBeaconManager::GetDungeonReqirementsByName(FString DungeonName, TArray<void*>& RequiredSpells, TArray<void*>& CompletionSpells) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.GetDungeonReqirementsByName"));
    struct Params_GetDungeonReqirementsByName {
        FString DungeonName; // 0x0
        TArray<void*> RequiredSpells; // 0x10
        TArray<void*> CompletionSpells; // 0x20
    }; // Size: 0x30
    Params_GetDungeonReqirementsByName params{};
    params.DungeonName = (FString)DungeonName;
    params.RequiredSpells = (TArray<void*>)RequiredSpells;
    params.CompletionSpells = (TArray<void*>)CompletionSpells;
    ProcessEvent(func, &params);
    RequiredSpells = params.RequiredSpells;
    CompletionSpells = params.CompletionSpells;
}
UBeaconManager* UBeaconManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BeaconManager.Get"));
    struct Params_Get {
        UBeaconManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UBeaconManager*)params.ReturnValue;
}
