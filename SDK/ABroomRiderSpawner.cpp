#include "AActor.hpp"
#include "ABroomRiderSpawner.hpp"
#include "AEnemyBroomRider_AiController.hpp"
#include "AFlyingBroom.hpp"
#include "EBroomEnemyState\Type.hpp"
#include "EGenderEnum.hpp"
#include "EHoboType.hpp"
#include "FSpawnedStudent.hpp"
#include "HouseIds.hpp"
#include "UClass.hpp"
#include "UFlyingBroomPhysics_Spline.hpp"
#include "UFunction.hpp"
#include "UScheduledEntity.hpp"
#include "USplineComponent.hpp"
ABroomRiderSpawner* ABroomRiderSpawner::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BroomRiderSpawner");
    return (ABroomRiderSpawner*)res;
}
void ABroomRiderSpawner::ScheduledEntityLoaded__DelegateSignature(UScheduledEntity* ScheduledEntity, AFlyingBroom* FlyingBroom, AEnemyBroomRider_AiController* BroomRiderAIController) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.BroomRiderSpawner.ScheduledEntityLoaded__DelegateSignature"));
    struct Params_ScheduledEntityLoaded__DelegateSignature {
        UScheduledEntity* ScheduledEntity; // 0x0
        AFlyingBroom* FlyingBroom; // 0x8
        AEnemyBroomRider_AiController* BroomRiderAIController; // 0x10
    }; // Size: 0x18
    Params_ScheduledEntityLoaded__DelegateSignature params{};
    params.ScheduledEntity = (UScheduledEntity*)ScheduledEntity;
    params.FlyingBroom = (AFlyingBroom*)FlyingBroom;
    params.BroomRiderAIController = (AEnemyBroomRider_AiController*)BroomRiderAIController;
    ProcessEvent(func, &params);
}
bool ABroomRiderSpawner::RequestBroomNPC(EHoboType HoboType, HouseIds InHouse, EGenderEnum InGender, TArray<FString>& ValidVoiceIDs, UClass* FlyingBroom, EBroomEnemyState::Type StudentAISpawnState, float MaxSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomRiderSpawner.RequestBroomNPC"));
    struct Params_RequestBroomNPC {
        EHoboType HoboType; // 0x0
        HouseIds InHouse; // 0x1
        EGenderEnum InGender; // 0x2
        char pad_3[0x5];
        TArray<FString> ValidVoiceIDs; // 0x8
        UClass* FlyingBroom; // 0x18
        EBroomEnemyState::Type StudentAISpawnState; // 0x20
        char pad_21[0x3];
        float MaxSpeed; // 0x24
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_RequestBroomNPC params{};
    params.HoboType = (EHoboType)HoboType;
    params.InHouse = (HouseIds)InHouse;
    params.InGender = (EGenderEnum)InGender;
    params.ValidVoiceIDs = (TArray<FString>)ValidVoiceIDs;
    params.FlyingBroom = (UClass*)FlyingBroom;
    params.StudentAISpawnState = (EBroomEnemyState::Type)StudentAISpawnState;
    params.MaxSpeed = (float)MaxSpeed;
    ProcessEvent(func, &params);
    ValidVoiceIDs = params.ValidVoiceIDs;
    return (bool)params.ReturnValue;
}
void ABroomRiderSpawner::OnFleshLoadComplete(AActor* ScheduledEntityActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomRiderSpawner.OnFleshLoadComplete"));
    struct Params_OnFleshLoadComplete {
        AActor* ScheduledEntityActor; // 0x0
    }; // Size: 0x8
    Params_OnFleshLoadComplete params{};
    params.ScheduledEntityActor = (AActor*)ScheduledEntityActor;
    ProcessEvent(func, &params);
}
void ABroomRiderSpawner::DestroyAllRiders() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BroomRiderSpawner.DestroyAllRiders"));
    struct Params_DestroyAllRiders {
    }; // Size: 0x0
    Params_DestroyAllRiders params{};
    ProcessEvent(func, &params);
}
