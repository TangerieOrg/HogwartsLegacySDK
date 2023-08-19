#pragma once
#include <cstdint>
#include "ABP_LightFixture_Master_C.hpp"
#include "ETimelineDirection\Type.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"
class UTimelineComponent;
class UPointLightComponent;
class USpotLightComponent;
class AActor;
#pragma pack(push, 1)
class ABP_HM_OutsideLantern_C : public ABP_LightFixture_Master_C {
public:
    FPointerToUberGraphFrame UberGraphFrame0; // 0xaf0
    float Timeline_0_NewTrack_0_38A80C184B17A18882C753A4D21E2776; // 0xaf8
    ETimelineDirection::Type Timeline_0__Direction_38A80C184B17A18882C753A4D21E2776; // 0xafc
    char pad_afd[0x3];
    UTimelineComponent* Timeline_0; // 0xb00
    UPointLightComponent* Point_Light_0; // 0xb08
    USpotLightComponent* Spot_Light_0; // 0xb10
    float Delay; // 0xb18
    char pad_b1c[0x4];
    TArray<float> Intensities; // 0xb20
    float TargetIntinsity; // 0xb30
    char pad_b34[0xc];
    static ABP_HM_OutsideLantern_C* StaticClass();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void SwitchOn(AActor* SwitchActor);
    void SwitchOff(AActor* SwitchActor);
    void Brighten();
    void ExecuteUbergraph_BP_HM_OutsideLantern(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_1, TArray<UPointLightComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, AActor* K2Node_Event_SwitchActor_1, UPointLightComponent* CallFunc_Array_Get_Item, UPointLightComponent* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, AActor* K2Node_Event_SwitchActor, int32_t Temp_int_Loop_Counter_Variable_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, FTimerHandle CallFunc_K2_SetTimer_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue, float CallFunc_Array_Get_Item_2, float CallFunc_Lerp_ReturnValue);
}; // Size: 0xb40
#pragma pack(pop)
