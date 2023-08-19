#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
class UTextRenderComponent;
class ADynamicObjectVolume;
class ABiped_Player;
class USceneComponent;
class UBoxComponent;
class UPrimitiveComponent;
#pragma pack(push, 1)
class ABP_TriggerVolume_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UTextRenderComponent* TextRender; // 0x250
    USceneComponent* Scene; // 0x258
    UBoxComponent* Box; // 0x260
    TArray<AActor*> Target; // 0x268
    bool CanReset; // 0x278
    char pad_279[0x3];
    float Pre_Delay; // 0x27c
    bool ExtinguishLitTorches; // 0x280
    bool TriggerExitOnlyOnEmpty; // 0x281
    bool TriggerOnPlayer; // 0x282
    char pad_283[0x5];
    TArray<AActor*> TriggeringActors; // 0x288
    TArray<AActor*> ActorsInside; // 0x298
    bool StartActivated; // 0x2a8
    bool InvertToggle; // 0x2a9
    bool MultiTrigger; // 0x2aa
    char pad_2ab[0x5];
    TArray<ADynamicObjectVolume*> DynamicObjectVolumes; // 0x2b0
    char pad_2c0[0x10];
    float StartupDelay; // 0x2d0
    char pad_2d4[0x4];
    TArray<AActor*> InvertTarget; // 0x2d8
    static ABP_TriggerVolume_C* StaticClass();
    void ActivateDOVs(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, ADynamicObjectVolume* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
    void UserConstructionScript0();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
    void ReceiveBeginPlay0();
    void SwitchOn(AActor* SwitchActor);
    void SwitchOff(AActor* SwitchActor);
    void ExecuteUbergraph_BP_TriggerVolume(int32_t EntryPoint, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32_t Temp_int_Array_Index_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_1, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, TArray<AActor*>& Temp_object_Variable, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, AActor* K2Node_ComponentBoundEvent_OtherActor_1, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, FHitResult K2Node_ComponentBoundEvent_SweepResult, UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, AActor* K2Node_ComponentBoundEvent_OtherActor, UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32_t K2Node_ComponentBoundEvent_OtherBodyIndex, AActor* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue);
    void Triggered__DelegateSignature();
}; // Size: 0x2e8
#pragma pack(pop)
