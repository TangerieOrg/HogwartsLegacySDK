#include "AActor.hpp"
#include "ABase_Character.hpp"
#include "ACooldownPickup.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FObjectStateCollisionPair.hpp"
#include "FTransform.hpp"
#include "UCharacterStateInfo.hpp"
#include "UContextFilterComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UObjectStateInfo.hpp"
#include "UObjectStateManager.hpp"
#include "UReparoData.hpp"
#include "UUnloadLevelTracker.hpp"
#include "UWorld.hpp"
UObjectStateManager* UObjectStateManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ObjectStateManager");
    return (UObjectStateManager*)res;
}
void UObjectStateManager::UpdateOriginalInfo(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.UpdateOriginalInfo"));
    struct Params_UpdateOriginalInfo {
        AActor* InActor; // 0x0
    }; // Size: 0x8
    Params_UpdateOriginalInfo params{};
    params.InActor = (AActor*)InActor;
    ProcessEvent(func, &params);
}
void UObjectStateManager::OnActorEndPlay(AActor* DestroyedActor, EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.OnActorEndPlay"));
    struct Params_OnActorEndPlay {
        AActor* DestroyedActor; // 0x0
        EEndPlayReason::Type EndPlayReason; // 0x8
    }; // Size: 0x9
    Params_OnActorEndPlay params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void UObjectStateManager::SetOriginalTransform(AActor* InActor, FTransform InTransform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.SetOriginalTransform"));
    struct Params_SetOriginalTransform {
        AActor* InActor; // 0x0
        char pad_8[0x8];
        FTransform InTransform; // 0x10
    }; // Size: 0x40
    Params_SetOriginalTransform params{};
    params.InActor = (AActor*)InActor;
    params.InTransform = (FTransform)InTransform;
    ProcessEvent(func, &params);
}
void UObjectStateManager::HighlightActorWithRevelio(AActor* InActor, bool bHighlight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.HighlightActorWithRevelio"));
    struct Params_HighlightActorWithRevelio {
        AActor* InActor; // 0x0
        bool bHighlight; // 0x8
    }; // Size: 0x9
    Params_HighlightActorWithRevelio params{};
    params.InActor = (AActor*)InActor;
    params.bHighlight = (bool)bHighlight;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UObjectStateManager::IsRevelioActor(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.IsRevelioActor"));
    struct Params_IsRevelioActor {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsRevelioActor params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UObjectStateManager* UObjectStateManager::GetObjectStateManager(UObject* WorldContext) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.GetObjectStateManager"));
    struct Params_GetObjectStateManager {
        UObject* WorldContext; // 0x0
        UObjectStateManager* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetObjectStateManager params{};
    params.WorldContext = (UObject*)WorldContext;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UObjectStateManager*)params.ReturnValue;
}
UObjectStateInfo* UObjectStateManager::GetObjectStateInfo(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.GetObjectStateInfo"));
    struct Params_GetObjectStateInfo {
        AActor* InActor; // 0x0
        UObjectStateInfo* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetObjectStateInfo params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UObjectStateInfo*)params.ReturnValue;
}
int32_t UObjectStateManager::GetDbUniqueId(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.GetDbUniqueId"));
    struct Params_GetDbUniqueId {
        AActor* InActor; // 0x0
        int32_t ReturnValue; // 0x8
    }; // Size: 0xc
    Params_GetDbUniqueId params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FName UObjectStateManager::GetDbSubType(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.GetDbSubType"));
    struct Params_GetDbSubType {
        AActor* InActor; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetDbSubType params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UObjectStateManager::GetDbId(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.GetDbId"));
    struct Params_GetDbId {
        AActor* InActor; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetDbId params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UObjectStateManager::GetDbClassId(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.GetDbClassId"));
    struct Params_GetDbClassId {
        AActor* InActor; // 0x0
        FName ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetDbClassId params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
UCharacterStateInfo* UObjectStateManager::GetCharacterStateInfo(ABase_Character* InCharacter) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.GetCharacterStateInfo"));
    struct Params_GetCharacterStateInfo {
        ABase_Character* InCharacter; // 0x0
        UCharacterStateInfo* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetCharacterStateInfo params{};
    params.InCharacter = (ABase_Character*)InCharacter;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UCharacterStateInfo*)params.ReturnValue;
}
UObjectStateManager* UObjectStateManager::Get(UWorld* World) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.Get"));
    struct Params_Get {
        UWorld* World; // 0x0
        UObjectStateManager* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_Get params{};
    params.World = (UWorld*)World;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UObjectStateManager*)params.ReturnValue;
}
void UObjectStateManager::EnableCcdForXSeconds(AActor* InActor, float Time) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.EnableCcdForXSeconds"));
    struct Params_EnableCcdForXSeconds {
        AActor* InActor; // 0x0
        float Time; // 0x8
    }; // Size: 0xc
    Params_EnableCcdForXSeconds params{};
    params.InActor = (AActor*)InActor;
    params.Time = (float)Time;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UObjectStateManager::EnableCcd(AActor* InActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.EnableCcd"));
    struct Params_EnableCcd {
        AActor* InActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_EnableCcd params{};
    params.InActor = (AActor*)InActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UObjectStateManager::EnableAutoRepair(UObject* InObject, float MinRepairDelay, float MaxRepairDelay, UReparoData* ReparoDataOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.EnableAutoRepair"));
    struct Params_EnableAutoRepair {
        UObject* InObject; // 0x0
        float MinRepairDelay; // 0x8
        float MaxRepairDelay; // 0xc
        UReparoData* ReparoDataOverride; // 0x10
    }; // Size: 0x18
    Params_EnableAutoRepair params{};
    params.InObject = (UObject*)InObject;
    params.MinRepairDelay = (float)MinRepairDelay;
    params.MaxRepairDelay = (float)MaxRepairDelay;
    params.ReparoDataOverride = (UReparoData*)ReparoDataOverride;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UObjectStateManager::DisableAutoRepair(UObject* InObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateManager.DisableAutoRepair"));
    struct Params_DisableAutoRepair {
        UObject* InObject; // 0x0
    }; // Size: 0x8
    Params_DisableAutoRepair params{};
    params.InObject = (UObject*)InObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
