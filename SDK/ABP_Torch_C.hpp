#pragma once
#include <cstdint>
#include "ATorch.hpp"
#include "EDayNightEventDirection.hpp"
#include "EEnvironment\Type.hpp"
#include "ELightClippingProviderVolumeMode.hpp"
#include "EMoonPhaseName.hpp"
#include "ETimelineDirection\Type.hpp"
#include "E_LightFixture_Default\Type.hpp"
#include "E_TorchFireSize\Type.hpp"
#include "FDateTime.hpp"
#include "FDayNightSunAltitudeEvent.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FPropList.hpp"
#include "FRandomStream.hpp"
#include "FSTR_LightFixtureDefaults.hpp"
#include "FSTR_Torch_LF.hpp"
#include "FSolarNormalizedTime.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
class UNiagaraComponent;
class UAnimatedLightComponent;
class UAkComponent;
class UPointLightComponent;
class USphereComponent;
class USpotLightComponent;
class UObjectStateComponent;
class UTimelineComponent;
class AActor;
class ULightComponent;
class ALightClippingPlanes;
class UDayNightMasterComponent;
class ALightClippingVolume;
class UAkAudioEvent;
class UIncendioComponent;
class UArrestoMomentumComponent;
#pragma pack(push, 1)
class ABP_Torch_C : public ATorch {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x510
    UAnimatedLightComponent* AnimatedLight; // 0x518
    UAkComponent* Ak_BP_Torch; // 0x520
    USphereComponent* PropagateTrigger; // 0x528
    UPointLightComponent* IndirectLight; // 0x530
    USpotLightComponent* SpotLight; // 0x538
    UPointLightComponent* PointLight; // 0x540
    UNiagaraComponent* FireParticle; // 0x548
    UObjectStateComponent* ObjectState; // 0x550
    float Lightswitch_Timeline_Intensity_Percent_656EDB6C49C67839276729BFD7783D32; // 0x558
    ETimelineDirection::Type Lightswitch_Timeline__Direction_656EDB6C49C67839276729BFD7783D32; // 0x55c
    char pad_55d[0x3];
    UTimelineComponent* Lightswitch_Timeline; // 0x560
    float Timeline_1_NewTrack_0_EDCBDBEC444AB99094E6A19E1ACC4925; // 0x568
    ETimelineDirection::Type Timeline_1__Direction_EDCBDBEC444AB99094E6A19E1ACC4925; // 0x56c
    char pad_56d[0x3];
    UTimelineComponent* Timeline_1; // 0x570
    EEnvironment::Type Environment; // 0x578
    char pad_579[0x3];
    int32_t PropIndex; // 0x57c
    char pad_580[0x50];
    int32_t EnvInt; // 0x5d0
    char pad_5d4[0x24];
    TArray<AActor*> Switch_Target; // 0x5f8
    char pad_608[0x58];
    FTransform DPC_InitialTransform_0; // 0x660
    char pad_690[0x20];
    ALightClippingPlanes* Light_Clipping_Planes_Actor; // 0x6b0
    bool Invert_Clipping_Planes; // 0x6b8
    bool On_During_Day; // 0x6b9
    bool Point_Light_On; // 0x6ba
    bool Spot_Light_On; // 0x6bb
    E_LightFixture_Default::Type OL_Default_Type; // 0x6bc
    char pad_6bd[0x3];
    TArray<FName> Light_Type_Input_Names; // 0x6c0
    char pad_6d0[0x50];
    float Near_Shadow_Clipping_Plane; // 0x720
    bool Run_Easy_Set_Up; // 0x724
    char pad_725[0x3];
    TArray<int32_t> OLESU_Castle; // 0x728
    TArray<int32_t> OLESU_Cairn; // 0x738
    TArray<int32_t> OLESU_Cavern; // 0x748
    TArray<int32_t> OLESU_Overland; // 0x758
    bool Default_Type_Override; // 0x768
    bool Use_Mesh_To_System; // 0x769
    char pad_76a[0xa6];
    ALightClippingVolume* Light_Clipping_Volumes_Actor; // 0x810
    ELightClippingProviderVolumeMode Volume_Mode; // 0x818
    char pad_819[0x3];
    float Max_Draw_Distance; // 0x81c
    float Draw_Distance_Fade_Range; // 0x820
    FRandomStream Random_Seed; // 0x824
    FVector Sound_Offset; // 0x82c
    bool BlockCameraCol; // 0x838
    char pad_839[0x7];
    static ABP_Torch_C* StaticClass();
    bool DisallowArrestoMomentum();
    bool StartFreeze(AActor* Instigator, float Amount);
    bool IncreaseWetness(AActor* Instigator, float increaseAmount, FVector Location);
    bool StartWetness(AActor* Instigator, float Amount, FVector Location);
    bool DecreaseFire(float decreaseAmount);
    bool IncreaseFire(float increaseAmount, FVector Location);
    bool IsPointOnFire(FVector Point, bool& OnFire);
    bool StartFire(float Amount, FVector Location);
    bool ShouldStartLit0(float CallFunc_TorchGetNormalizedTime_NormalizedTime, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_ShouldStartLit_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    E_LightFixture_Default::Type Auto_Easy_Set_Up(int32_t Temp_int_Variable, E_LightFixture_Default::Type Temp_byte_Variable, E_LightFixture_Default::Type Temp_byte_Variable_1, E_LightFixture_Default::Type Temp_byte_Variable_2, int32_t Temp_int_Variable_1, TArray<int32_t>& Temp_int_Variable_2, TArray<int32_t>& Temp_int_Variable_3, int32_t CallFunc_Conv_ByteToInt_ReturnValue, TArray<int32_t>& K2Node_Select_Default, int32_t CallFunc_Array_Get_Item, E_LightFixture_Default::Type K2Node_Select_Default_1);
    void Set_Point_Light_Texture(int32_t CallFunc_Conv_ByteToInt_ReturnValue, int32_t CallFunc_Multiply_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Conv_IntToString_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FSTR_Torch_LF CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
    void Run_Construction(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_AssignLightClippingVolumeSource_bSuccess, bool CallFunc_AssignLightClippingVolumeSource_bSuccess_1, bool CallFunc_AssignLightClippingPlanesSource_bSuccess, bool CallFunc_AssignLightClippingPlanesSource_bSuccess_1, bool CallFunc_ConstructTorch_ReturnValue);
    void OL_Easy_Set_Up(E_LightFixture_Default::Type CallFunc_Auto_Easy_Set_Up_ReturnValue, bool Temp_bool_Variable, E_LightFixture_Default::Type K2Node_Select_Default, int32_t CallFunc_Conv_ByteToInt_ReturnValue, FName CallFunc_Array_Get_Item, FSTR_LightFixtureDefaults CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
    bool ConstructTorch0(FPropList Props, UPointLightComponent* Temp_object_Variable, bool Temp_bool_Variable, USpotLightComponent* Temp_object_Variable_1, uint8_t CallFunc_ModFunctionSetup_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, USpotLightComponent* K2Node_Select_Default, bool Temp_bool_Variable_1, UPointLightComponent* K2Node_Select_Default_1, bool CallFunc_TorchSetup_ReturnValue, int32_t CallFunc_PropSort_NewPropIndex, EEnvironment::Type CallFunc_PropSort_EnnvironmentOutput, int32_t CallFunc_PropSort_NewEnvInt);
    bool ParticleSetup0(E_TorchFireSize::Type TorchFireSize, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, float Temp_float_Variable_8, float Temp_float_Variable_9, float Temp_float_Variable_10, float Temp_float_Variable_11, bool Temp_bool_Variable, bool Temp_bool_Variable_1, UAkAudioEvent* Temp_object_Variable, bool Temp_bool_Variable_2, E_TorchFireSize::Type Temp_byte_Variable, UAkAudioEvent* Temp_object_Variable_1, UAkAudioEvent* Temp_object_Variable_2, UAkAudioEvent* Temp_object_Variable_3, UAkAudioEvent* Temp_object_Variable_4, UAkAudioEvent* Temp_object_Variable_5, UAkAudioEvent* Temp_object_Variable_6, UAkAudioEvent* Temp_object_Variable_7, UAkAudioEvent* Temp_object_Variable_8, UAkAudioEvent* Temp_object_Variable_9, UAkAudioEvent* Temp_object_Variable_10, UAkAudioEvent* Temp_object_Variable_11, UAkAudioEvent* Temp_object_Variable_12, UAkAudioEvent* Temp_object_Variable_13, FString CallFunc_GetDisplayName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, UAkAudioEvent* K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UAkAudioEvent* K2Node_Select_Default_1);
    float PropagationSetup0(FVector CallFunc_GetComponentBounds_Origin, FVector CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, bool K2Node_SwitchInteger_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchInteger_CmpSuccess_1, bool K2Node_SwitchInteger_CmpSuccess_2, bool K2Node_SwitchInteger_CmpSuccess_3, bool K2Node_SwitchInteger_CmpSuccess_4, bool K2Node_SwitchInteger_CmpSuccess_5);
    uint8_t ModFunctionSetup0(uint8_t CallFunc_ModFunctionSetup_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
    void UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult);
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Lightswitch_Timeline__FinishedFunc();
    void Lightswitch_Timeline__UpdateFunc();
    void DayNightMoonEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, EMoonPhaseName Phase, bool bLate);
    void OnFailedToFreeze();
    void OnThaw(AActor* Instigator);
    void OnDecreaseWetness(float decreaseAmount);
    void OnDry(AActor* Instigator);
    void OnFailedToWet();
    void OnCaughtFire(UIncendioComponent* IncendioComponent);
    void OnCompletelyCharred();
    void OnFailedToLight();
    void OnFireExtinguished();
    void ReceiveBeginPlay();
    void EndLight0(bool bLerp);
    void ExtinguishLight0(bool bSlow);
    void SequentialLight0(FVector LightLoc);
    void OnAttemptToFreeze();
    void OnAttemptToSetOnFire(FVector Location);
    void OnAttemptToApplyWetness(float Amount, FVector Location);
    void OnEnterLightTickRange(ULightComponent* LightComponent);
    void OnExitLightTickRange(ULightComponent* LightComponent);
    void SwitchOn(AActor* SwitchActor);
    void Stop_Lerp();
    void OnArrestoMomentumBegin(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent, float TimeDilation);
    void OnArrestoMomentumEnd(AActor* Instigator, UArrestoMomentumComponent* ArrestoMomentumComponent);
    void SwitchOff(AActor* SwitchActor);
    void Lightswitch_Lerp0(bool bOn);
    void DayNightSunEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate);
    void ExecuteUbergraph_BP_Torch(int32_t EntryPoint, bool CallFunc_ShouldStartLit_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, UDayNightMasterComponent* K2Node_Event_DayNightMaster_1, FName K2Node_Event_EventName_1, FSolarNormalizedTime K2Node_Event_NormalizedTime_1, FDateTime K2Node_Event_GameTime_1, EDayNightEventDirection K2Node_Event_MoonDirection, float K2Node_Event_MoonAltitudeDegrees, EMoonPhaseName K2Node_Event_Phase, bool K2Node_Event_bLate_1, AActor* K2Node_Event_Instigator_3, float K2Node_Event_decreaseAmount, AActor* K2Node_Event_Instigator_2, UIncendioComponent* K2Node_Event_IncendioComponent, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, FDayNightSunAltitudeEvent K2Node_MakeStruct_DayNightSunAltitudeEvent, int32_t Temp_int_Array_Index_Variable_1, bool K2Node_Event_bLerp, bool K2Node_Event_bSlow, FVector K2Node_Event_LightLoc, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FVector K2Node_Event_Location_1, float K2Node_Event_Amount, FVector K2Node_Event_Location, AActor* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue);
    void TorchDamaged__DelegateSignature(float Damage, FGameplayTagContainer MunitionTagContainer, AActor* Instigator);
    void ArrestoStart__DelegateSignature(bool bStart, UArrestoMomentumComponent* ArrestoComp, float TimeDilation);
    void OnExtinguished__DelegateSignature(ABP_Torch_C* Torch);
    void OnLit__DelegateSignature(ABP_Torch_C* Torch);
}; // Size: 0x840
#pragma pack(pop)
