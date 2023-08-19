#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FDatabaseLockList.hpp"
#include "FMissionName.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
class USphereComponent;
class UBoxComponent;
class USceneComponent;
struct FHitResult;
class ASceneRigActor;
class UChildActorComponent;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_Wow_Player_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    USphereComponent* Wow_Loop_Sphere; // 0x250
    UBoxComponent* WOW_Loop_Trigger; // 0x258
    USphereComponent* Wow_Play_Sphere; // 0x260
    USphereComponent* Wow_Init_Sphere; // 0x268
    UBoxComponent* WOW_Play_Trigger; // 0x270
    UBoxComponent* WOW_Init_Trigger; // 0x278
    USceneComponent* DefaultSceneRoot; // 0x280
    bool Use_Sphere_Collision; // 0x288
    char pad_289[0x3];
    FDatabaseLockList Wow_Lock_Name; // 0x28c
    FDatabaseLockList Set_Wow_Unlock_Name; // 0x294
    char pad_29c[0x4];
    ASceneRigActor* Wow_Scene_Rig; // 0x2a0
    int32_t Set_Stat; // 0x2a8
    FMissionName Activate_after_mission; // 0x2ac
    FName LockId; // 0x2b4
    bool Use_Init_Volume_to_kill; // 0x2bc
    char pad_2bd[0x3];
    FDatabaseLockList WOW_Unlock_All; // 0x2c0
    static ABP_Wow_Player_C* StaticClass();
    void UserConstructionScript0(FTransform Temp_struct_Variable, UChildActorComponent* CallFunc_AddComponent_ReturnValue);
    void ReceiveBeginPlay0();
    void ReceiveEndPlay0(EEndPlayReason::Type EndPlayReason);
    void BndEvt__BP_Wow_Player_WOW_Load_Trigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__BP_Wow_Player_WOW_Play_Trigger_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__BP_Wow_Player_Wow_Load_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__BP_Wow_Player_Wow_Play_Sphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void CustomEvent_2();
    void BndEvt__BP_Wow_Player_WOW_Loop_Trigger_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__BP_Wow_Player_Wow_Loop_Sphere_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__BP_Wow_Player_Wow_Init_Sphere_K2Node_ComponentBoundEvent_6_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void BndEvt__BP_Wow_Player_WOW_Init_Trigger_K2Node_ComponentBoundEvent_7_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ExecuteUbergraph_BP_Wow_Player(int32_t EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_IsClosed_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_4, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool Temp_bool_IsClosed_Variable_5, bool Temp_bool_Has_Been_Initd_Variable_5, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_2, bool Temp_bool_IsClosed_Variable_6);
}; // Size: 0x2c8
#pragma pack(pop)
