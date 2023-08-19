#include "AActor.hpp"
#include "ABP_Candles_C.hpp"
#include "ACandles.hpp"
#include "ALightClippingPlanes.hpp"
#include "ALightClippingVolume.hpp"
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
#include "UAkComponent.hpp"
#include "UAnimatedLightComponent.hpp"
#include "UDayNightMasterComponent.hpp"
#include "UFunction.hpp"
#include "ULightComponent.hpp"
#include "UMaterialBillboardComponent.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UObjectStateComponent.hpp"
#include "UPointLightComponent.hpp"
#include "USpotLightComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTimelineComponent.hpp"
ABP_Candles_C* ABP_Candles_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C");
    return (ABP_Candles_C*)res;
}
void ABP_Candles_C::PlaceFlames(int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Loop_Counter_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, int32_t Temp_int_Array_Index_Variable_2, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Contains_ReturnValue, int32_t Temp_int_Array_Index_Variable_3, FTransform Temp_struct_Variable, UMaterialBillboardComponent* CallFunc_AddComponent_ReturnValue, FTransform Temp_struct_Variable_1, int32_t CallFunc_Array_Add_ReturnValue, UMaterialBillboardComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Add_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, UStaticMeshComponent* CallFunc_Array_Get_Item_1, int32_t CallFunc_Array_Length_ReturnValue_1, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FName CallFunc_Array_Get_Item_2, bool CallFunc_K2_AttachToComponent_ReturnValue_1, FString CallFunc_Conv_NameToString_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Contains_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, int32_t CallFunc_Array_Length_ReturnValue_3, UStaticMeshComponent* CallFunc_Array_Get_Item_3, bool CallFunc_Greater_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.PlaceFlames"));
    struct Params_PlaceFlames {
        int32_t Temp_int_Array_Index_Variable; // 0x0
        int32_t Temp_int_Loop_Counter_Variable; // 0x4
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x8
        int32_t Temp_int_Array_Index_Variable_1; // 0xc
        bool CallFunc_EqualEqual_IntInt_ReturnValue; // 0x10
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x11
        bool CallFunc_BooleanAND_ReturnValue; // 0x12
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0x13
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x14
        int32_t Temp_int_Loop_Counter_Variable_2; // 0x18
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x1c
        int32_t CallFunc_Add_IntInt_ReturnValue_2; // 0x20
        int32_t Temp_int_Loop_Counter_Variable_3; // 0x24
        int32_t CallFunc_Add_IntInt_ReturnValue_3; // 0x28
        int32_t Temp_int_Array_Index_Variable_2; // 0x2c
        TArray<FName> CallFunc_GetAllSocketNames_ReturnValue; // 0x30
        FName CallFunc_Array_Get_Item; // 0x40
        int32_t CallFunc_Array_Length_ReturnValue; // 0x48
        char pad_4c[0x4];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x50
        bool CallFunc_Less_IntInt_ReturnValue; // 0x60
        bool CallFunc_Contains_ReturnValue; // 0x61
        char pad_62[0x2];
        int32_t Temp_int_Array_Index_Variable_3; // 0x64
        char pad_68[0x8];
        FTransform Temp_struct_Variable; // 0x70
        UMaterialBillboardComponent* CallFunc_AddComponent_ReturnValue; // 0xa0
        char pad_a8[0x8];
        FTransform Temp_struct_Variable_1; // 0xb0
        int32_t CallFunc_Array_Add_ReturnValue; // 0xe0
        char pad_e4[0x4];
        UMaterialBillboardComponent* CallFunc_AddComponent_ReturnValue_1; // 0xe8
        bool CallFunc_IsValid_ReturnValue; // 0xf0
        char pad_f1[0x3];
        int32_t CallFunc_Array_Add_ReturnValue_1; // 0xf4
        bool CallFunc_K2_AttachToComponent_ReturnValue; // 0xf8
        bool CallFunc_IsValid_ReturnValue_1; // 0xf9
        char pad_fa[0x6];
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue; // 0x100
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x108
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1; // 0x110
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x118
        UStaticMeshComponent* CallFunc_Array_Get_Item_1; // 0x120
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x128
        char pad_12c[0x4];
        TArray<FName> CallFunc_GetAllSocketNames_ReturnValue_1; // 0x130
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x140
        char pad_141[0x3];
        FName CallFunc_Array_Get_Item_2; // 0x144
        bool CallFunc_K2_AttachToComponent_ReturnValue_1; // 0x14c
        char pad_14d[0x3];
        FString CallFunc_Conv_NameToString_ReturnValue_1; // 0x150
        int32_t CallFunc_Array_Length_ReturnValue_2; // 0x160
        bool CallFunc_Contains_ReturnValue_1; // 0x164
        bool CallFunc_Less_IntInt_ReturnValue_2; // 0x165
        char pad_166[0x2];
        int32_t CallFunc_Array_Length_ReturnValue_3; // 0x168
        char pad_16c[0x4];
        UStaticMeshComponent* CallFunc_Array_Get_Item_3; // 0x170
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x178
        char pad_179[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_4; // 0x17c
        bool CallFunc_Less_IntInt_ReturnValue_3; // 0x180
    }; // Size: 0x181
    Params_PlaceFlames params{};
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_EqualEqual_IntInt_ReturnValue = (bool)CallFunc_EqualEqual_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.Temp_int_Loop_Counter_Variable_2 = (int32_t)Temp_int_Loop_Counter_Variable_2;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue_2 = (int32_t)CallFunc_Add_IntInt_ReturnValue_2;
    params.Temp_int_Loop_Counter_Variable_3 = (int32_t)Temp_int_Loop_Counter_Variable_3;
    params.CallFunc_Add_IntInt_ReturnValue_3 = (int32_t)CallFunc_Add_IntInt_ReturnValue_3;
    params.Temp_int_Array_Index_Variable_2 = (int32_t)Temp_int_Array_Index_Variable_2;
    params.CallFunc_GetAllSocketNames_ReturnValue = (TArray<FName>)CallFunc_GetAllSocketNames_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Contains_ReturnValue = (bool)CallFunc_Contains_ReturnValue;
    params.Temp_int_Array_Index_Variable_3 = (int32_t)Temp_int_Array_Index_Variable_3;
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_AddComponent_ReturnValue = (UMaterialBillboardComponent*)CallFunc_AddComponent_ReturnValue;
    params.Temp_struct_Variable_1 = (FTransform)Temp_struct_Variable_1;
    params.CallFunc_Array_Add_ReturnValue = (int32_t)CallFunc_Array_Add_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue_1 = (UMaterialBillboardComponent*)CallFunc_AddComponent_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Array_Add_ReturnValue_1 = (int32_t)CallFunc_Array_Add_ReturnValue_1;
    params.CallFunc_K2_AttachToComponent_ReturnValue = (bool)CallFunc_K2_AttachToComponent_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetMaterial_ReturnValue = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_GetMaterial_ReturnValue_1 = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue_1;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
    params.CallFunc_Array_Get_Item_1 = (UStaticMeshComponent*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_GetAllSocketNames_ReturnValue_1 = (TArray<FName>)CallFunc_GetAllSocketNames_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_Array_Get_Item_2 = (FName)CallFunc_Array_Get_Item_2;
    params.CallFunc_K2_AttachToComponent_ReturnValue_1 = (bool)CallFunc_K2_AttachToComponent_ReturnValue_1;
    params.CallFunc_Conv_NameToString_ReturnValue_1 = (FString)CallFunc_Conv_NameToString_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_2 = (int32_t)CallFunc_Array_Length_ReturnValue_2;
    params.CallFunc_Contains_ReturnValue_1 = (bool)CallFunc_Contains_ReturnValue_1;
    params.CallFunc_Less_IntInt_ReturnValue_2 = (bool)CallFunc_Less_IntInt_ReturnValue_2;
    params.CallFunc_Array_Length_ReturnValue_3 = (int32_t)CallFunc_Array_Length_ReturnValue_3;
    params.CallFunc_Array_Get_Item_3 = (UStaticMeshComponent*)CallFunc_Array_Get_Item_3;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_4 = (int32_t)CallFunc_Array_Length_ReturnValue_4;
    params.CallFunc_Less_IntInt_ReturnValue_3 = (bool)CallFunc_Less_IntInt_ReturnValue_3;
    ProcessEvent(func, &params);
    CallFunc_GetAllSocketNames_ReturnValue = params.CallFunc_GetAllSocketNames_ReturnValue;
    CallFunc_GetAllSocketNames_ReturnValue_1 = params.CallFunc_GetAllSocketNames_ReturnValue_1;
}
void ABP_Candles_C::LerpIntensity__UpdateFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.LerpIntensity__UpdateFunc"));
    struct Params_LerpIntensity__UpdateFunc {
    }; // Size: 0x0
    Params_LerpIntensity__UpdateFunc params{};
    ProcessEvent(func, &params);
}
void ABP_Candles_C::PlaceCandles(FRandomStream RandStream, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_1, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, FRotator CallFunc_MakeRotator_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, bool Temp_bool_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable_2, FVector Temp_struct_Variable, FTransform Temp_struct_Variable_1, TArray<FName>& CallFunc_GetAllSocketNames_ReturnValue, FName CallFunc_Array_Get_Item, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_Contains_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FTransform Temp_struct_Variable_2, bool CallFunc_Less_IntInt_ReturnValue, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_1, FTransform Temp_struct_Variable_3, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, FTransform Temp_struct_Variable_4, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_EqualEqual_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_IntInt_ReturnValue_7, bool CallFunc_EqualEqual_IntInt_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_1, FVector Temp_struct_Variable_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool Temp_bool_Variable_2, bool CallFunc_BooleanOR_ReturnValue_4, int32_t CallFunc_Array_Add_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_5, bool Temp_bool_Variable_3, TArray<void*>& K2Node_Select_Default, FVector Temp_struct_Variable_6) {}
void ABP_Candles_C::ConstructCandles(FSTR_CandleList Candles, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, E_CandleType::Type Temp_byte_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_GetNumMaterials_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue, int32_t CallFunc_GetNumMaterials_ReturnValue_1, int32_t CallFunc_Subtract_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_CandleSetup_ReturnValue, int32_t Temp_int_Variable_1, float CallFunc_FMax_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UMaterialBillboardComponent* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<void*>& K2Node_Select_Default, int32_t CallFunc_Array_LastIndex_ReturnValue) {}
void ABP_Candles_C::UserConstructionScript(FVector CallFunc_K2_GetActorLocation_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue, FRandomStream CallFunc_MakeRandomStream_RandomStream, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, FVector CallFunc_Add_VectorVector_ReturnValue_1, FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1, UMaterialBillboardComponent* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, UMaterialBillboardComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UStaticMeshComponent* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_1, UStaticMeshComponent* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_AssignLightClippingVolumeSource_bSuccess, bool CallFunc_AssignLightClippingVolumeSource_bSuccess_1, bool CallFunc_AssignLightClippingPlanesSource_bSuccess, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_AssignLightClippingPlanesSource_bSuccess_1, bool CallFunc_IsValid_ReturnValue_8) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        FVector CallFunc_K2_GetActorLocation_ReturnValue; // 0x0
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0xc
        FRandomStream CallFunc_MakeRandomStream_RandomStream; // 0x18
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0xa8
        bool CallFunc_IsValid_ReturnValue_1; // 0xa9
        char pad_aa[0x2];
        int32_t Temp_int_Variable; // 0xac
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0xb0
        int32_t Temp_int_Variable_1; // 0xb4
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0xb8
        bool CallFunc_IsValid_ReturnValue_2; // 0xbc
        bool CallFunc_IsValid_ReturnValue_3; // 0xbd
        bool CallFunc_IsValid_ReturnValue_4; // 0xbe
        bool CallFunc_IsValid_ReturnValue_5; // 0xbf
        bool CallFunc_IsValid_ReturnValue_6; // 0xc0
        char pad_c1[0x3];
        FVector CallFunc_Add_VectorVector_ReturnValue_1; // 0xc4
        FHitResult CallFunc_K2_SetRelativeLocation_SweepHitResult_1; // 0xd0
        UMaterialBillboardComponent* CallFunc_Array_Get_Item; // 0x158
        int32_t CallFunc_Array_Length_ReturnValue; // 0x160
        char pad_164[0x4];
        UMaterialBillboardComponent* CallFunc_Array_Get_Item_1; // 0x168
        bool CallFunc_Less_IntInt_ReturnValue; // 0x170
        char pad_171[0x7];
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x178
        UStaticMeshComponent* CallFunc_Array_Get_Item_2; // 0x180
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x188
        char pad_18c[0x4];
        UStaticMeshComponent* CallFunc_Array_Get_Item_3; // 0x190
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0x198
        char pad_199[0x7];
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x1a0
        bool CallFunc_AssignLightClippingVolumeSource_bSuccess; // 0x1a8
        bool CallFunc_AssignLightClippingVolumeSource_bSuccess_1; // 0x1a9
        bool CallFunc_AssignLightClippingPlanesSource_bSuccess; // 0x1aa
        bool CallFunc_IsValid_ReturnValue_7; // 0x1ab
        bool CallFunc_AssignLightClippingPlanesSource_bSuccess_1; // 0x1ac
        bool CallFunc_IsValid_ReturnValue_8; // 0x1ad
    }; // Size: 0x1ae
    Params_UserConstructionScript params{};
    params.CallFunc_K2_GetActorLocation_ReturnValue = (FVector)CallFunc_K2_GetActorLocation_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    params.CallFunc_MakeRandomStream_RandomStream = (FRandomStream)CallFunc_MakeRandomStream_RandomStream;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue_2 = (bool)CallFunc_IsValid_ReturnValue_2;
    params.CallFunc_IsValid_ReturnValue_3 = (bool)CallFunc_IsValid_ReturnValue_3;
    params.CallFunc_IsValid_ReturnValue_4 = (bool)CallFunc_IsValid_ReturnValue_4;
    params.CallFunc_IsValid_ReturnValue_5 = (bool)CallFunc_IsValid_ReturnValue_5;
    params.CallFunc_IsValid_ReturnValue_6 = (bool)CallFunc_IsValid_ReturnValue_6;
    params.CallFunc_Add_VectorVector_ReturnValue_1 = (FVector)CallFunc_Add_VectorVector_ReturnValue_1;
    params.CallFunc_K2_SetRelativeLocation_SweepHitResult_1 = (FHitResult)CallFunc_K2_SetRelativeLocation_SweepHitResult_1;
    params.CallFunc_Array_Get_Item = (UMaterialBillboardComponent*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (UMaterialBillboardComponent*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_Array_Get_Item_2 = (UStaticMeshComponent*)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Array_Get_Item_3 = (UStaticMeshComponent*)CallFunc_Array_Get_Item_3;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
    params.CallFunc_AssignLightClippingVolumeSource_bSuccess = (bool)CallFunc_AssignLightClippingVolumeSource_bSuccess;
    params.CallFunc_AssignLightClippingVolumeSource_bSuccess_1 = (bool)CallFunc_AssignLightClippingVolumeSource_bSuccess_1;
    params.CallFunc_AssignLightClippingPlanesSource_bSuccess = (bool)CallFunc_AssignLightClippingPlanesSource_bSuccess;
    params.CallFunc_IsValid_ReturnValue_7 = (bool)CallFunc_IsValid_ReturnValue_7;
    params.CallFunc_AssignLightClippingPlanesSource_bSuccess_1 = (bool)CallFunc_AssignLightClippingPlanesSource_bSuccess_1;
    params.CallFunc_IsValid_ReturnValue_8 = (bool)CallFunc_IsValid_ReturnValue_8;
    ProcessEvent(func, &params);
}
void ABP_Candles_C::SwitchOn(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.SwitchOn"));
    struct Params_SwitchOn {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOn params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_Candles_C::LerpIntensity__FinishedFunc() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.LerpIntensity__FinishedFunc"));
    struct Params_LerpIntensity__FinishedFunc {
    }; // Size: 0x0
    Params_LerpIntensity__FinishedFunc params{};
    ProcessEvent(func, &params);
}
void ABP_Candles_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Candles_C::DayNightMoonEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection MoonDirection, float MoonAltitudeDegrees, EMoonPhaseName Phase, bool bLate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.DayNightMoonEvent"));
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
void ABP_Candles_C::SwitchOff(AActor* SwitchActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.SwitchOff"));
    struct Params_SwitchOff {
        AActor* SwitchActor; // 0x0
    }; // Size: 0x8
    Params_SwitchOff params{};
    params.SwitchActor = (AActor*)SwitchActor;
    ProcessEvent(func, &params);
}
void ABP_Candles_C::OnEnterLightTickRange(ULightComponent* LightComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.OnEnterLightTickRange"));
    struct Params_OnEnterLightTickRange {
        ULightComponent* LightComponent; // 0x0
    }; // Size: 0x8
    Params_OnEnterLightTickRange params{};
    params.LightComponent = (ULightComponent*)LightComponent;
    ProcessEvent(func, &params);
}
void ABP_Candles_C::OnExitLightTickRange(ULightComponent* LightComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.OnExitLightTickRange"));
    struct Params_OnExitLightTickRange {
        ULightComponent* LightComponent; // 0x0
    }; // Size: 0x8
    Params_OnExitLightTickRange params{};
    params.LightComponent = (ULightComponent*)LightComponent;
    ProcessEvent(func, &params);
}
void ABP_Candles_C::DayNightSunEvent(UDayNightMasterComponent* DayNightMaster, FName EventName, FSolarNormalizedTime NormalizedTime, FDateTime GameTime, EDayNightEventDirection SunDirection, float SunAltitudeDegrees, bool bLate) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.DayNightSunEvent"));
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
void ABP_Candles_C::OnLit__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.OnLit__DelegateSignature"));
    struct Params_OnLit__DelegateSignature {
    }; // Size: 0x0
    Params_OnLit__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void ABP_Candles_C::Brighten() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.Brighten"));
    struct Params_Brighten {
    }; // Size: 0x0
    Params_Brighten params{};
    ProcessEvent(func, &params);
}
void ABP_Candles_C::ExecuteUbergraph_BP_Candles(int32_t EntryPoint, TArray<FAkExternalSourceInfo>& Temp_struct_Variable, bool CallFunc_EqualEqual_ByteByte_ReturnValue) {}
void ABP_Candles_C::OnExtinguished__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Universal/BP_Candles.BP_Candles_C.OnExtinguished__DelegateSignature"));
    struct Params_OnExtinguished__DelegateSignature {
    }; // Size: 0x0
    Params_OnExtinguished__DelegateSignature params{};
    ProcessEvent(func, &params);
}
