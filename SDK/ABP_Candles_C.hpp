#pragma once
#include <cstdint>
#include "ACandles.hpp"
#include "EDayNightEventDirection.hpp"
#include "ELightClippingProviderVolumeMode.hpp"
#include "ELightCullingPriority.hpp"
#include "EMoonPhaseName.hpp"
#include "ETimelineDirection\Type.hpp"
#include "E_CandleType\Type.hpp"
#include "FAkExternalSourceInfo.hpp"
#include "FDateTime.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FRotator.hpp"
#include "FSTR_CandleList.hpp"
#include "FSolarNormalizedTime.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UMaterialBillboardComponent;
class UAkComponent;
class UAnimatedLightComponent;
class USpotLightComponent;
class UPointLightComponent;
class UObjectStateComponent;
class ALightClippingPlanes;
class UDayNightMasterComponent;
class UTimelineComponent;
class ALightClippingVolume;
class UMaterialInterface;
class UMaterialInstanceDynamic;
class UStaticMeshComponent;
class ULightComponent;
class AActor;
#pragma pack(push, 1)
class ABP_Candles_C : public ACandles {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x420
    UMaterialBillboardComponent* MaterialBillboard; // 0x428
    UAkComponent* Ak_BP_Candles; // 0x430
    UAnimatedLightComponent* AnimatedLight; // 0x438
    USpotLightComponent* SpotLight; // 0x440
    UPointLightComponent* PointLight; // 0x448
    UObjectStateComponent* ObjectState; // 0x450
    float LerpIntensity_NewTrack_0_C93EB44641A0097D0B777F95878EBC23; // 0x458
    ETimelineDirection::Type LerpIntensity__Direction_C93EB44641A0097D0B777F95878EBC23; // 0x45c
    char pad_45d[0x3];
    UTimelineComponent* LerpIntensity; // 0x460
    E_CandleType::Type CandleType; // 0x468
    char pad_469[0x3];
    int32_t CandleIndex; // 0x46c
    char pad_470[0x20];
    TArray<void*> FatCandles; // 0x490
    TArray<void*> SkinnyCandles; // 0x4a0
    ALightClippingPlanes* Light_Clipping_Planes_Actor; // 0x4b0
    ALightClippingVolume* Light_Clipping_Volumes_Actor; // 0x4b8
    ELightClippingProviderVolumeMode Volume_Mode; // 0x4c0
    bool On_During_Day; // 0x4c1
    bool Cast_Static_Only; // 0x4c2
    char pad_4c3[0x1];
    float BaseMinIntensity; // 0x4c4
    float SwitchTargetMinIntensity; // 0x4c8
    float Delay; // 0x4cc
    float BaseWaveSpeed1; // 0x4d0
    float BaseWaveSpeed2; // 0x4d4
    bool LerpCandleStickGlow; // 0x4d8
    char pad_4d9[0x7];
    UMaterialInstanceDynamic* MatCandle; // 0x4e0
    float BaseCandleGlow; // 0x4e8
    float TargetCandleGlow; // 0x4ec
    UMaterialInstanceDynamic* MatFlame; // 0x4f0
    FRandomStream Random_Seed; // 0x4f8
    ELightCullingPriority Culling_Priority; // 0x500
    char pad_501[0x3];
    float Max_Draw_Distance; // 0x504
    float Max_Distance_Fade_Range; // 0x508
    float Flame_Emissive_Value; // 0x50c
    FVector Sound_Offset; // 0x510
    bool StaticMeshBlocksCamera; // 0x51c
    char pad_51d[0x3];
    static ABP_Candles_C* StaticClass();
    void PlaceFlames(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_2, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Contains_ReturnValue, int32_t Temp_int_Array_Index_Variable_3, FTransform Temp_struct_Variable, UMaterialBillboardComponent* CallFunc_AddComponent_ReturnValue, FTransform Temp_struct_Variable_1, int32_t CallFunc_Array_Add_ReturnValue, UMaterialBillboardComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, UStaticMeshComponent* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FName CallFunc_Array_Get_Item_2, bool CallFunc_K2_AttachToComponent_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Array_Length_ReturnValue_3, UStaticMeshComponent* CallFunc_Array_Get_Item_3, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3);
    void PlaceCandles(FRandomStream RandStream, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool Temp_bool_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_2, FVector Temp_struct_Variable, FTransform Temp_struct_Variable_1, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue, FName CallFunc_Array_Get_Item, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FTransform Temp_struct_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, FTransform Temp_struct_Variable_3, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FTransform Temp_struct_Variable_4, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_1, FVector Temp_struct_Variable_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool Temp_bool_Variable_2, bool CallFunc_BooleanOR_ReturnValue_4, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_5, bool Temp_bool_Variable_3, TArray<void*>& K2Node_Select_Default, FVector Temp_struct_Variable_6);
    void ConstructCandles(FSTR_CandleList Candles, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, E_CandleType::Type Temp_byte_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_GetNumMaterials_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_GetNumMaterials_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_CandleSetup_ReturnValue, int32_t Temp_int_Variable_1, float CallFunc_FMax_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UMaterialBillboardComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<void*>& K2Node_Select_Default, int32_t CallFunc_Array_LastIndex_ReturnValue);
    void UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, UMaterialBillboardComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, UMaterialBillboardComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UStaticMeshComponent* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_1, UStaticMeshComponent* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_AssignLightClippingVolumeSource_bSuccess, bool CallFunc_AssignLightClippingVolumeSource_bSuccess_1, bool CallFunc_AssignLightClippingPlanesSource_bSuccess, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_AssignLightClippingPlanesSource_bSuccess_1, bool CallFunc_IsValid_ReturnValue_8);
    void LerpIntensity__FinishedFunc();
    void LerpIntensity__UpdateFunc();
    void DayNightMoonEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, EMoonPhaseName Phase, bool bLate);
    void OnEnterLightTickRange(ULightComponent* LightComponent);
    void OnExitLightTickRange(ULightComponent* LightComponent);
    void ReceiveBeginPlay();
    void DayNightSunEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate);
    void SwitchOn(AActor* SwitchActor);
    void Brighten();
    void SwitchOff(AActor* SwitchActor);
    void ExecuteUbergraph_BP_Candles(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
    void OnExtinguished__DelegateSignature();
    void OnLit__DelegateSignature();
}; // Size: 0x520
#pragma pack(pop)
