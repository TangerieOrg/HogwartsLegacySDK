#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EComponentMobility\Type.hpp"
#include "EDayNightEventDirection.hpp"
#include "ELightClippingProviderVolumeMode.hpp"
#include "ELightCullingPriority.hpp"
#include "EMoonPhaseName.hpp"
#include "EShadowQualityLevels.hpp"
#include "E_LightFixture_Default\Type.hpp"
#include "E_RusticLamppostDressing\Type.hpp"
#include "FAnimatedLightExtraParameter.hpp"
#include "FDateTime.hpp"
#include "FEnvironmentalGlobals.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRandomStream.hpp"
#include "FRotator.hpp"
#include "FSTR_LightFixtureDefaults.hpp"
#include "FSolarNormalizedTime.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "FWCullingPlane.hpp"
class UAnimatedLightParametersComponent;
class UStaticMeshComponent;
class UAkComponent;
class UNiagaraSystem;
class UNiagaraComponent;
class USceneComponent;
class UAkAudioEvent;
class UStaticMesh;
class UPointLightComponent;
class UInteractionArchitectAsset;
class UAnimatedLightComponent;
class USpotLightComponent;
class UMaterialBillboardComponent;
class UMaterialInstanceDynamic;
class UDayNightBasicLightControllerComponent;
class ABP_FakeFog_A_C;
class UTexture;
class UMaterialInterface;
class ALightClippingVolume;
class UPhoenixPhysicalMaterial;
class UDayNightLocalLightControllerComponent;
class ALightClippingPlanes;
class UDayNightMasterComponent;
class UPhysicsConstraintComponent;
class UMaterialInstance;
class ULocalLightComponent;
class ULightComponent;
class UChildActorComponent;
class UMaterial;
class UPhysicalMaterial;
class ASpellTool;
class USpellToolRecord;
#pragma pack(push, 1)
class ABP_LightFixture_Master_C : public AActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x248
    UAnimatedLightParametersComponent* AnimatedLightParameters; // 0x250
    UAkComponent* AK_BP_Light_Fixture_Master; // 0x258
    USceneComponent* Lights; // 0x260
    UStaticMeshComponent* Base; // 0x268
    USceneComponent* DefaultSceneRoot; // 0x270
    bool Add_Anchor; // 0x278
    char pad_279[0x7];
    UStaticMeshComponent* Anchor; // 0x280
    bool Add_Chain; // 0x288
    char pad_289[0x3];
    float Chain_Length; // 0x28c
    float Base_Offset; // 0x290
    float Scale_Factor; // 0x294
    float Link_To_Link_Offset; // 0x298
    char pad_29c[0x4];
    UStaticMeshComponent* Chain_Mesh; // 0x2a0
    bool Add_Rope; // 0x2a8
    char pad_2a9[0x7];
    TArray<UStaticMeshComponent*> Chain_Array; // 0x2b0
    int32_t Chain_Index; // 0x2c0
    char pad_2c4[0x4];
    TArray<int32_t> Chain_Index_Array; // 0x2c8
    FVector Initial_Scale; // 0x2d8
    char pad_2e4[0x4];
    UStaticMesh* Anchor_Mesh; // 0x2e8
    bool Add_Candles; // 0x2f0
    char pad_2f1[0x7];
    UStaticMeshComponent* Candle; // 0x2f8
    FRandomStream Random_Seed; // 0x300
    TArray<UStaticMeshComponent*> Candle_Array; // 0x308
    float Candle_Offset; // 0x318
    FVector Candle_Scale; // 0x31c
    bool Add_Particles; // 0x328
    char pad_329[0x7];
    UNiagaraComponent* Niagara_System; // 0x330
    bool Custom_Particle; // 0x338
    char pad_339[0x7];
    UNiagaraSystem* Particle; // 0x340
    FVector Particle_Scale; // 0x348
    float Particle_Offset; // 0x354
    TArray<UNiagaraComponent*> Niagara_System_Array; // 0x358
    TArray<int32_t> Niagara_System_Index_Array; // 0x368
    bool Has_Emissive_Mat; // 0x378
    char pad_379[0x3];
    FLinearColor Light_Source___Emissive_Color; // 0x37c
    float Light_Source___Emissive_Multiplier; // 0x38c
    bool Point_Light_On; // 0x390
    bool Spot_Light_On; // 0x391
    bool Add_Lights; // 0x392
    char pad_393[0x5];
    UPointLightComponent* Point_Light; // 0x398
    bool Flicker; // 0x3a0
    char pad_3a1[0x7];
    UAnimatedLightComponent* Anim_Light; // 0x3a8
    float Wave_Speed_1; // 0x3b0
    float Wave_Speed_2; // 0x3b4
    float Flicker_Min_Intensity; // 0x3b8
    char pad_3bc[0x54];
    float AttenuationRadius; // 0x410
    float Intensity; // 0x414
    char pad_418[0x50];
    float Temperature; // 0x468
    char pad_46c[0x54];
    float Volumetric_Scattering; // 0x4c0
    FLinearColor Color; // 0x4c4
    bool Cast_Shadow; // 0x4d4
    bool Project_Shadows; // 0x4d5
    bool Static_Only_Shadows; // 0x4d6
    char pad_4d7[0x1];
    float Shadow_Bias; // 0x4d8
    float Contact_Shadow_Length; // 0x4dc
    float Indirect_Intensity; // 0x4e0
    FVector Point_Light_Offset; // 0x4e4
    USpotLightComponent* Spot_Light; // 0x4f0
    FRotator Rotation_SL; // 0x4f8
    FVector Spot_Light_Offset; // 0x504
    char pad_510[0x50];
    float AttenuationRadius_SL; // 0x560
    char pad_564[0x54];
    float Intensity_SL; // 0x5b8
    char pad_5bc[0x54];
    float Temperature_SL; // 0x610
    float Volumetric_Scatting_SL; // 0x614
    FLinearColor Color_SL; // 0x618
    float Outer_Cone_Angle; // 0x628
    float Inner_Cone_Angle; // 0x62c
    bool Cast_Shadows_SL; // 0x630
    bool Project_Shadows_SL; // 0x631
    bool Static_Only_Shadows_SL; // 0x632
    char pad_633[0x1];
    float Indirect_Intensity_SL; // 0x634
    float ShadowBais; // 0x638
    float Contact_Shadow_Length_SL; // 0x63c
    FVector Anchor_Scale; // 0x640
    bool Is_Outside; // 0x64c
    bool On_During_Day; // 0x64d
    bool Ambient_Particles; // 0x64e
    char pad_64f[0x1];
    UMaterialBillboardComponent* CandleFlame; // 0x650
    TArray<UMaterialBillboardComponent*> CandleFlameArray; // 0x658
    FRotator Rotation; // 0x668
    char pad_674[0x4];
    UMaterialInstanceDynamic* Emissive_Mat; // 0x678
    float Min_Distance; // 0x680
    char pad_684[0x54];
    float Shadow_Resolution_Scale; // 0x6d8
    float Shadow_Clipping_Distance; // 0x6dc
    float Min_Distance_SL; // 0x6e0
    float Source_Radius_SL; // 0x6e4
    float Shadow_Resolution_Scale_SL; // 0x6e8
    float Shadow_Clipping_Distane_SL; // 0x6ec
    char pad_6f0[0x50];
    FTransform Base_LOC; // 0x740
    ABP_FakeFog_A_C* Fake_Fog; // 0x770
    char pad_778[0x8];
    FTransform Spot_LOC; // 0x780
    UTexture* PointLightTexture; // 0x7b0
    UDayNightBasicLightControllerComponent* Day_Night_Adjuster; // 0x7b8
    bool Run_Construction; // 0x7c0
    bool Enable_DayNight_Modulator; // 0x7c1
    char pad_7c2[0x2];
    FVector2D SunLight_Min_Max; // 0x7c4
    FLinearColor Night_Color_Mod; // 0x7cc
    float Day_Intensity_Factor; // 0x7dc
    float Light_Texture_Intensity_PL; // 0x7e0
    char pad_7e4[0x4];
    TArray<FWCullingPlane> CullingPlanes; // 0x7e8
    E_LightFixture_Default::Type Light_Type; // 0x7f8
    char pad_7f9[0x7];
    TArray<FName> LightTypeInputNames; // 0x800
    UTexture* SL_Light_Texture; // 0x810
    float Light_Texture_Intensity_SL; // 0x818
    char pad_81c[0x4];
    TArray<FWCullingPlane> Light_Culling_Planes_SL; // 0x820
    bool Add_Color_Flicker; // 0x830
    char pad_831[0x3];
    float Saturtation_Noise_Amount; // 0x834
    float Saturation_Noise_Speed; // 0x838
    float Hue_Noise_Amount; // 0x83c
    float Hue_Noise_Speed; // 0x840
    char pad_844[0x4];
    UMaterialInterface* Lamp_Material_PPM; // 0x848
    char pad_850[0x50];
    UPhoenixPhysicalMaterial* Glass_Material; // 0x8a0
    UPhoenixPhysicalMaterial* Cloth_Material; // 0x8a8
    float Shade___Emissive_Multiplier; // 0x8b0
    float Emissive_Day_Mod; // 0x8b4
    bool Has_Sound; // 0x8b8
    char pad_8b9[0x3];
    FVector Sound_Offset; // 0x8bc
    EDayNightEventDirection RiseSet; // 0x8c8
    char pad_8c9[0x3];
    FName Light_Tag; // 0x8cc
    char pad_8d4[0x4];
    ALightClippingPlanes* Light_Clipping_Planes_Actor; // 0x8d8
    bool Invert_Clipping_Planes; // 0x8e0
    ELightCullingPriority Point_Light_Shadow_Priority; // 0x8e1
    ELightCullingPriority Spot_Light_Shadow_Priority; // 0x8e2
    char pad_8e3[0x5];
    ALightClippingVolume* Light_Clipping_Volume_Actor; // 0x8e8
    ELightClippingProviderVolumeMode Volume_Mode; // 0x8f0
    char pad_8f1[0x3];
    float Max_Draw_Distance; // 0x8f4
    float Max_Fade_Distance; // 0x8f8
    bool Swinging; // 0x8fc
    char pad_8fd[0x3];
    FVector Cable_End_Adjustment; // 0x900
    float Cable_Width; // 0x90c
    float Tile_Material; // 0x910
    char pad_914[0x4];
    UMaterialInterface* Material; // 0x918
    USceneComponent* Cables; // 0x920
    float Cable_Length; // 0x928
    char pad_92c[0x4];
    UPhysicsConstraintComponent* Physics_Constraint; // 0x930
    float Base_Mass; // 0x938
    float Angular_Dampening; // 0x93c
    float Linear_Dampening; // 0x940
    EComponentMobility::Type Mobility; // 0x944
    char pad_945[0x3];
    UNiagaraComponent* Ambient_Particle_2; // 0x948
    EShadowQualityLevels Shadow_Quality_Level; // 0x950
    EShadowQualityLevels Shadow_Quality_Level_SL; // 0x951
    char pad_952[0x6];
    TArray<void*> FatCandles; // 0x958
    TArray<void*> SkinnyCandles; // 0x968
    bool UseSkinny; // 0x978
    char pad_979[0x57];
    bool Candles_CastShadows; // 0x9d0
    char pad_9d1[0x3];
    FVector Sound_LOC; // 0x9d4
    float Light_Source_Emissive___Local; // 0x9e0
    float Shade___Emissive_Local; // 0x9e4
    UMaterialInstanceDynamic* Emissive_Source; // 0x9e8
    UMaterialInstanceDynamic* Emissive_Shade; // 0x9f0
    ELightCullingPriority Light_Priority_PL; // 0x9f8
    ELightCullingPriority Light_Priority_SL; // 0x9f9
    char pad_9fa[0x6];
    UDayNightLocalLightControllerComponent* DayNightController; // 0xa00
    bool Test; // 0xa08
    char pad_a09[0x7];
    TArray<void*> DressingAssets; // 0xa10
    int32_t Dressing_____NOOO; // 0xa20
    bool Add_Dressing; // 0xa24
    E_RusticLamppostDressing::Type DressingType; // 0xa25
    char pad_a26[0xa];
    FTransform Dressing_Custom_Transform; // 0xa30
    UNiagaraSystem* Ambient_Particle; // 0xa60
    bool Split_Emissives; // 0xa68
    char pad_a69[0x57];
    FLinearColor Light_Shade___Emissive_Color; // 0xac0
    float Candle_Flame_Emissive_Strength; // 0xad0
    bool DestroyRoot; // 0xad4
    bool CustomLOC; // 0xad5
    bool Condition; // 0xad6
    bool Override_Values; // 0xad7
    float Attunation_Threshold; // 0xad8
    float Attenuation_Threshold_SL; // 0xadc
    float Large_Attenuation_Radius; // 0xae0
    float Small_Attenuation_Radius; // 0xae4
    bool Convert_To_Simple_Light; // 0xae8
    bool Custom_Shadow_Distance; // 0xae9
    bool NewVar_0; // 0xaea
    bool InBeginPlay; // 0xaeb
    char pad_aec[0x4];
    static ABP_LightFixture_Master_C* StaticClass();
    void Set_Emissive(bool LightIsOn, TArray<int32_t>& CallFunc_Map_Values_Values, int32_t CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<int32_t>& CallFunc_Map_Values_Values_1, TArray<int32_t>& CallFunc_Map_Values_Values_2, int32_t CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Get_Item_2, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue_2, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3);
    void DumpLights(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, FString CallFunc_Conv_IntToString_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<ULocalLightComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, FString CallFunc_GetObjectName_ReturnValue, ULocalLightComponent* CallFunc_Array_Get_Item, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsVisible_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_SelectString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_GetObjectName_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_3, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_5, FString CallFunc_Concat_StrStr_ReturnValue_6);
    void Shadow_Draw_Distance();
    void SimpleLight_Struct(ULightComponent* Light);
    void RT_Specific(UPointLightComponent* Light, float Attenuation_Threshold, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Custom_Values_Result);
    void ExtDressing(FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UChildActorComponent* CallFunc_AddComponent_ReturnValue, int32_t CallFunc_Conv_ByteToInt_ReturnValue);
    void On_During_Day_Test(FString CallFunc_GetObjectName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, FEnvironmentalGlobals CallFunc_GetEnvironmentalGlobals_EnvironmentalGlobals, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FString CallFunc_Conv_BoolToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2);
    void SoundLOC(FVector& SoundLOC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
    void Mobility_Check(EComponentMobility::Type Mobility, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_2, USceneComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, USceneComponent* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SetSceneComponentMobility_ReturnValue, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, bool CallFunc_IsValid_ReturnValue_2, USceneComponent* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
    void Get_Parent(UMaterialInterface* MI, UMaterial*& Parent, UMaterial* K2Node_DynamicCast_AsMaterial, bool K2Node_DynamicCast_bSuccess, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_1, UMaterial* CallFunc_GetBaseMaterial_ReturnValue, UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess_2, UMaterial* CallFunc_GetBaseMaterial_ReturnValue_1);
    void Custom_Values();
    void Set_Light_Values();
    void Run_Construction_Struct(FTransform Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, UNiagaraComponent* CallFunc_AddComponent_ReturnValue, FTransform Temp_struct_Variable_1, int32_t Temp_int_Array_Index_Variable, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue_1, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_Contains_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool Temp_bool_Variable, TArray<float>& CallFunc_Map_Values_Values, TArray<UAkAudioEvent*>& CallFunc_Map_Keys_Keys, float CallFunc_Array_Get_Item_1, UAkAudioEvent* CallFunc_Array_Get_Item_2, UAkAudioEvent* CallFunc_Array_Get_Item_3, float CallFunc_Array_Get_Item_4, int32_t CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_AvaIsRunningCommandlet_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UAkAudioEvent* K2Node_Select_Default, float CallFunc_SelectFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, FRandomStream CallFunc_MakeRandomStream_RandomStream, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_AvaIsRunningCommandlet_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_4, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue_1, FName CallFunc_Array_Get_Item_5, int32_t CallFunc_Array_Length_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Contains_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue_1, FTransform CallFunc_GetRelativeTransform_ReturnValue, FTransform CallFunc_MakeRelativeTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
    void Enable_Flicker(bool Enable_Flicker, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void Chain_Struct(FTransform Temp_struct_Variable, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, int32_t CallFunc_Array_LastIndex_ReturnValue);
    void Candle_Struct(int32_t Temp_int_Array_Index_Variable, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float K2Node_MathExpression_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, int32_t Temp_int_Variable, bool Temp_bool_Variable, TArray<void*>& K2Node_Select_Default, int32_t Temp_int_Loop_Counter_Variable);
    void Particle_Struct(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, FTransform CallFunc_GetRelativeTransform_ReturnValue, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FTransform CallFunc_MakeRelativeTransform_ReturnValue, UMaterialBillboardComponent* CallFunc_AddComponent_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Contains_ReturnValue, int32_t CallFunc_Array_LastIndex_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_3, FTransform CallFunc_GetRelativeTransform_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UStaticMeshComponent* CallFunc_Array_Get_Item_1, FTransform CallFunc_GetRelativeTransform_ReturnValue_2, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, FName CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, FTransform CallFunc_GetSocketTransform_ReturnValue_1, FTransform CallFunc_MakeRelativeTransform_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue_1, UMaterialBillboardComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_Contains_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue_2, int32_t CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_3, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_4, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, int32_t CallFunc_Array_Add_ReturnValue_5, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, float CallFunc_Add_FloatFloat_ReturnValue_2, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_2, FName CallFunc_Array_Get_Item_3, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, FTransform CallFunc_GetSocketTransform_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_2, FTransform CallFunc_MakeRelativeTransform_ReturnValue_2, FString CallFunc_Conv_NameToString_ReturnValue_2, UNiagaraComponent* CallFunc_AddComponent_ReturnValue_2, bool CallFunc_Contains_ReturnValue_2, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3);
    void Emissive_Material_Struct(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FAnimatedLightExtraParameter K2Node_MakeStruct_AnimatedLightExtraParameter, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_2, FAnimatedLightExtraParameter K2Node_MakeStruct_AnimatedLightExtraParameter_1, FAnimatedLightExtraParameter K2Node_MakeStruct_AnimatedLightExtraParameter_2, bool CallFunc_AddAnimatedLightMaterialParameter_ReturnValue, bool CallFunc_AddAnimatedLightMaterialParameter_ReturnValue_1, bool CallFunc_AddAnimatedLightMaterialParameter_ReturnValue_2, TArray<int32_t>& CallFunc_Map_Values_Values, TArray<int32_t>& CallFunc_Map_Values_Values_1, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Get_Item_1, bool CallFunc_Not_PreBool_ReturnValue, TArray<UMaterialInterface*>& CallFunc_Map_Keys_Keys, UMaterialInterface* CallFunc_Array_Get_Item_2, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UMaterialInterface* CallFunc_Array_Get_Item_3, UPhysicalMaterial* CallFunc_GetPhysicalMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, UMaterialInterface* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_2, UMaterial* CallFunc_Get_Parent_Parent, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2);
    void Light_Struct(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FTransform Temp_struct_Variable, UDayNightLocalLightControllerComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, int32_t CallFunc_Conv_ByteToInt_ReturnValue, FName CallFunc_Array_Get_Item, FSTR_LightFixtureDefaults CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float CallFunc_Custom_Values_Result, int32_t CallFunc_Conv_ByteToInt_ReturnValue_1, float CallFunc_Custom_Values_Result_1, FName CallFunc_Array_Get_Item_1, float CallFunc_Custom_Values_Result_2, FSTR_LightFixtureDefaults CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, float CallFunc_Custom_Values_Result_3, float CallFunc_Custom_Values_Result_4, float CallFunc_Custom_Values_Result_5, USpotLightComponent* CallFunc_AddComponent_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, ALightClippingVolume* CallFunc_GetLightClippingVolumeSource_LightClippingVolumeActor, bool CallFunc_AssignLightClippingVolumeSource_bSuccess, int32_t CallFunc_FindAndAssignLightClippingVolumeSource_AssignedLights, bool CallFunc_AssignLightClippingPlanesSource_bSuccess, ALightClippingPlanes* CallFunc_GetLightClippingPlanesSource_LightClippingPlanesActor, int32_t CallFunc_FindAndAssignLightClippingPlanesSource_AssignedLights, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_SetAnimatedLightIntensity_ReturnValue, float CallFunc_FClamp_ReturnValue_2, FTransform Temp_struct_Variable_1, bool CallFunc_AssignLightClippingVolumeSource_bSuccess_1, ALightClippingVolume* CallFunc_GetLightClippingVolumeSource_LightClippingVolumeActor_1, UAnimatedLightComponent* CallFunc_AddComponent_ReturnValue_2, int32_t CallFunc_FindAndAssignLightClippingVolumeSource_AssignedLights_1, bool CallFunc_AssignLightClippingPlanesSource_bSuccess_1, ALightClippingPlanes* CallFunc_GetLightClippingPlanesSource_LightClippingPlanesActor_1, int32_t CallFunc_FindAndAssignLightClippingPlanesSource_AssignedLights_1, FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult, bool CallFunc_SetAnimatedLightColor_ReturnValue, bool CallFunc_SetAnimatedLightIntensity_ReturnValue_1, FHitResult CallFunc_K2_AddRelativeLocation_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_SetAnimatedLightColor_ReturnValue_1, FHitResult CallFunc_K2_AddRelativeLocation_SweepHitResult_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_3, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue, FName CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_Contains_ReturnValue, UPointLightComponent* CallFunc_AddComponent_ReturnValue_3);
    void UserConstructionScript0();
    void OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection);
    void OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact);
    void OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation);
    void OnSpellEffective(AActor* Instigator);
    void OnSpellIneffective(AActor* Instigator);
    void OnSpellTooWeak(AActor* Instigator);
    void DayNightMoonEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, EMoonPhaseName Phase, bool bLate);
    void ReceiveBeginPlay0();
    void OnEnterLightTickRange(ULightComponent* LightComponent);
    void OnExitLightTickRange(ULightComponent* LightComponent);
    void DayNightSunEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate);
    void Show_All();
    void Hide();
    void DayNightLightSwitch();
    void DayNightParticalSwitch();
    void Post_AK();
    void Stop_AK();
    void OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void ExecuteUbergraph_BP_LightFixture_Master(int32_t EntryPoint, bool CallFunc_IsVisible_ReturnValue, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_6, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, bool CallFunc_Not_PreBool_ReturnValue, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_5, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_4, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FGameplayTagContainer K2Node_Event_Impact, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_3, AActor* K2Node_Event_Instigator_2, AActor* K2Node_Event_Instigator_1, UDayNightMasterComponent* K2Node_Event_DayNightMaster_1, FName K2Node_Event_EventName_1, FSolarNormalizedTime K2Node_Event_NormalizedTime_1, FDateTime K2Node_Event_GameTime_1, EDayNightEventDirection K2Node_Event_MoonDirection, float K2Node_Event_MoonAltitudeDegrees, EMoonPhaseName K2Node_Event_Phase, bool K2Node_Event_bLate_1, ULightComponent* K2Node_Event_LightComponent_1, ULightComponent* K2Node_Event_LightComponent, UDayNightMasterComponent* K2Node_Event_DayNightMaster, FName K2Node_Event_EventName, FSolarNormalizedTime K2Node_Event_NormalizedTime, FDateTime K2Node_Event_GameTime, EDayNightEventDirection K2Node_Event_SunDirection, float K2Node_Event_SunAltitudeDegrees, bool K2Node_Event_bLate);
}; // Size: 0xaf0
#pragma pack(pop)
