#include "AActor.hpp"
#include "ABP_FakeFog_A_C.hpp"
#include "ABP_LightFixture_Master_C.hpp"
#include "ALightClippingPlanes.hpp"
#include "ALightClippingVolume.hpp"
#include "ASpellTool.hpp"
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
#include "UAkAudioEvent.hpp"
#include "UAkComponent.hpp"
#include "UAnimatedLightComponent.hpp"
#include "UAnimatedLightParametersComponent.hpp"
#include "UChildActorComponent.hpp"
#include "UDayNightBasicLightControllerComponent.hpp"
#include "UDayNightLocalLightControllerComponent.hpp"
#include "UDayNightMasterComponent.hpp"
#include "UFunction.hpp"
#include "UInteractionArchitectAsset.hpp"
#include "ULightComponent.hpp"
#include "ULocalLightComponent.hpp"
#include "UMaterial.hpp"
#include "UMaterialBillboardComponent.hpp"
#include "UMaterialInstance.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UNiagaraComponent.hpp"
#include "UNiagaraSystem.hpp"
#include "UPhoenixPhysicalMaterial.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPhysicsConstraintComponent.hpp"
#include "UPointLightComponent.hpp"
#include "USceneComponent.hpp"
#include "USpellToolRecord.hpp"
#include "USpotLightComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTexture.hpp"
void ABP_LightFixture_Master_C::On_During_Day_Test(FString CallFunc_GetObjectName_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, FEnvironmentalGlobals CallFunc_GetEnvironmentalGlobals_EnvironmentalGlobals, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FString CallFunc_Conv_BoolToString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.On During Day Test"));
    struct Params_On_During_Day_Test {
        FString CallFunc_GetObjectName_ReturnValue; // 0x0
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x10
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x20
        bool CallFunc_Not_PreBool_ReturnValue; // 0x30
        char pad_31[0xf];
        FEnvironmentalGlobals CallFunc_GetEnvironmentalGlobals_EnvironmentalGlobals; // 0x40
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x2e0
        bool CallFunc_BooleanAND_ReturnValue; // 0x2e1
        char pad_2e2[0x6];
        FString CallFunc_Conv_BoolToString_ReturnValue; // 0x2e8
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x2f8
    }; // Size: 0x308
    Params_On_During_Day_Test params{};
    params.CallFunc_GetObjectName_ReturnValue = (FString)CallFunc_GetObjectName_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetEnvironmentalGlobals_EnvironmentalGlobals = (FEnvironmentalGlobals)CallFunc_GetEnvironmentalGlobals_EnvironmentalGlobals;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_Conv_BoolToString_ReturnValue = (FString)CallFunc_Conv_BoolToString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::DumpLights(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, FString CallFunc_Conv_IntToString_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<ULocalLightComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, FString CallFunc_GetObjectName_ReturnValue, ULocalLightComponent* CallFunc_Array_Get_Item, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_IsVisible_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FString CallFunc_SelectString_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_2, FString CallFunc_GetObjectName_ReturnValue_1, FString CallFunc_Concat_StrStr_ReturnValue_3, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_5, FString CallFunc_Concat_StrStr_ReturnValue_6) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.DumpLights"));
    struct Params_DumpLights {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x18
        char pad_1c[0x4];
        TArray<ULocalLightComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x20
        FString CallFunc_GetObjectName_ReturnValue; // 0x30
        ULocalLightComponent* CallFunc_Array_Get_Item; // 0x40
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x48
        bool CallFunc_IsVisible_ReturnValue; // 0x58
        char pad_59[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x60
        FString CallFunc_SelectString_ReturnValue; // 0x70
        FString CallFunc_Concat_StrStr_ReturnValue_2; // 0x80
        FString CallFunc_GetObjectName_ReturnValue_1; // 0x90
        FString CallFunc_Concat_StrStr_ReturnValue_3; // 0xa0
        int32_t CallFunc_Array_Length_ReturnValue; // 0xb0
        char pad_b4[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_4; // 0xb8
        bool CallFunc_Less_IntInt_ReturnValue; // 0xc8
        char pad_c9[0x7];
        FString CallFunc_Concat_StrStr_ReturnValue_5; // 0xd0
        FString CallFunc_Concat_StrStr_ReturnValue_6; // 0xe0
    }; // Size: 0xf0
    Params_DumpLights params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<ULocalLightComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.CallFunc_GetObjectName_ReturnValue = (FString)CallFunc_GetObjectName_ReturnValue;
    params.CallFunc_Array_Get_Item = (ULocalLightComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_IsVisible_ReturnValue = (bool)CallFunc_IsVisible_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_SelectString_ReturnValue = (FString)CallFunc_SelectString_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_2 = (FString)CallFunc_Concat_StrStr_ReturnValue_2;
    params.CallFunc_GetObjectName_ReturnValue_1 = (FString)CallFunc_GetObjectName_ReturnValue_1;
    params.CallFunc_Concat_StrStr_ReturnValue_3 = (FString)CallFunc_Concat_StrStr_ReturnValue_3;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_4 = (FString)CallFunc_Concat_StrStr_ReturnValue_4;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_5 = (FString)CallFunc_Concat_StrStr_ReturnValue_5;
    params.CallFunc_Concat_StrStr_ReturnValue_6 = (FString)CallFunc_Concat_StrStr_ReturnValue_6;
    ProcessEvent(func, &params);
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
}
ABP_LightFixture_Master_C* ABP_LightFixture_Master_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C");
    return (ABP_LightFixture_Master_C*)res;
}
void ABP_LightFixture_Master_C::Set_Emissive(bool LightIsOn, TArray<int32_t>& CallFunc_Map_Values_Values, int32_t CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Array_IsValidIndex_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<int32_t>& CallFunc_Map_Values_Values_1, TArray<int32_t>& CallFunc_Map_Values_Values_2, int32_t CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Get_Item_2, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Array_IsValidIndex_ReturnValue_2, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.Set Emissive"));
    struct Params_Set_Emissive {
        bool LightIsOn; // 0x0
        char pad_1[0x7];
        TArray<int32_t> CallFunc_Map_Values_Values; // 0x8
        int32_t CallFunc_Array_Get_Item; // 0x18
        bool CallFunc_IsValid_ReturnValue; // 0x1c
        char pad_1d[0x3];
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue; // 0x20
        UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic; // 0x28
        bool K2Node_DynamicCast_bSuccess; // 0x30
        bool CallFunc_Array_IsValidIndex_ReturnValue; // 0x31
        bool CallFunc_IsValid_ReturnValue_1; // 0x32
        char pad_33[0x5];
        TArray<int32_t> CallFunc_Map_Values_Values_1; // 0x38
        TArray<int32_t> CallFunc_Map_Values_Values_2; // 0x48
        int32_t CallFunc_Array_Get_Item_1; // 0x58
        int32_t CallFunc_Array_Get_Item_2; // 0x5c
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1; // 0x60
        bool CallFunc_Array_IsValidIndex_ReturnValue_1; // 0x68
        char pad_69[0x7];
        UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1; // 0x70
        bool K2Node_DynamicCast_bSuccess_1; // 0x78
        bool CallFunc_Array_IsValidIndex_ReturnValue_2; // 0x79
        char pad_7a[0x6];
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue_2; // 0x80
        UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2; // 0x88
        bool K2Node_DynamicCast_bSuccess_2; // 0x90
        bool CallFunc_IsValid_ReturnValue_2; // 0x91
        bool CallFunc_IsValid_ReturnValue_3; // 0x92
    }; // Size: 0x93
    Params_Set_Emissive params{};
    params.LightIsOn = (bool)LightIsOn;
    params.CallFunc_Map_Values_Values = (TArray<int32_t>)CallFunc_Map_Values_Values;
    params.CallFunc_Array_Get_Item = (int32_t)CallFunc_Array_Get_Item;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetMaterial_ReturnValue = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue;
    params.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = (UMaterialInstanceDynamic*)K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_Array_IsValidIndex_ReturnValue = (bool)CallFunc_Array_IsValidIndex_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_Map_Values_Values_1 = (TArray<int32_t>)CallFunc_Map_Values_Values_1;
    params.CallFunc_Map_Values_Values_2 = (TArray<int32_t>)CallFunc_Map_Values_Values_2;
    params.CallFunc_Array_Get_Item_1 = (int32_t)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Get_Item_2 = (int32_t)CallFunc_Array_Get_Item_2;
    params.CallFunc_GetMaterial_ReturnValue_1 = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue_1;
    params.CallFunc_Array_IsValidIndex_ReturnValue_1 = (bool)CallFunc_Array_IsValidIndex_ReturnValue_1;
    params.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1 = (UMaterialInstanceDynamic*)K2Node_DynamicCast_AsMaterial_Instance_Dynamic_1;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_Array_IsValidIndex_ReturnValue_2 = (bool)CallFunc_Array_IsValidIndex_ReturnValue_2;
    params.CallFunc_GetMaterial_ReturnValue_2 = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue_2;
    params.K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2 = (UMaterialInstanceDynamic*)K2Node_DynamicCast_AsMaterial_Instance_Dynamic_2;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_IsValid_ReturnValue_3 = (bool)CallFunc_IsValid_ReturnValue_3;
    ProcessEvent(func, &params);
    CallFunc_Map_Values_Values_1 = params.CallFunc_Map_Values_Values_1;
    CallFunc_Map_Values_Values = params.CallFunc_Map_Values_Values;
    CallFunc_Map_Values_Values_2 = params.CallFunc_Map_Values_Values_2;
}
void ABP_LightFixture_Master_C::Shadow_Draw_Distance() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.Shadow Draw Distance"));
    struct Params_Shadow_Draw_Distance {
    }; // Size: 0x0
    Params_Shadow_Draw_Distance params{};
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::Mobility_Check(EComponentMobility::Type Mobility, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_2, USceneComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_2, USceneComponent* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Array_IsValidIndex_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_SetSceneComponentMobility_ReturnValue, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, bool CallFunc_IsValid_ReturnValue_2, USceneComponent* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.Mobility Check"));
    struct Params_Mobility_Check {
        EComponentMobility::Type Mobility; // 0x0
        char pad_1[0x3];
        int32_t Temp_int_Array_Index_Variable; // 0x4
        int32_t Temp_int_Loop_Counter_Variable; // 0x8
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        int32_t Temp_int_Array_Index_Variable_1; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x14
        char pad_15[0x3];
        int32_t Temp_int_Array_Index_Variable_2; // 0x18
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x20
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x24
        USceneComponent* CallFunc_Array_Get_Item; // 0x28
        int32_t CallFunc_Array_Length_ReturnValue; // 0x30
        bool CallFunc_Less_IntInt_ReturnValue; // 0x34
        bool CallFunc_Array_IsValidIndex_ReturnValue; // 0x35
        char pad_36[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x38
        char pad_3c[0x4];
        USceneComponent* CallFunc_Array_Get_Item_1; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x48
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x4c
        bool CallFunc_Array_IsValidIndex_ReturnValue_1; // 0x4d
        bool CallFunc_IsValid_ReturnValue_1; // 0x4e
        bool CallFunc_SetSceneComponentMobility_ReturnValue; // 0x4f
        TArray<USceneComponent*> CallFunc_GetChildrenComponents_Children; // 0x50
        bool CallFunc_IsValid_ReturnValue_2; // 0x60
        char pad_61[0x7];
        USceneComponent* CallFunc_Array_Get_Item_2; // 0x68
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x70
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x74
    }; // Size: 0x75
    Params_Mobility_Check params{};
    params.Mobility = (EComponentMobility::Type)Mobility;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Array_Get_Item = (USceneComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Array_IsValidIndex_ReturnValue = (bool)CallFunc_Array_IsValidIndex_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.CallFunc_Array_Get_Item_1 = (USceneComponent*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Array_IsValidIndex_ReturnValue_1 = (bool)CallFunc_Array_IsValidIndex_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_SetSceneComponentMobility_ReturnValue = (bool)CallFunc_SetSceneComponentMobility_ReturnValue;
    params.CallFunc_GetChildrenComponents_Children = (TArray<USceneComponent*>)CallFunc_GetChildrenComponents_Children;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_Array_Get_Item_2 = (USceneComponent*)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    ProcessEvent(func, &params);
    CallFunc_GetChildrenComponents_Children = params.CallFunc_GetChildrenComponents_Children;
}
void ABP_LightFixture_Master_C::SimpleLight_Struct(ULightComponent* Light) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.SimpleLight Struct"));
    struct Params_SimpleLight_Struct {
        ULightComponent* Light; // 0x0
    }; // Size: 0x8
    Params_SimpleLight_Struct params{};
    params.Light = (ULightComponent*)Light;
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::RT_Specific(UPointLightComponent* Light, float Attenuation_Threshold, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_Custom_Values_Result) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.RT Specific"));
    struct Params_RT_Specific {
        UPointLightComponent* Light; // 0x0
        float Attenuation_Threshold; // 0x8
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0xc
        char pad_d[0x3];
        float CallFunc_SelectFloat_ReturnValue; // 0x10
        float CallFunc_Custom_Values_Result; // 0x14
    }; // Size: 0x18
    Params_RT_Specific params{};
    params.Light = (UPointLightComponent*)Light;
    params.Attenuation_Threshold = (float)Attenuation_Threshold;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_SelectFloat_ReturnValue = (float)CallFunc_SelectFloat_ReturnValue;
    params.CallFunc_Custom_Values_Result = (float)CallFunc_Custom_Values_Result;
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::ExtDressing(FTransform CallFunc_K2_GetComponentToWorld_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, FVector CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, FVector CallFunc_Add_VectorVector_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, FRotator CallFunc_MakeRotator_ReturnValue, FTransform CallFunc_MakeTransform_ReturnValue, UChildActorComponent* CallFunc_AddComponent_ReturnValue, int32_t CallFunc_Conv_ByteToInt_ReturnValue) {}
void ABP_LightFixture_Master_C::SoundLOC(FVector& SoundLOC, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.SoundLOC"));
    struct Params_SoundLOC {
        FVector SoundLOC; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0xc
        bool CallFunc_IsValid_ReturnValue_1; // 0xd
    }; // Size: 0xe
    Params_SoundLOC params{};
    params.SoundLOC = (FVector)SoundLOC;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    ProcessEvent(func, &params);
    SoundLOC = params.SoundLOC;
}
void ABP_LightFixture_Master_C::Get_Parent(UMaterialInterface* MI, UMaterial*& Parent, UMaterial* K2Node_DynamicCast_AsMaterial, bool K2Node_DynamicCast_bSuccess, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_1, UMaterial* CallFunc_GetBaseMaterial_ReturnValue, UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess_2, UMaterial* CallFunc_GetBaseMaterial_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.Get Parent"));
    struct Params_Get_Parent {
        UMaterialInterface* MI; // 0x0
        UMaterial* Parent; // 0x8
        UMaterial* K2Node_DynamicCast_AsMaterial; // 0x10
        bool K2Node_DynamicCast_bSuccess; // 0x18
        char pad_19[0x7];
        UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic; // 0x20
        bool K2Node_DynamicCast_bSuccess_1; // 0x28
        char pad_29[0x7];
        UMaterial* CallFunc_GetBaseMaterial_ReturnValue; // 0x30
        UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance; // 0x38
        bool K2Node_DynamicCast_bSuccess_2; // 0x40
        char pad_41[0x7];
        UMaterial* CallFunc_GetBaseMaterial_ReturnValue_1; // 0x48
    }; // Size: 0x50
    Params_Get_Parent params{};
    params.MI = (UMaterialInterface*)MI;
    params.Parent = (UMaterial*)Parent;
    params.K2Node_DynamicCast_AsMaterial = (UMaterial*)K2Node_DynamicCast_AsMaterial;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.K2Node_DynamicCast_AsMaterial_Instance_Dynamic = (UMaterialInstanceDynamic*)K2Node_DynamicCast_AsMaterial_Instance_Dynamic;
    params.K2Node_DynamicCast_bSuccess_1 = (bool)K2Node_DynamicCast_bSuccess_1;
    params.CallFunc_GetBaseMaterial_ReturnValue = (UMaterial*)CallFunc_GetBaseMaterial_ReturnValue;
    params.K2Node_DynamicCast_AsMaterial_Instance = (UMaterialInstance*)K2Node_DynamicCast_AsMaterial_Instance;
    params.K2Node_DynamicCast_bSuccess_2 = (bool)K2Node_DynamicCast_bSuccess_2;
    params.CallFunc_GetBaseMaterial_ReturnValue_1 = (UMaterial*)CallFunc_GetBaseMaterial_ReturnValue_1;
    ProcessEvent(func, &params);
    Parent = params.Parent;
}
void ABP_LightFixture_Master_C::Custom_Values() {}
void ABP_LightFixture_Master_C::Set_Light_Values() {}
void ABP_LightFixture_Master_C::ReceiveBeginPlay0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::Run_Construction_Struct(FTransform Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, UNiagaraComponent* CallFunc_AddComponent_ReturnValue, FTransform Temp_struct_Variable_1, int32_t Temp_int_Array_Index_Variable, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_IsValid_ReturnValue_1, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, bool CallFunc_Contains_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool Temp_bool_Variable, TArray<float>& CallFunc_Map_Values_Values, TArray<UAkAudioEvent*>& CallFunc_Map_Keys_Keys, float CallFunc_Array_Get_Item_1, UAkAudioEvent* CallFunc_Array_Get_Item_2, UAkAudioEvent* CallFunc_Array_Get_Item_3, float CallFunc_Array_Get_Item_4, int32_t CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_AvaIsRunningCommandlet_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UAkAudioEvent* K2Node_Select_Default, float CallFunc_SelectFloat_ReturnValue, FVector CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, FRandomStream CallFunc_MakeRandomStream_RandomStream, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, FVector CallFunc_BreakTransform_Location_1, FRotator CallFunc_BreakTransform_Rotation_1, FVector CallFunc_BreakTransform_Scale_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, bool CallFunc_AvaIsRunningCommandlet_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_4, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue_1, FName CallFunc_Array_Get_Item_5, int32_t CallFunc_Array_Length_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Contains_ReturnValue_1, FName CallFunc_Conv_StringToName_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue_1, FTransform CallFunc_GetRelativeTransform_ReturnValue, FTransform CallFunc_MakeRelativeTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, int32_t Temp_int_Loop_Counter_Variable_1, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.Run Construction_Struct"));
    struct Params_Run_Construction_Struct {
        FTransform Temp_struct_Variable; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x30
        char pad_31[0x7];
        UNiagaraComponent* CallFunc_AddComponent_ReturnValue; // 0x38
        FTransform Temp_struct_Variable_1; // 0x40
        int32_t Temp_int_Array_Index_Variable; // 0x70
        char pad_74[0x4];
        UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1; // 0x78
        int32_t Temp_int_Loop_Counter_Variable; // 0x80
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x84
        int32_t Temp_int_Array_Index_Variable_1; // 0x88
        bool CallFunc_IsValid_ReturnValue_1; // 0x8c
        char pad_8d[0x3];
        TArray<FName> CallFunc_GetAllSocketNames_ReturnValue; // 0x90
        FName CallFunc_Array_Get_Item; // 0xa0
        int32_t CallFunc_Array_Length_ReturnValue; // 0xa8
        char pad_ac[0x4];
        FTransform CallFunc_GetSocketTransform_ReturnValue; // 0xb0
        FString CallFunc_Conv_NameToString_ReturnValue; // 0xe0
        FVector CallFunc_BreakTransform_Location; // 0xf0
        FRotator CallFunc_BreakTransform_Rotation; // 0xfc
        FVector CallFunc_BreakTransform_Scale; // 0x108
        bool CallFunc_Contains_ReturnValue; // 0x114
        char pad_115[0x3];
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x118
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0x124
        bool Temp_bool_Variable; // 0x1ac
        char pad_1ad[0x3];
        TArray<float> CallFunc_Map_Values_Values; // 0x1b0
        TArray<UAkAudioEvent*> CallFunc_Map_Keys_Keys; // 0x1c0
        float CallFunc_Array_Get_Item_1; // 0x1d0
        char pad_1d4[0x4];
        UAkAudioEvent* CallFunc_Array_Get_Item_2; // 0x1d8
        UAkAudioEvent* CallFunc_Array_Get_Item_3; // 0x1e0
        float CallFunc_Array_Get_Item_4; // 0x1e8
        int32_t CallFunc_Conv_ByteToInt_ReturnValue; // 0x1ec
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x1f0
        bool CallFunc_EqualEqual_IntInt_ReturnValue_1; // 0x1f1
        bool CallFunc_EqualEqual_IntInt_ReturnValue_2; // 0x1f2
        bool CallFunc_EqualEqual_IntInt_ReturnValue_3; // 0x1f3
        bool CallFunc_EqualEqual_IntInt_ReturnValue_4; // 0x1f4
        bool CallFunc_AvaIsRunningCommandlet_ReturnValue; // 0x1f5
        bool CallFunc_BooleanOR_ReturnValue; // 0x1f6
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x1f7
        bool CallFunc_BooleanOR_ReturnValue_2; // 0x1f8
        bool CallFunc_BooleanOR_ReturnValue_3; // 0x1f9
        bool CallFunc_Not_PreBool_ReturnValue; // 0x1fa
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x1fb
        char pad_1fc[0x4];
        UAkAudioEvent* K2Node_Select_Default; // 0x200
        float CallFunc_SelectFloat_ReturnValue; // 0x208
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x20c
        bool CallFunc_Not_PreBool_ReturnValue_2; // 0x218
        char pad_219[0x3];
        FRandomStream CallFunc_MakeRandomStream_RandomStream; // 0x21c
        bool CallFunc_BooleanAND_ReturnValue; // 0x224
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x225
        bool CallFunc_BooleanAND_ReturnValue_2; // 0x226
        char pad_227[0x1];
        FVector CallFunc_BreakTransform_Location_1; // 0x228
        FRotator CallFunc_BreakTransform_Rotation_1; // 0x234
        FVector CallFunc_BreakTransform_Scale_1; // 0x240
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1; // 0x24c
        bool CallFunc_AvaIsRunningCommandlet_ReturnValue_1; // 0x2d4
        bool CallFunc_BooleanOR_ReturnValue_4; // 0x2d5
        char pad_2d6[0x2];
        TArray<FName> CallFunc_GetAllSocketNames_ReturnValue_1; // 0x2d8
        FName CallFunc_Array_Get_Item_5; // 0x2e8
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x2f0
        char pad_2f4[0x4];
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x2f8
        bool CallFunc_Less_IntInt_ReturnValue; // 0x308
        bool CallFunc_Contains_ReturnValue_1; // 0x309
        char pad_30a[0x2];
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x30c
        char pad_314[0xc];
        FTransform CallFunc_GetSocketTransform_ReturnValue_1; // 0x320
        FTransform CallFunc_GetRelativeTransform_ReturnValue; // 0x350
        FTransform CallFunc_MakeRelativeTransform_ReturnValue; // 0x380
        bool CallFunc_BooleanAND_ReturnValue_3; // 0x3b0
        char pad_3b1[0x3];
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x3b4
        bool CallFunc_BooleanAND_ReturnValue_4; // 0x3b8
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x3b9
        char pad_3ba[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x3bc
        bool CallFunc_BooleanAND_ReturnValue_5; // 0x3c0
        bool CallFunc_BooleanAND_ReturnValue_6; // 0x3c1
        bool CallFunc_K2_AttachToComponent_ReturnValue; // 0x3c2
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x3c3
    }; // Size: 0x3c4
    Params_Run_Construction_Struct params{};
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue = (UNiagaraComponent*)CallFunc_AddComponent_ReturnValue;
    params.Temp_struct_Variable_1 = (FTransform)Temp_struct_Variable_1;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_AddComponent_ReturnValue_1 = (UStaticMeshComponent*)CallFunc_AddComponent_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetAllSocketNames_ReturnValue = (TArray<FName>)CallFunc_GetAllSocketNames_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GetSocketTransform_ReturnValue = (FTransform)CallFunc_GetSocketTransform_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_BreakTransform_Location = (FVector)CallFunc_BreakTransform_Location;
    params.CallFunc_BreakTransform_Rotation = (FRotator)CallFunc_BreakTransform_Rotation;
    params.CallFunc_BreakTransform_Scale = (FVector)CallFunc_BreakTransform_Scale;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_Map_Values_Values = (TArray<float>)CallFunc_Map_Values_Values;
    params.CallFunc_Map_Keys_Keys = (TArray<UAkAudioEvent*>)CallFunc_Map_Keys_Keys;
    params.CallFunc_Array_Get_Item_1 = (float)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Get_Item_2 = (UAkAudioEvent*)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Get_Item_3 = (UAkAudioEvent*)CallFunc_Array_Get_Item_3;
    params.CallFunc_Array_Get_Item_4 = (float)CallFunc_Array_Get_Item_4;
    params.CallFunc_Conv_ByteToInt_ReturnValue = (int32_t)CallFunc_Conv_ByteToInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_1 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_1;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_2 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_2;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_3 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_3;
    params.CallFunc_EqualEqual_IntInt_ReturnValue_4 = (bool)CallFunc_EqualEqual_IntInt_ReturnValue_4;
    params.CallFunc_AvaIsRunningCommandlet_ReturnValue = (bool)CallFunc_AvaIsRunningCommandlet_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_2 = (bool)CallFunc_BooleanOR_ReturnValue_2;
    params.CallFunc_BooleanOR_ReturnValue_3 = (bool)CallFunc_BooleanOR_ReturnValue_3;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.K2Node_Select_Default = (UAkAudioEvent*)K2Node_Select_Default;
    params.CallFunc_SelectFloat_ReturnValue = (float)CallFunc_SelectFloat_ReturnValue;
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_2 = (bool)CallFunc_Not_PreBool_ReturnValue_2;
    params.CallFunc_MakeRandomStream_RandomStream = (FRandomStream)CallFunc_MakeRandomStream_RandomStream;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue_2 = (bool)CallFunc_BooleanAND_ReturnValue_2;
    params.CallFunc_BreakTransform_Location_1 = (FVector)CallFunc_BreakTransform_Location_1;
    params.CallFunc_BreakTransform_Rotation_1 = (FRotator)CallFunc_BreakTransform_Rotation_1;
    params.CallFunc_BreakTransform_Scale_1 = (FVector)CallFunc_BreakTransform_Scale_1;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
    params.CallFunc_AvaIsRunningCommandlet_ReturnValue_1 = (bool)CallFunc_AvaIsRunningCommandlet_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_4 = (bool)CallFunc_BooleanOR_ReturnValue_4;
    params.CallFunc_GetAllSocketNames_ReturnValue_1 = (TArray<FName>)CallFunc_GetAllSocketNames_ReturnValue_1;
    params.CallFunc_Array_Get_Item_5 = (FName)CallFunc_Array_Get_Item_5;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    params.CallFunc_GetSocketTransform_ReturnValue_1 = (FTransform)CallFunc_GetSocketTransform_ReturnValue_1;
    params.CallFunc_GetRelativeTransform_ReturnValue = (FTransform)CallFunc_GetRelativeTransform_ReturnValue;
    params.CallFunc_MakeRelativeTransform_ReturnValue = (FTransform)CallFunc_MakeRelativeTransform_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_3 = (bool)CallFunc_BooleanAND_ReturnValue_3;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_BooleanAND_ReturnValue_4 = (bool)CallFunc_BooleanAND_ReturnValue_4;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue_5 = (bool)CallFunc_BooleanAND_ReturnValue_5;
    params.CallFunc_BooleanAND_ReturnValue_6 = (bool)CallFunc_BooleanAND_ReturnValue_6;
    params.CallFunc_K2_AttachToComponent_ReturnValue = (bool)CallFunc_K2_AttachToComponent_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetAllSocketNames_ReturnValue = params.CallFunc_GetAllSocketNames_ReturnValue;
    CallFunc_GetAllSocketNames_ReturnValue_1 = params.CallFunc_GetAllSocketNames_ReturnValue_1;
    CallFunc_Map_Values_Values = params.CallFunc_Map_Values_Values;
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
}
void ABP_LightFixture_Master_C::DayNightLightSwitch() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.DayNightLightSwitch"));
    struct Params_DayNightLightSwitch {
    }; // Size: 0x0
    Params_DayNightLightSwitch params{};
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::Particle_Struct(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Array_Index_Variable_2, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, FTransform CallFunc_GetRelativeTransform_ReturnValue, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FTransform CallFunc_MakeRelativeTransform_ReturnValue, UMaterialBillboardComponent* CallFunc_AddComponent_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Contains_ReturnValue, int32_t CallFunc_Array_LastIndex_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_3, FTransform CallFunc_GetRelativeTransform_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, UStaticMeshComponent* CallFunc_Array_Get_Item_1, FTransform CallFunc_GetRelativeTransform_ReturnValue_2, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, FName CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_1, FTransform CallFunc_GetSocketTransform_ReturnValue_1, FTransform CallFunc_MakeRelativeTransform_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue_1, UMaterialBillboardComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_Contains_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Array_Add_ReturnValue_2, int32_t CallFunc_Array_LastIndex_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, int32_t CallFunc_Array_Add_ReturnValue_3, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_4, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, int32_t CallFunc_Array_Add_ReturnValue_5, float CallFunc_BreakVector_X_2, float CallFunc_BreakVector_Y_2, float CallFunc_BreakVector_Z_2, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, FVector CallFunc_MakeVector_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, float CallFunc_Add_FloatFloat_ReturnValue_2, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue_2, FName CallFunc_Array_Get_Item_3, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2, FTransform CallFunc_GetSocketTransform_ReturnValue_2, bool CallFunc_K2_AttachToComponent_ReturnValue_2, FTransform CallFunc_MakeRelativeTransform_ReturnValue_2, FString CallFunc_Conv_NameToString_ReturnValue_2, UNiagaraComponent* CallFunc_AddComponent_ReturnValue_2, bool CallFunc_Contains_ReturnValue_2, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.Particle Struct"));
    struct Params_Particle_Struct {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Array_Index_Variable_1; // 0xc
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x10
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x14
        int32_t Temp_int_Array_Index_Variable_2; // 0x18
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x20
        int32_t Temp_int_Loop_Counter_Variable_3; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x28
        char pad_2c[0x4];
        FTransform CallFunc_GetRelativeTransform_ReturnValue; // 0x30
        TArray<FName> CallFunc_GetAllSocketNames_ReturnValue; // 0x60
        FName CallFunc_Array_Get_Item; // 0x70
        int32_t CallFunc_Array_Length_ReturnValue; // 0x78
        char pad_7c[0x4];
        FTransform CallFunc_GetSocketTransform_ReturnValue; // 0x80
        bool CallFunc_Less_IntInt_ReturnValue; // 0xb0
        char pad_b1[0xf];
        FTransform CallFunc_MakeRelativeTransform_ReturnValue; // 0xc0
        UMaterialBillboardComponent* CallFunc_AddComponent_ReturnValue; // 0xf0
        FString CallFunc_Conv_NameToString_ReturnValue; // 0xf8
        bool CallFunc_Contains_ReturnValue; // 0x108
        char pad_109[0x3];
        int32_t CallFunc_Array_LastIndex_ReturnValue; // 0x10c
        int32_t CallFunc_Array_Add_ReturnValue; // 0x110
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x114
        char pad_115[0x3];
        int32_t Temp_int_Array_Index_Variable_3; // 0x118
        char pad_11c[0x4];
        FTransform CallFunc_GetRelativeTransform_ReturnValue_1; // 0x120
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0x150
        float CallFunc_BreakVector_X; // 0x154
        float CallFunc_BreakVector_Y; // 0x158
        float CallFunc_BreakVector_Z; // 0x15c
        UStaticMeshComponent* CallFunc_Array_Get_Item_1; // 0x160
        char pad_168[0x8];
        FTransform CallFunc_GetRelativeTransform_ReturnValue_2; // 0x170
        TArray<FName> CallFunc_GetAllSocketNames_ReturnValue_1; // 0x1a0
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x1b0
        FName CallFunc_Array_Get_Item_2; // 0x1b4
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x1bc
        char pad_1bd[0x3];
        FTransform CallFunc_GetSocketTransform_ReturnValue_1; // 0x1c0
        FTransform CallFunc_MakeRelativeTransform_ReturnValue_1; // 0x1f0
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x220
        UMaterialBillboardComponent* CallFunc_AddComponent_ReturnValue_1; // 0x230
        bool CallFunc_Contains_ReturnValue_1; // 0x238
        char pad_239[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x23c
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x240
        char pad_241[0x3];
        int32_t CallFunc_Array_Add_ReturnValue_2; // 0x244
        int32_t CallFunc_Array_LastIndex_ReturnValue_1; // 0x248
        bool CallFunc_Greater_IntInt_ReturnValue_1; // 0x24c
        char pad_24d[0x3];
        int32_t CallFunc_Array_Add_ReturnValue_3; // 0x250
        char pad_254[0x4];
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue; // 0x258
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1; // 0x260
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x268
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x270
        bool CallFunc_K2_AttachToComponent_ReturnValue; // 0x278
        char pad_279[0x3];
        int32_t CallFunc_Array_Add_ReturnValue_4; // 0x27c
        float CallFunc_BreakVector_X_1; // 0x280
        float CallFunc_BreakVector_Y_1; // 0x284
        float CallFunc_BreakVector_Z_1; // 0x288
        bool CallFunc_IsValid_ReturnValue; // 0x28c
        char pad_28d[0x3];
        float CallFunc_Add_FloatFloat_ReturnValue; // 0x290
        FVector CallFunc_MakeVector_ReturnValue; // 0x294
        bool CallFunc_K2_AttachToComponent_ReturnValue_1; // 0x2a0
        char pad_2a1[0x3];
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0x2a4
        int32_t CallFunc_Array_Add_ReturnValue_5; // 0x32c
        float CallFunc_BreakVector_X_2; // 0x330
        float CallFunc_BreakVector_Y_2; // 0x334
        float CallFunc_BreakVector_Z_2; // 0x338
        bool CallFunc_IsValid_ReturnValue_1; // 0x33c
        char pad_33d[0x3];
        float CallFunc_Add_FloatFloat_ReturnValue_1; // 0x340
        FVector CallFunc_MakeVector_ReturnValue_1; // 0x344
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1; // 0x350
        float CallFunc_Add_FloatFloat_ReturnValue_2; // 0x3d8
        char pad_3dc[0x4];
        TArray<FName> CallFunc_GetAllSocketNames_ReturnValue_2; // 0x3e0
        FVector CallFunc_MakeVector_ReturnValue_2; // 0x3f0
        FName CallFunc_Array_Get_Item_3; // 0x3fc
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_2; // 0x404
        char pad_48c[0x4];
        FTransform CallFunc_GetSocketTransform_ReturnValue_2; // 0x490
        bool CallFunc_K2_AttachToComponent_ReturnValue_2; // 0x4c0
        char pad_4c1[0xf];
        FTransform CallFunc_MakeRelativeTransform_ReturnValue_2; // 0x4d0
        FString CallFunc_Conv_NameToString_ReturnValue_2; // 0x500
        UNiagaraComponent* CallFunc_AddComponent_ReturnValue_2; // 0x510
        bool CallFunc_Contains_ReturnValue_2; // 0x518
        char pad_519[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0x51c
        bool CallFunc_Less_IntInt_ReturnValue_3; // 0x520
    }; // Size: 0x521
    Params_Particle_Struct params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Loop_Counter_Variable_3 = (int32_t)Temp_int_Loop_Counter_Variable_3;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.CallFunc_GetRelativeTransform_ReturnValue = (FTransform)CallFunc_GetRelativeTransform_ReturnValue;
    params.CallFunc_GetAllSocketNames_ReturnValue = (TArray<FName>)CallFunc_GetAllSocketNames_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_GetSocketTransform_ReturnValue = (FTransform)CallFunc_GetSocketTransform_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_MakeRelativeTransform_ReturnValue = (FTransform)CallFunc_MakeRelativeTransform_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue = (UMaterialBillboardComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_Array_LastIndex_ReturnValue = (int32_t)CallFunc_Array_LastIndex_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_3 = (int32_t)Temp_int_Array_Index_Variable_3;
    params.CallFunc_GetRelativeTransform_ReturnValue_1 = (FTransform)CallFunc_GetRelativeTransform_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.CallFunc_BreakVector_X = (float)CallFunc_BreakVector_X;
    params.CallFunc_BreakVector_Y = (float)CallFunc_BreakVector_Y;
    params.CallFunc_BreakVector_Z = (float)CallFunc_BreakVector_Z;
    params.CallFunc_Array_Get_Item_1 = (UStaticMeshComponent*)CallFunc_Array_Get_Item_1;
    params.CallFunc_GetRelativeTransform_ReturnValue_2 = (FTransform)CallFunc_GetRelativeTransform_ReturnValue_2;
    params.CallFunc_GetAllSocketNames_ReturnValue_1 = (TArray<FName>)CallFunc_GetAllSocketNames_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Array_Get_Item_2 = (FName)CallFunc_Array_Get_Item_2;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_GetSocketTransform_ReturnValue_1 = (FTransform)CallFunc_GetSocketTransform_ReturnValue_1;
    params.CallFunc_MakeRelativeTransform_ReturnValue_1 = (FTransform)CallFunc_MakeRelativeTransform_ReturnValue_1;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.CallFunc_AddComponent_ReturnValue_1 = (UMaterialBillboardComponent*)CallFunc_AddComponent_ReturnValue_1;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Array_Add_ReturnValue_2 = (int32_t)CallFunc_Array_Add_ReturnValue_2;
    params.CallFunc_Array_LastIndex_ReturnValue_1 = (int32_t)CallFunc_Array_LastIndex_ReturnValue_1;
    params.CallFunc_Greater_IntInt_ReturnValue_1 = (bool)CallFunc_Greater_IntInt_ReturnValue_1;
    params.CallFunc_Array_Add_ReturnValue_3 = (int32_t)CallFunc_Array_Add_ReturnValue_3;
    params.CallFunc_GetMaterial_ReturnValue = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue;
    params.CallFunc_GetMaterial_ReturnValue_1 = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue_1;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
    params.CallFunc_K2_AttachToComponent_ReturnValue = (bool)CallFunc_K2_AttachToComponent_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue_4 = (int32_t)CallFunc_Array_Add_ReturnValue_4;
    params.CallFunc_BreakVector_X_1 = (float)CallFunc_BreakVector_X_1;
    params.CallFunc_BreakVector_Y_1 = (float)CallFunc_BreakVector_Y_1;
    params.CallFunc_BreakVector_Z_1 = (float)CallFunc_BreakVector_Z_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Add_FloatFloat_ReturnValue = (float)CallFunc_Add_FloatFloat_ReturnValue;
    params.CallFunc_MakeVector_ReturnValue = (FVector)CallFunc_MakeVector_ReturnValue;
    params.CallFunc_K2_AttachToComponent_ReturnValue_1 = (bool)CallFunc_K2_AttachToComponent_ReturnValue_1;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    params.CallFunc_Array_Add_ReturnValue_5 = (int32_t)CallFunc_Array_Add_ReturnValue_5;
    params.CallFunc_BreakVector_X_2 = (float)CallFunc_BreakVector_X_2;
    params.CallFunc_BreakVector_Y_2 = (float)CallFunc_BreakVector_Y_2;
    params.CallFunc_BreakVector_Z_2 = (float)CallFunc_BreakVector_Z_2;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_Add_FloatFloat_ReturnValue_1 = (float)CallFunc_Add_FloatFloat_ReturnValue_1;
    params.CallFunc_MakeVector_ReturnValue_1 = (FVector)CallFunc_MakeVector_ReturnValue_1;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
    params.CallFunc_Add_FloatFloat_ReturnValue_2 = (float)CallFunc_Add_FloatFloat_ReturnValue_2;
    params.CallFunc_GetAllSocketNames_ReturnValue_2 = (TArray<FName>)CallFunc_GetAllSocketNames_ReturnValue_2;
    params.CallFunc_MakeVector_ReturnValue_2 = (FVector)CallFunc_MakeVector_ReturnValue_2;
    params.CallFunc_Array_Get_Item_3 = (FName)CallFunc_Array_Get_Item_3;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_2 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_2;
    params.CallFunc_GetSocketTransform_ReturnValue_2 = (FTransform)CallFunc_GetSocketTransform_ReturnValue_2;
    params.CallFunc_K2_AttachToComponent_ReturnValue_2 = (bool)CallFunc_K2_AttachToComponent_ReturnValue_2;
    params.CallFunc_MakeRelativeTransform_ReturnValue_2 = (FTransform)CallFunc_MakeRelativeTransform_ReturnValue_2;
    params.CallFunc_Conv_NameToString_ReturnValue_2 = (FString)CallFunc_Conv_NameToString_ReturnValue_2;
    params.CallFunc_AddComponent_ReturnValue_2 = (UNiagaraComponent*)CallFunc_AddComponent_ReturnValue_2;
    params.CallFunc_Contains_ReturnValue_2 = (bool)CallFunc_Contains_ReturnValue_2;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_Less_IntInt_ReturnValue_3 = (bool)CallFunc_Less_IntInt_ReturnValue_3;
    ProcessEvent(func, &params);
    CallFunc_GetAllSocketNames_ReturnValue = params.CallFunc_GetAllSocketNames_ReturnValue;
    CallFunc_GetAllSocketNames_ReturnValue_1 = params.CallFunc_GetAllSocketNames_ReturnValue_1;
    CallFunc_GetAllSocketNames_ReturnValue_2 = params.CallFunc_GetAllSocketNames_ReturnValue_2;
}
void ABP_LightFixture_Master_C::Enable_Flicker(bool Enable_Flicker, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.Enable Flicker"));
    struct Params_Enable_Flicker {
        bool Enable_Flicker; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x1
        bool CallFunc_BooleanAND_ReturnValue; // 0x2
    }; // Size: 0x3
    Params_Enable_Flicker params{};
    params.Enable_Flicker = (bool)Enable_Flicker;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::Chain_Struct(FTransform Temp_struct_Variable, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_MakeVector_ReturnValue, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_Variable, int32_t CallFunc_Array_LastIndex_ReturnValue) {}
void ABP_LightFixture_Master_C::Candle_Struct(int32_t Temp_int_Array_Index_Variable, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_IsValid_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float K2Node_MathExpression_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, int32_t Temp_int_Variable, bool Temp_bool_Variable, TArray<void*>& K2Node_Select_Default, int32_t Temp_int_Loop_Counter_Variable) {}
void ABP_LightFixture_Master_C::Light_Struct(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, FTransform Temp_struct_Variable, UDayNightLocalLightControllerComponent* CallFunc_AddComponent_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, int32_t CallFunc_Conv_ByteToInt_ReturnValue, FName CallFunc_Array_Get_Item, FSTR_LightFixtureDefaults CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float CallFunc_Custom_Values_Result, int32_t CallFunc_Conv_ByteToInt_ReturnValue_1, float CallFunc_Custom_Values_Result_1, FName CallFunc_Array_Get_Item_1, float CallFunc_Custom_Values_Result_2, FSTR_LightFixtureDefaults CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, float CallFunc_Custom_Values_Result_3, float CallFunc_Custom_Values_Result_4, float CallFunc_Custom_Values_Result_5, USpotLightComponent* CallFunc_AddComponent_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, ALightClippingVolume* CallFunc_GetLightClippingVolumeSource_LightClippingVolumeActor, bool CallFunc_AssignLightClippingVolumeSource_bSuccess, int32_t CallFunc_FindAndAssignLightClippingVolumeSource_AssignedLights, bool CallFunc_AssignLightClippingPlanesSource_bSuccess, ALightClippingPlanes* CallFunc_GetLightClippingPlanesSource_LightClippingPlanesActor, int32_t CallFunc_FindAndAssignLightClippingPlanesSource_AssignedLights, FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult, bool CallFunc_SetAnimatedLightIntensity_ReturnValue, float CallFunc_FClamp_ReturnValue_2, FTransform Temp_struct_Variable_1, bool CallFunc_AssignLightClippingVolumeSource_bSuccess_1, ALightClippingVolume* CallFunc_GetLightClippingVolumeSource_LightClippingVolumeActor_1, UAnimatedLightComponent* CallFunc_AddComponent_ReturnValue_2, int32_t CallFunc_FindAndAssignLightClippingVolumeSource_AssignedLights_1, bool CallFunc_AssignLightClippingPlanesSource_bSuccess_1, ALightClippingPlanes* CallFunc_GetLightClippingPlanesSource_LightClippingPlanesActor_1, int32_t CallFunc_FindAndAssignLightClippingPlanesSource_AssignedLights_1, FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult, bool CallFunc_SetAnimatedLightColor_ReturnValue, bool CallFunc_SetAnimatedLightIntensity_ReturnValue_1, FHitResult CallFunc_K2_AddRelativeLocation_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_SetAnimatedLightColor_ReturnValue_1, FHitResult CallFunc_K2_AddRelativeLocation_SweepHitResult_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_3, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue, FName CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, FName CallFunc_Conv_StringToName_ReturnValue, FTransform CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_Contains_ReturnValue, UPointLightComponent* CallFunc_AddComponent_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.Light Struct"));
    struct Params_Light_Struct {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        char pad_c[0x4];
        FTransform Temp_struct_Variable; // 0x10
        UDayNightLocalLightControllerComponent* CallFunc_AddComponent_ReturnValue; // 0x40
        float CallFunc_RandomFloatInRangeFromStream_ReturnValue; // 0x48
        float CallFunc_FClamp_ReturnValue; // 0x4c
        float CallFunc_FClamp_ReturnValue_1; // 0x50
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue; // 0x54
        bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1; // 0x55
        char pad_56[0x2];
        int32_t CallFunc_Conv_ByteToInt_ReturnValue; // 0x58
        FName CallFunc_Array_Get_Item; // 0x5c
        FSTR_LightFixtureDefaults CallFunc_GetDataTableRowFromName_OutRow; // 0x64
        bool CallFunc_GetDataTableRowFromName_ReturnValue; // 0x88
        char pad_89[0x3];
        float CallFunc_Custom_Values_Result; // 0x8c
        int32_t CallFunc_Conv_ByteToInt_ReturnValue_1; // 0x90
        float CallFunc_Custom_Values_Result_1; // 0x94
        FName CallFunc_Array_Get_Item_1; // 0x98
        float CallFunc_Custom_Values_Result_2; // 0xa0
        FSTR_LightFixtureDefaults CallFunc_GetDataTableRowFromName_OutRow_1; // 0xa4
        bool CallFunc_GetDataTableRowFromName_ReturnValue_1; // 0xc8
        bool CallFunc_K2_AttachToComponent_ReturnValue; // 0xc9
        char pad_ca[0x2];
        float CallFunc_Custom_Values_Result_3; // 0xcc
        float CallFunc_Custom_Values_Result_4; // 0xd0
        float CallFunc_Custom_Values_Result_5; // 0xd4
        USpotLightComponent* CallFunc_AddComponent_ReturnValue_1; // 0xd8
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0xe0
        float CallFunc_Multiply_FloatFloat_ReturnValue_1; // 0xe4
        ALightClippingVolume* CallFunc_GetLightClippingVolumeSource_LightClippingVolumeActor; // 0xe8
        bool CallFunc_AssignLightClippingVolumeSource_bSuccess; // 0xf0
        char pad_f1[0x3];
        int32_t CallFunc_FindAndAssignLightClippingVolumeSource_AssignedLights; // 0xf4
        bool CallFunc_AssignLightClippingPlanesSource_bSuccess; // 0xf8
        char pad_f9[0x7];
        ALightClippingPlanes* CallFunc_GetLightClippingPlanesSource_LightClippingPlanesActor; // 0x100
        int32_t CallFunc_FindAndAssignLightClippingPlanesSource_AssignedLights; // 0x108
        FHitResult CallFunc_K2_SetRelativeRotation_SweepHitResult; // 0x10c
        bool CallFunc_SetAnimatedLightIntensity_ReturnValue; // 0x194
        char pad_195[0x3];
        float CallFunc_FClamp_ReturnValue_2; // 0x198
        char pad_19c[0x4];
        FTransform Temp_struct_Variable_1; // 0x1a0
        bool CallFunc_AssignLightClippingVolumeSource_bSuccess_1; // 0x1d0
        char pad_1d1[0x7];
        ALightClippingVolume* CallFunc_GetLightClippingVolumeSource_LightClippingVolumeActor_1; // 0x1d8
        UAnimatedLightComponent* CallFunc_AddComponent_ReturnValue_2; // 0x1e0
        int32_t CallFunc_FindAndAssignLightClippingVolumeSource_AssignedLights_1; // 0x1e8
        bool CallFunc_AssignLightClippingPlanesSource_bSuccess_1; // 0x1ec
        char pad_1ed[0x3];
        ALightClippingPlanes* CallFunc_GetLightClippingPlanesSource_LightClippingPlanesActor_1; // 0x1f0
        int32_t CallFunc_FindAndAssignLightClippingPlanesSource_AssignedLights_1; // 0x1f8
        FHitResult CallFunc_K2_AddRelativeRotation_SweepHitResult; // 0x1fc
        bool CallFunc_SetAnimatedLightColor_ReturnValue; // 0x284
        bool CallFunc_SetAnimatedLightIntensity_ReturnValue_1; // 0x285
        char pad_286[0x2];
        FHitResult CallFunc_K2_AddRelativeLocation_SweepHitResult; // 0x288
        bool CallFunc_K2_AttachToComponent_ReturnValue_1; // 0x310
        bool CallFunc_Not_PreBool_ReturnValue; // 0x311
        bool CallFunc_K2_AttachToComponent_ReturnValue_2; // 0x312
        bool CallFunc_SetAnimatedLightColor_ReturnValue_1; // 0x313
        FHitResult CallFunc_K2_AddRelativeLocation_SweepHitResult_1; // 0x314
        bool CallFunc_BooleanOR_ReturnValue; // 0x39c
        bool CallFunc_K2_AttachToComponent_ReturnValue_3; // 0x39d
        char pad_39e[0x2];
        TArray<FName> CallFunc_GetAllSocketNames_ReturnValue; // 0x3a0
        FName CallFunc_Array_Get_Item_2; // 0x3b0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x3b8
        char pad_3bc[0x4];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x3c0
        bool CallFunc_Less_IntInt_ReturnValue; // 0x3d0
        char pad_3d1[0x3];
        FName CallFunc_Conv_StringToName_ReturnValue; // 0x3d4
        char pad_3dc[0x4];
        FTransform CallFunc_GetSocketTransform_ReturnValue; // 0x3e0
        bool CallFunc_Contains_ReturnValue; // 0x410
        char pad_411[0x7];
        UPointLightComponent* CallFunc_AddComponent_ReturnValue_3; // 0x418
    }; // Size: 0x420
    Params_Light_Struct params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_AddComponent_ReturnValue = (UDayNightLocalLightControllerComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_RandomFloatInRangeFromStream_ReturnValue = (float)CallFunc_RandomFloatInRangeFromStream_ReturnValue;
    params.CallFunc_FClamp_ReturnValue = (float)CallFunc_FClamp_ReturnValue;
    params.CallFunc_FClamp_ReturnValue_1 = (float)CallFunc_FClamp_ReturnValue_1;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue;
    params.CallFunc_GreaterEqual_FloatFloat_ReturnValue_1 = (bool)CallFunc_GreaterEqual_FloatFloat_ReturnValue_1;
    params.CallFunc_Conv_ByteToInt_ReturnValue = (int32_t)CallFunc_Conv_ByteToInt_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_GetDataTableRowFromName_OutRow = (FSTR_LightFixtureDefaults)CallFunc_GetDataTableRowFromName_OutRow;
    params.CallFunc_GetDataTableRowFromName_ReturnValue = (bool)CallFunc_GetDataTableRowFromName_ReturnValue;
    params.CallFunc_Custom_Values_Result = (float)CallFunc_Custom_Values_Result;
    params.CallFunc_Conv_ByteToInt_ReturnValue_1 = (int32_t)CallFunc_Conv_ByteToInt_ReturnValue_1;
    params.CallFunc_Custom_Values_Result_1 = (float)CallFunc_Custom_Values_Result_1;
    params.CallFunc_Array_Get_Item_1 = (FName)CallFunc_Array_Get_Item_1;
    params.CallFunc_Custom_Values_Result_2 = (float)CallFunc_Custom_Values_Result_2;
    params.CallFunc_GetDataTableRowFromName_OutRow_1 = (FSTR_LightFixtureDefaults)CallFunc_GetDataTableRowFromName_OutRow_1;
    params.CallFunc_GetDataTableRowFromName_ReturnValue_1 = (bool)CallFunc_GetDataTableRowFromName_ReturnValue_1;
    params.CallFunc_K2_AttachToComponent_ReturnValue = (bool)CallFunc_K2_AttachToComponent_ReturnValue;
    params.CallFunc_Custom_Values_Result_3 = (float)CallFunc_Custom_Values_Result_3;
    params.CallFunc_Custom_Values_Result_4 = (float)CallFunc_Custom_Values_Result_4;
    params.CallFunc_Custom_Values_Result_5 = (float)CallFunc_Custom_Values_Result_5;
    params.CallFunc_AddComponent_ReturnValue_1 = (USpotLightComponent*)CallFunc_AddComponent_ReturnValue_1;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Multiply_FloatFloat_ReturnValue_1 = (float)CallFunc_Multiply_FloatFloat_ReturnValue_1;
    params.CallFunc_GetLightClippingVolumeSource_LightClippingVolumeActor = (ALightClippingVolume*)CallFunc_GetLightClippingVolumeSource_LightClippingVolumeActor;
    params.CallFunc_AssignLightClippingVolumeSource_bSuccess = (bool)CallFunc_AssignLightClippingVolumeSource_bSuccess;
    params.CallFunc_FindAndAssignLightClippingVolumeSource_AssignedLights = (int32_t)CallFunc_FindAndAssignLightClippingVolumeSource_AssignedLights;
    params.CallFunc_AssignLightClippingPlanesSource_bSuccess = (bool)CallFunc_AssignLightClippingPlanesSource_bSuccess;
    params.CallFunc_GetLightClippingPlanesSource_LightClippingPlanesActor = (ALightClippingPlanes*)CallFunc_GetLightClippingPlanesSource_LightClippingPlanesActor;
    params.CallFunc_FindAndAssignLightClippingPlanesSource_AssignedLights = (int32_t)CallFunc_FindAndAssignLightClippingPlanesSource_AssignedLights;
    params.CallFunc_K2_SetRelativeRotation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeRotation_SweepHitResult;
    params.CallFunc_SetAnimatedLightIntensity_ReturnValue = (bool)CallFunc_SetAnimatedLightIntensity_ReturnValue;
    params.CallFunc_FClamp_ReturnValue_2 = (float)CallFunc_FClamp_ReturnValue_2;
    params.Temp_struct_Variable_1 = (FTransform)Temp_struct_Variable_1;
    params.CallFunc_AssignLightClippingVolumeSource_bSuccess_1 = (bool)CallFunc_AssignLightClippingVolumeSource_bSuccess_1;
    params.CallFunc_GetLightClippingVolumeSource_LightClippingVolumeActor_1 = (ALightClippingVolume*)CallFunc_GetLightClippingVolumeSource_LightClippingVolumeActor_1;
    params.CallFunc_AddComponent_ReturnValue_2 = (UAnimatedLightComponent*)CallFunc_AddComponent_ReturnValue_2;
    params.CallFunc_FindAndAssignLightClippingVolumeSource_AssignedLights_1 = (int32_t)CallFunc_FindAndAssignLightClippingVolumeSource_AssignedLights_1;
    params.CallFunc_AssignLightClippingPlanesSource_bSuccess_1 = (bool)CallFunc_AssignLightClippingPlanesSource_bSuccess_1;
    params.CallFunc_GetLightClippingPlanesSource_LightClippingPlanesActor_1 = (ALightClippingPlanes*)CallFunc_GetLightClippingPlanesSource_LightClippingPlanesActor_1;
    params.CallFunc_FindAndAssignLightClippingPlanesSource_AssignedLights_1 = (int32_t)CallFunc_FindAndAssignLightClippingPlanesSource_AssignedLights_1;
    params.CallFunc_K2_AddRelativeRotation_SweepHitResult = (FHitResult)CallFunc_K2_AddRelativeRotation_SweepHitResult;
    params.CallFunc_SetAnimatedLightColor_ReturnValue = (bool)CallFunc_SetAnimatedLightColor_ReturnValue;
    params.CallFunc_SetAnimatedLightIntensity_ReturnValue_1 = (bool)CallFunc_SetAnimatedLightIntensity_ReturnValue_1;
    params.CallFunc_K2_AddRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_AddRelativeLocation_SweepHitResult;
    params.CallFunc_K2_AttachToComponent_ReturnValue_1 = (bool)CallFunc_K2_AttachToComponent_ReturnValue_1;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_K2_AttachToComponent_ReturnValue_2 = (bool)CallFunc_K2_AttachToComponent_ReturnValue_2;
    params.CallFunc_SetAnimatedLightColor_ReturnValue_1 = (bool)CallFunc_SetAnimatedLightColor_ReturnValue_1;
    params.CallFunc_K2_AddRelativeLocation_SweepHitResult_1 = (FHitResult)CallFunc_K2_AddRelativeLocation_SweepHitResult_1;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_K2_AttachToComponent_ReturnValue_3 = (bool)CallFunc_K2_AttachToComponent_ReturnValue_3;
    params.CallFunc_GetAllSocketNames_ReturnValue = (TArray<FName>)CallFunc_GetAllSocketNames_ReturnValue;
    params.CallFunc_Array_Get_Item_2 = (FName)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Conv_StringToName_ReturnValue = (FName)CallFunc_Conv_StringToName_ReturnValue;
    params.CallFunc_GetSocketTransform_ReturnValue = (FTransform)CallFunc_GetSocketTransform_ReturnValue;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue_3 = (UPointLightComponent*)CallFunc_AddComponent_ReturnValue_3;
    ProcessEvent(func, &params);
    CallFunc_GetAllSocketNames_ReturnValue = params.CallFunc_GetAllSocketNames_ReturnValue;
}
void ABP_LightFixture_Master_C::Emissive_Material_Struct(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, FAnimatedLightExtraParameter K2Node_MakeStruct_AnimatedLightExtraParameter, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable_2, FAnimatedLightExtraParameter K2Node_MakeStruct_AnimatedLightExtraParameter_1, FAnimatedLightExtraParameter K2Node_MakeStruct_AnimatedLightExtraParameter_2, bool CallFunc_AddAnimatedLightMaterialParameter_ReturnValue, bool CallFunc_AddAnimatedLightMaterialParameter_ReturnValue_1, bool CallFunc_AddAnimatedLightMaterialParameter_ReturnValue_2, TArray<int32_t>& CallFunc_Map_Values_Values, TArray<int32_t>& CallFunc_Map_Values_Values_1, int32_t CallFunc_Array_Get_Item, int32_t CallFunc_Array_Get_Item_1, bool CallFunc_Not_PreBool_ReturnValue, TArray<UMaterialInterface*>& CallFunc_Map_Keys_Keys, UMaterialInterface* CallFunc_Array_Get_Item_2, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UMaterialInterface* CallFunc_Array_Get_Item_3, UPhysicalMaterial* CallFunc_GetPhysicalMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, UMaterialInterface* CallFunc_Array_Get_Item_4, bool CallFunc_Less_IntInt_ReturnValue_2, UMaterial* CallFunc_Get_Parent_Parent, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.Emissive Material Struct"));
    struct Params_Emissive_Material_Struct {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xc
        int32_t Temp_int_Array_Index_Variable_1; // 0x10
        FAnimatedLightExtraParameter K2Node_MakeStruct_AnimatedLightExtraParameter; // 0x14
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x24
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x28
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x2c
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x30
        int32_t Temp_int_Array_Index_Variable_2; // 0x34
        FAnimatedLightExtraParameter K2Node_MakeStruct_AnimatedLightExtraParameter_1; // 0x38
        FAnimatedLightExtraParameter K2Node_MakeStruct_AnimatedLightExtraParameter_2; // 0x48
        bool CallFunc_AddAnimatedLightMaterialParameter_ReturnValue; // 0x58
        bool CallFunc_AddAnimatedLightMaterialParameter_ReturnValue_1; // 0x59
        bool CallFunc_AddAnimatedLightMaterialParameter_ReturnValue_2; // 0x5a
        char pad_5b[0x5];
        TArray<int32_t> CallFunc_Map_Values_Values; // 0x60
        TArray<int32_t> CallFunc_Map_Values_Values_1; // 0x70
        int32_t CallFunc_Array_Get_Item; // 0x80
        int32_t CallFunc_Array_Get_Item_1; // 0x84
        bool CallFunc_Not_PreBool_ReturnValue; // 0x88
        char pad_89[0x7];
        TArray<UMaterialInterface*> CallFunc_Map_Keys_Keys; // 0x90
        UMaterialInterface* CallFunc_Array_Get_Item_2; // 0xa0
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xa8
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0xb0
        bool CallFunc_IsValid_ReturnValue; // 0xb8
        char pad_b9[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0xbc
        bool CallFunc_Less_IntInt_ReturnValue; // 0xc0
        bool CallFunc_BooleanOR_ReturnValue; // 0xc1
        char pad_c2[0x6];
        TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue; // 0xc8
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0xd8
        char pad_d9[0x7];
        UMaterialInterface* CallFunc_Array_Get_Item_3; // 0xe0
        UPhysicalMaterial* CallFunc_GetPhysicalMaterial_ReturnValue; // 0xe8
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0xf0
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0xf8
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1; // 0xf9
        char pad_fa[0x2];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0xfc
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x100
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x101
        char pad_102[0x6];
        TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue_1; // 0x108
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x118
        char pad_11c[0x4];
        UMaterialInterface* CallFunc_Array_Get_Item_4; // 0x120
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x128
        char pad_129[0x7];
        UMaterial* CallFunc_Get_Parent_Parent; // 0x130
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2; // 0x138
    }; // Size: 0x139
    Params_Emissive_Material_Struct params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.K2Node_MakeStruct_AnimatedLightExtraParameter = (FAnimatedLightExtraParameter)K2Node_MakeStruct_AnimatedLightExtraParameter;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.K2Node_MakeStruct_AnimatedLightExtraParameter_1 = (FAnimatedLightExtraParameter)K2Node_MakeStruct_AnimatedLightExtraParameter_1;
    params.K2Node_MakeStruct_AnimatedLightExtraParameter_2 = (FAnimatedLightExtraParameter)K2Node_MakeStruct_AnimatedLightExtraParameter_2;
    params.CallFunc_AddAnimatedLightMaterialParameter_ReturnValue = (bool)CallFunc_AddAnimatedLightMaterialParameter_ReturnValue;
    params.CallFunc_AddAnimatedLightMaterialParameter_ReturnValue_1 = (bool)CallFunc_AddAnimatedLightMaterialParameter_ReturnValue_1;
    params.CallFunc_AddAnimatedLightMaterialParameter_ReturnValue_2 = (bool)CallFunc_AddAnimatedLightMaterialParameter_ReturnValue_2;
    params.CallFunc_Map_Values_Values = (TArray<int32_t>)CallFunc_Map_Values_Values;
    params.CallFunc_Map_Values_Values_1 = (TArray<int32_t>)CallFunc_Map_Values_Values_1;
    params.CallFunc_Array_Get_Item = (int32_t)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (int32_t)CallFunc_Array_Get_Item_1;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Map_Keys_Keys = (TArray<UMaterialInterface*>)CallFunc_Map_Keys_Keys;
    params.CallFunc_Array_Get_Item_2 = (UMaterialInterface*)CallFunc_Array_Get_Item_2;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_GetMaterials_ReturnValue = (TArray<UMaterialInterface*>)CallFunc_GetMaterials_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_Array_Get_Item_3 = (UMaterialInterface*)CallFunc_Array_Get_Item_3;
    params.CallFunc_GetPhysicalMaterial_ReturnValue = (UPhysicalMaterial*)CallFunc_GetPhysicalMaterial_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_GetMaterials_ReturnValue_1 = (TArray<UMaterialInterface*>)CallFunc_GetMaterials_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Array_Get_Item_4 = (UMaterialInterface*)CallFunc_Array_Get_Item_4;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Get_Parent_Parent = (UMaterial*)CallFunc_Get_Parent_Parent;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
    ProcessEvent(func, &params);
    CallFunc_Map_Values_Values = params.CallFunc_Map_Values_Values;
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
    CallFunc_Map_Values_Values_1 = params.CallFunc_Map_Values_Values_1;
    CallFunc_GetMaterials_ReturnValue_1 = params.CallFunc_GetMaterials_ReturnValue_1;
    CallFunc_GetMaterials_ReturnValue = params.CallFunc_GetMaterials_ReturnValue;
}
void ABP_LightFixture_Master_C::UserConstructionScript0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.OnHitBySpell"));
    struct Params_OnHitBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FHitResult Hit; // 0x20
        FVector ImpactDirection; // 0xa8
    }; // Size: 0xb4
    Params_OnHitBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    Hit = params.Hit;
    ImpactDirection = params.ImpactDirection;
}
void ABP_LightFixture_Master_C::OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.OnAffectedBySpell"));
    struct Params_OnAffectedBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        TArray<UInteractionArchitectAsset*> DataAssets; // 0x10
        USpellToolRecord* SpellToolRecord; // 0x20
        FName SpellType; // 0x28
        FGameplayTagContainer Impact; // 0x30
        FHitResult Hit; // 0x50
        FVector ImpactDirection; // 0xd8
    }; // Size: 0xe4
    Params_OnAffectedBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.DataAssets = (TArray<UInteractionArchitectAsset*>)DataAssets;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    params.Hit = (FHitResult)Hit;
    params.ImpactDirection = (FVector)ImpactDirection;
    ProcessEvent(func, &params);
    DataAssets = params.DataAssets;
    Hit = params.Hit;
    ImpactDirection = params.ImpactDirection;
}
void ABP_LightFixture_Master_C::Hide() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.Hide"));
    struct Params_Hide {
    }; // Size: 0x0
    Params_Hide params{};
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.OnAffectedBySpellEnd"));
    struct Params_OnAffectedBySpellEnd {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FGameplayTagContainer Impact; // 0x20
    }; // Size: 0x40
    Params_OnAffectedBySpellEnd params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::OnSpellTooWeak(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.OnSpellTooWeak"));
    struct Params_OnSpellTooWeak {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellTooWeak params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.OnOverlappedBySpell"));
    struct Params_OnOverlappedBySpell {
        ASpellTool* SpellTool; // 0x0
        AActor* Instigator; // 0x8
        USpellToolRecord* SpellToolRecord; // 0x10
        FName SpellType; // 0x18
        FGameplayTagContainer Impact; // 0x20
        FVector MunitionLocation; // 0x40
    }; // Size: 0x4c
    Params_OnOverlappedBySpell params{};
    params.SpellTool = (ASpellTool*)SpellTool;
    params.Instigator = (AActor*)Instigator;
    params.SpellToolRecord = (USpellToolRecord*)SpellToolRecord;
    params.SpellType = (FName)SpellType;
    params.Impact = (FGameplayTagContainer)Impact;
    params.MunitionLocation = (FVector)MunitionLocation;
    ProcessEvent(func, &params);
    MunitionLocation = params.MunitionLocation;
}
void ABP_LightFixture_Master_C::OnSpellEffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.OnSpellEffective"));
    struct Params_OnSpellEffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellEffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::DayNightMoonEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, EMoonPhaseName Phase, bool bLate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.DayNightMoonEvent"));
    struct Params_DayNightMoonEvent {
        UDayNightMasterComponent* DayNightMaster; // 0x0
        FName EventName; // 0x8
        FSolarNormalizedTime NormalizedTime; // 0x10
        char pad_14[0x4];
        FDateTime GameTime; // 0x18
        EDayNightEventDirection MoonDirection; // 0x20
        char pad_21[0x3];
        float MoonAltitudeDegrees; // 0x24
        EMoonPhaseName Phase; // 0x28
        bool bLate; // 0x29
    }; // Size: 0x2a
    Params_DayNightMoonEvent params{};
    params.DayNightMaster = (UDayNightMasterComponent*)DayNightMaster;
    params.EventName = (FName)EventName;
    params.NormalizedTime = (FSolarNormalizedTime)NormalizedTime;
    params.GameTime = (FDateTime)GameTime;
    params.MoonDirection = (EDayNightEventDirection)MoonDirection;
    params.MoonAltitudeDegrees = (float)MoonAltitudeDegrees;
    params.Phase = (EMoonPhaseName)Phase;
    params.bLate = (bool)bLate;
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::OnSpellIneffective(AActor* Instigator) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.OnSpellIneffective"));
    struct Params_OnSpellIneffective {
        AActor* Instigator; // 0x0
    }; // Size: 0x8
    Params_OnSpellIneffective params{};
    params.Instigator = (AActor*)Instigator;
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::OnEnterLightTickRange(ULightComponent* LightComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.OnEnterLightTickRange"));
    struct Params_OnEnterLightTickRange {
        ULightComponent* LightComponent; // 0x0
    }; // Size: 0x8
    Params_OnEnterLightTickRange params{};
    params.LightComponent = (ULightComponent*)LightComponent;
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::OnExitLightTickRange(ULightComponent* LightComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.OnExitLightTickRange"));
    struct Params_OnExitLightTickRange {
        ULightComponent* LightComponent; // 0x0
    }; // Size: 0x8
    Params_OnExitLightTickRange params{};
    params.LightComponent = (ULightComponent*)LightComponent;
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::DayNightSunEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.DayNightSunEvent"));
    struct Params_DayNightSunEvent {
        UDayNightMasterComponent* DayNightMaster; // 0x0
        FName EventName; // 0x8
        FSolarNormalizedTime NormalizedTime; // 0x10
        char pad_14[0x4];
        FDateTime GameTime; // 0x18
        EDayNightEventDirection SunDirection; // 0x20
        char pad_21[0x3];
        float SunAltitudeDegrees; // 0x24
        bool bLate; // 0x28
    }; // Size: 0x29
    Params_DayNightSunEvent params{};
    params.DayNightMaster = (UDayNightMasterComponent*)DayNightMaster;
    params.EventName = (FName)EventName;
    params.NormalizedTime = (FSolarNormalizedTime)NormalizedTime;
    params.GameTime = (FDateTime)GameTime;
    params.SunDirection = (EDayNightEventDirection)SunDirection;
    params.SunAltitudeDegrees = (float)SunAltitudeDegrees;
    params.bLate = (bool)bLate;
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::Show_All() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.Show All"));
    struct Params_Show_All {
    }; // Size: 0x0
    Params_Show_All params{};
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::DayNightParticalSwitch() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.DayNightParticalSwitch"));
    struct Params_DayNightParticalSwitch {
    }; // Size: 0x0
    Params_DayNightParticalSwitch params{};
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::Post_AK() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.Post AK"));
    struct Params_Post_AK {
    }; // Size: 0x0
    Params_Post_AK params{};
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::Stop_AK() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/BluePrints/BP_LightFixture_Master.BP_LightFixture_Master_C.Stop AK"));
    struct Params_Stop_AK {
    }; // Size: 0x0
    Params_Stop_AK params{};
    ProcessEvent(func, &params);
}
void ABP_LightFixture_Master_C::ExecuteUbergraph_BP_LightFixture_Master(int32_t EntryPoint, bool CallFunc_IsVisible_ReturnValue, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_6, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, bool CallFunc_Not_PreBool_ReturnValue, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_5, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_4, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FGameplayTagContainer K2Node_Event_Impact, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_3, AActor* K2Node_Event_Instigator_2, AActor* K2Node_Event_Instigator_1, UDayNightMasterComponent* K2Node_Event_DayNightMaster_1, FName K2Node_Event_EventName_1, FSolarNormalizedTime K2Node_Event_NormalizedTime_1, FDateTime K2Node_Event_GameTime_1, EDayNightEventDirection K2Node_Event_MoonDirection, float K2Node_Event_MoonAltitudeDegrees, EMoonPhaseName K2Node_Event_Phase, bool K2Node_Event_bLate_1, ULightComponent* K2Node_Event_LightComponent_1, ULightComponent* K2Node_Event_LightComponent, UDayNightMasterComponent* K2Node_Event_DayNightMaster, FName K2Node_Event_EventName, FSolarNormalizedTime K2Node_Event_NormalizedTime, FDateTime K2Node_Event_GameTime, EDayNightEventDirection K2Node_Event_SunDirection, float K2Node_Event_SunAltitudeDegrees, bool K2Node_Event_bLate) {}
