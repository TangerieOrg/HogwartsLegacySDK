#include "AActor.hpp"
#include "ABase_Character.hpp"
#include "ANPC_Character.hpp"
#include "AWorldEventActor.hpp"
#include "AWorldEventLocationActor.hpp"
#include "EGenderEnum.hpp"
#include "EHoboType.hpp"
#include "FHitResult.hpp"
#include "FLootSlot.hpp"
#include "FVector.hpp"
#include "HouseIds.hpp"
#include "UAnimationArchitectAsset.hpp"
#include "UAnimationArchitectComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "UScheduledEntity.hpp"
#include "UWorldEventCondition.hpp"
#include "UWorldEventSocketComponent.hpp"
void AWorldEventActor::OnStartTriggerOverlapped(UWorldEventSocketComponent* Socket) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.OnStartTriggerOverlapped"));
    struct Params_OnStartTriggerOverlapped {
        UWorldEventSocketComponent* Socket; // 0x0
    }; // Size: 0x8
    Params_OnStartTriggerOverlapped params{};
    params.Socket = (UWorldEventSocketComponent*)Socket;
    ProcessEvent(func, &params);
}
AWorldEventActor* AWorldEventActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventActor");
    return (AWorldEventActor*)res;
}
UScheduledEntity* AWorldEventActor::RequestCustomHobo(FString HoboName, FVector& InLocation, bool InIsMale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.RequestCustomHobo"));
    struct Params_RequestCustomHobo {
        FString HoboName; // 0x0
        FVector InLocation; // 0x10
        bool InIsMale; // 0x1c
        char pad_1d[0x3];
        UScheduledEntity* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_RequestCustomHobo params{};
    params.HoboName = (FString)HoboName;
    params.InLocation = (FVector)InLocation;
    params.InIsMale = (bool)InIsMale;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    return (UScheduledEntity*)params.ReturnValue;
}
void AWorldEventActor::HitResult(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.HitResult"));
    struct Params_HitResult {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_HitResult params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
bool AWorldEventActor::SetTemporaryAnimationOnCharacter(ANPC_Character* Character, int32_t AnimationIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.SetTemporaryAnimationOnCharacter"));
    struct Params_SetTemporaryAnimationOnCharacter {
        ANPC_Character* Character; // 0x0
        int32_t AnimationIndex; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_SetTemporaryAnimationOnCharacter params{};
    params.Character = (ANPC_Character*)Character;
    params.AnimationIndex = (int32_t)AnimationIndex;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AWorldEventActor::RemoveDynamicActivityFromSE(UScheduledEntity* ScheduledEntity, FString ActivityID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.RemoveDynamicActivityFromSE"));
    struct Params_RemoveDynamicActivityFromSE {
        UScheduledEntity* ScheduledEntity; // 0x0
        FString ActivityID; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_RemoveDynamicActivityFromSE params{};
    params.ScheduledEntity = (UScheduledEntity*)ScheduledEntity;
    params.ActivityID = (FString)ActivityID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AWorldEventActor::SetSpecificAnimationOnCharacter(ANPC_Character* Character, UAnimationArchitectAsset* AnimationArchitectAsset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.SetSpecificAnimationOnCharacter"));
    struct Params_SetSpecificAnimationOnCharacter {
        ANPC_Character* Character; // 0x0
        UAnimationArchitectAsset* AnimationArchitectAsset; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_SetSpecificAnimationOnCharacter params{};
    params.Character = (ANPC_Character*)Character;
    params.AnimationArchitectAsset = (UAnimationArchitectAsset*)AnimationArchitectAsset;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UScheduledEntity* AWorldEventActor::RequestHobo(FVector& InLocation, EHoboType HoboType, HouseIds InHouse, EGenderEnum InGender, TArray<FString>& ValidVoiceIDs) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.RequestHobo"));
    struct Params_RequestHobo {
        FVector InLocation; // 0x0
        EHoboType HoboType; // 0xc
        HouseIds InHouse; // 0xd
        EGenderEnum InGender; // 0xe
        char pad_f[0x1];
        TArray<FString> ValidVoiceIDs; // 0x10
        UScheduledEntity* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_RequestHobo params{};
    params.InLocation = (FVector)InLocation;
    params.HoboType = (EHoboType)HoboType;
    params.InHouse = (HouseIds)InHouse;
    params.InGender = (EGenderEnum)InGender;
    params.ValidVoiceIDs = (TArray<FString>)ValidVoiceIDs;
    ProcessEvent(func, &params);
    InLocation = params.InLocation;
    ValidVoiceIDs = params.ValidVoiceIDs;
    return (UScheduledEntity*)params.ReturnValue;
}
bool AWorldEventActor::ReleaseTemporaryAnimationFromCharacter(ANPC_Character* Character) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.ReleaseTemporaryAnimationFromCharacter"));
    struct Params_ReleaseTemporaryAnimationFromCharacter {
        ANPC_Character* Character; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ReleaseTemporaryAnimationFromCharacter params{};
    params.Character = (ANPC_Character*)Character;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
HouseIds AWorldEventActor::GetLocationBasedStudentHouse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.GetLocationBasedStudentHouse"));
    struct Params_GetLocationBasedStudentHouse {
        HouseIds ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLocationBasedStudentHouse params{};
    ProcessEvent(func, &params);
    return (HouseIds)params.ReturnValue;
}
void AWorldEventActor::ReleaseHobo(UScheduledEntity* InScheduledEntity, bool InDestroyImmediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.ReleaseHobo"));
    struct Params_ReleaseHobo {
        UScheduledEntity* InScheduledEntity; // 0x0
        bool InDestroyImmediate; // 0x8
    }; // Size: 0x9
    Params_ReleaseHobo params{};
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    params.InDestroyImmediate = (bool)InDestroyImmediate;
    ProcessEvent(func, &params);
}
void AWorldEventActor::ReleaseAllHobos(bool InDestroyImmediate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.ReleaseAllHobos"));
    struct Params_ReleaseAllHobos {
        bool InDestroyImmediate; // 0x0
    }; // Size: 0x1
    Params_ReleaseAllHobos params{};
    params.InDestroyImmediate = (bool)InDestroyImmediate;
    ProcessEvent(func, &params);
}
bool AWorldEventActor::FindStudentOnFreeTime(FVector& InLocation, float InRadius, bool InAllowFindHobos, ABase_Character*& OutActor, UScheduledEntity*& OutScheduledEntity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.FindStudentOnFreeTime"));
    struct Params_FindStudentOnFreeTime {
        FVector InLocation; // 0x0
        float InRadius; // 0xc
        bool InAllowFindHobos; // 0x10
        char pad_11[0x7];
        ABase_Character* OutActor; // 0x18
        UScheduledEntity* OutScheduledEntity; // 0x20
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_FindStudentOnFreeTime params{};
    params.InLocation = (FVector)InLocation;
    params.InRadius = (float)InRadius;
    params.InAllowFindHobos = (bool)InAllowFindHobos;
    params.OutActor = (ABase_Character*)OutActor;
    params.OutScheduledEntity = (UScheduledEntity*)OutScheduledEntity;
    ProcessEvent(func, &params);
    OutScheduledEntity = params.OutScheduledEntity;
    InLocation = params.InLocation;
    OutActor = params.OutActor;
    return (bool)params.ReturnValue;
}
void AWorldEventActor::PlayGhostStory(UScheduledEntity* InScheduledEntity, FName Story, FName Emotion) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.PlayGhostStory"));
    struct Params_PlayGhostStory {
        UScheduledEntity* InScheduledEntity; // 0x0
        FName Story; // 0x8
        FName Emotion; // 0x10
    }; // Size: 0x18
    Params_PlayGhostStory params{};
    params.InScheduledEntity = (UScheduledEntity*)InScheduledEntity;
    params.Story = (FName)Story;
    params.Emotion = (FName)Emotion;
    ProcessEvent(func, &params);
}
void AWorldEventActor::OnNoStartTriggerFound() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.OnNoStartTriggerFound"));
    struct Params_OnNoStartTriggerFound {
    }; // Size: 0x0
    Params_OnNoStartTriggerFound params{};
    ProcessEvent(func, &params);
}
int32_t AWorldEventActor::GetNextUncompleteStage() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.GetNextUncompleteStage"));
    struct Params_GetNextUncompleteStage {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNextUncompleteStage params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void AWorldEventActor::MarkStageAsIncomplete(int32_t Stage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.MarkStageAsIncomplete"));
    struct Params_MarkStageAsIncomplete {
        int32_t Stage; // 0x0
    }; // Size: 0x4
    Params_MarkStageAsIncomplete params{};
    params.Stage = (int32_t)Stage;
    ProcessEvent(func, &params);
}
void AWorldEventActor::MarkStageAsCompleted(int32_t Stage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.MarkStageAsCompleted"));
    struct Params_MarkStageAsCompleted {
        int32_t Stage; // 0x0
    }; // Size: 0x4
    Params_MarkStageAsCompleted params{};
    params.Stage = (int32_t)Stage;
    ProcessEvent(func, &params);
}
bool AWorldEventActor::IsStageCompleted(int32_t Stage) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.IsStageCompleted"));
    struct Params_IsStageCompleted {
        int32_t Stage; // 0x0
        bool ReturnValue; // 0x4
    }; // Size: 0x5
    Params_IsStageCompleted params{};
    params.Stage = (int32_t)Stage;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool AWorldEventActor::InsertDynamicActivityOnSE(UScheduledEntity* ScheduledEntity, FString ActivityID, FString LocationID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.InsertDynamicActivityOnSE"));
    struct Params_InsertDynamicActivityOnSE {
        UScheduledEntity* ScheduledEntity; // 0x0
        FString ActivityID; // 0x8
        FString LocationID; // 0x18
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_InsertDynamicActivityOnSE params{};
    params.ScheduledEntity = (UScheduledEntity*)ScheduledEntity;
    params.ActivityID = (FString)ActivityID;
    params.LocationID = (FString)LocationID;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AWorldEventLocationActor* AWorldEventActor::GetWorldEventLocatorActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.GetWorldEventLocatorActor"));
    struct Params_GetWorldEventLocatorActor {
        AWorldEventLocationActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWorldEventLocatorActor params{};
    ProcessEvent(func, &params);
    return (AWorldEventLocationActor*)params.ReturnValue;
}
TArray<FLootSlot> AWorldEventActor::GetRandomLoot(FString Category) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.GetRandomLoot"));
    struct Params_GetRandomLoot {
        FString Category; // 0x0
        TArray<FLootSlot> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_GetRandomLoot params{};
    params.Category = (FString)Category;
    ProcessEvent(func, &params);
    return (TArray<FLootSlot>)params.ReturnValue;
}
int32_t AWorldEventActor::GetNumOfWorldEventHobos() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.GetNumOfWorldEventHobos"));
    struct Params_GetNumOfWorldEventHobos {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumOfWorldEventHobos params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void AWorldEventActor::EnableConversationSense(UScheduledEntity* SE, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.EnableConversationSense"));
    struct Params_EnableConversationSense {
        UScheduledEntity* SE; // 0x0
        bool bEnable; // 0x8
    }; // Size: 0x9
    Params_EnableConversationSense params{};
    params.SE = (UScheduledEntity*)SE;
    params.bEnable = (bool)bEnable;
    ProcessEvent(func, &params);
}
void AWorldEventActor::EnableChildActorComponent(UChildActorComponent* ChildActorComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.EnableChildActorComponent"));
    struct Params_EnableChildActorComponent {
        UChildActorComponent* ChildActorComponent; // 0x0
    }; // Size: 0x8
    Params_EnableChildActorComponent params{};
    params.ChildActorComponent = (UChildActorComponent*)ChildActorComponent;
    ProcessEvent(func, &params);
}
void AWorldEventActor::EnableCharacter(ABase_Character* Character) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.EnableCharacter"));
    struct Params_EnableCharacter {
        ABase_Character* Character; // 0x0
    }; // Size: 0x8
    Params_EnableCharacter params{};
    params.Character = (ABase_Character*)Character;
    ProcessEvent(func, &params);
}
void AWorldEventActor::DisableChildActorComponent(UChildActorComponent* ChildActorComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.DisableChildActorComponent"));
    struct Params_DisableChildActorComponent {
        UChildActorComponent* ChildActorComponent; // 0x0
    }; // Size: 0x8
    Params_DisableChildActorComponent params{};
    params.ChildActorComponent = (UChildActorComponent*)ChildActorComponent;
    ProcessEvent(func, &params);
}
void AWorldEventActor::DisableCharacter(ABase_Character* Character) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.DisableCharacter"));
    struct Params_DisableCharacter {
        ABase_Character* Character; // 0x0
    }; // Size: 0x8
    Params_DisableCharacter params{};
    params.Character = (ABase_Character*)Character;
    ProcessEvent(func, &params);
}
bool AWorldEventActor::CheckCondition(UWorldEventCondition* Conditon) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventActor.CheckCondition"));
    struct Params_CheckCondition {
        UWorldEventCondition* Conditon; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_CheckCondition params{};
    params.Conditon = (UWorldEventCondition*)Conditon;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
