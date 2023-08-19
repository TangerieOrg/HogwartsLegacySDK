#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EBroomEnemyState\Type.hpp"
#include "EGenderEnum.hpp"
#include "EHoboType.hpp"
#include "FSpawnedStudent.hpp"
#include "HouseIds.hpp"
class USplineComponent;
class UFlyingBroomPhysics_Spline;
class AFlyingBroom;
class UClass;
class UScheduledEntity;
class AEnemyBroomRider_AiController;
#pragma pack(push, 1)
class ABroomRiderSpawner : public AActor {
public:
    USplineComponent* BroomSpline; // 0x248
    UFlyingBroomPhysics_Spline* FlyingBroomPhysics; // 0x250
    char pad_258[0x10];
    TArray<AFlyingBroom*> SpawnedBrooms; // 0x268
    TArray<FSpawnedStudent> SpawnedBroomStudents; // 0x278
    char pad_288[0x8];
    static ABroomRiderSpawner* StaticClass();
    void ScheduledEntityLoaded__DelegateSignature(UScheduledEntity* ScheduledEntity, AFlyingBroom* FlyingBroom, AEnemyBroomRider_AiController* BroomRiderAIController);
    bool RequestBroomNPC(EHoboType HoboType, HouseIds InHouse, EGenderEnum InGender, TArray<FString>& ValidVoiceIDs, UClass* FlyingBroom, EBroomEnemyState::Type StudentAISpawnState, float MaxSpeed);
    void OnFleshLoadComplete(AActor* ScheduledEntityActor);
    void DestroyAllRiders();
}; // Size: 0x290
#pragma pack(pop)
