#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "ETimelineDirection\Type.hpp"
#include "E_DoorState\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FStatList.hpp"
class UStaticMeshComponent;
class UAkComponent;
class USphereComponent;
class UObjectStateComponent;
class USceneComponent;
struct FHitResult;
class UTimelineComponent;
class UPrimitiveComponent;
class UObjectStateInfo;
#pragma pack(push, 1)
class ABP_DungeonEntrance_HM_Cart_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UAkComponent* Ak_BP_DungeonEntrance_HM_Cart; // 0x250
    USphereComponent* SphereTrigger; // 0x258
    UStaticMeshComponent* SM_HM_Dungeon_Cart_Door_Left; // 0x260
    UStaticMeshComponent* SM_HM_Dungeon_Cart_Door_Right; // 0x268
    UObjectStateComponent* ObjectState; // 0x270
    USceneComponent* DefaultSceneRoot; // 0x278
    float Timeline_1_NewTrack_0_F718E51E4F5C3745273A4E827500B50E; // 0x280
    ETimelineDirection::Type Timeline_1__Direction_F718E51E4F5C3745273A4E827500B50E; // 0x284
    char pad_285[0x3];
    UTimelineComponent* Timeline_1; // 0x288
    float Timeline_0_Alpha_B4766D9B4033D7BCE70D1FB80FDD10A5; // 0x290
    ETimelineDirection::Type Timeline_0__Direction_B4766D9B4033D7BCE70D1FB80FDD10A5; // 0x294
    char pad_295[0x3];
    UTimelineComponent* Timeline_0; // 0x298
    char pad_2a0[0x18];
    E_DoorState::Type DoorState; // 0x2b8
    char pad_2b9[0x3];
    float Right_Closed; // 0x2bc
    float Right_Open; // 0x2c0
    float Left_Closed; // 0x2c4
    float Left_Open; // 0x2c8
    FName MissionCheck; // 0x2cc
    char pad_2d4[0x4];
    FString MissionStepNotCheck; // 0x2d8
    FString MissionStepCheck; // 0x2e8
    bool UseMissionCheck; // 0x2f8
    bool UseStatCheck; // 0x2f9
    char pad_2fa[0x2];
    FStatList StatName; // 0x2fc
    int32_t StatValue; // 0x304
    bool RevelioLinkedToStatCheck; // 0x308
    char pad_309[0x7];
    static ABP_DungeonEntrance_HM_Cart_C* StaticClass();
    void Delegate_Stats_Updated(FName Key, int32_t Value, int32_t Delta, bool CallFunc_EqualEqual_IntInt_ReturnValue, FName CallFunc_GetStatName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue);
    void HandleStatCheckRevelio();
    void ToggleRevelioHighlight(bool CanHightlight, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__SphereTrigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ReceiveBeginPlay0();
    void ExecuteUbergraph_BP_DungeonEntrance_HM_Cart(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_EqualEqual_FloatFloat_ReturnValue);
}; // Size: 0x310
#pragma pack(pop)
