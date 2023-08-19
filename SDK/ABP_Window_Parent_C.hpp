#pragma once
#include <cstdint>
#include "ALightGroupActorBase.hpp"
#include "FFallbackStruct.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
class UStaticMeshComponent;
class UMaterialInstanceDynamic;
class UObject;
class UStaticMesh;
class UMaterialInterface;
class UTexture;
class UMaterial;
class UMaterialInstance;
#pragma pack(push, 1)
class ABP_Window_Parent_C : public ALightGroupActorBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    UStaticMeshComponent* SM_Pane; // 0x270
    UStaticMesh* WindowPane; // 0x278
    bool Interior_Window; // 0x280
    bool Cast_Shadow_; // 0x281
    char pad_282[0x6];
    UStaticMeshComponent* Pane; // 0x288
    UMaterialInstanceDynamic* Emissive_Material; // 0x290
    TArray<FName> Parameters; // 0x298
    float Light_on_Intensity; // 0x2a8
    float Light_off_Intensity; // 0x2ac
    float Day_Value; // 0x2b0
    FLinearColor Night_Light_Color; // 0x2b4
    FLinearColor Color_Tint; // 0x2c4
    bool Lock_Values; // 0x2d4
    char pad_2d5[0x3];
    FLinearColor Color_Tint_Locked; // 0x2d8
    UMaterialInterface* Base_Window_Material; // 0x2e8
    bool Use_scheduler_; // 0x2f0
    bool Set_Cast_Shadow; // 0x2f1
    char pad_2f2[0x6];
    UStaticMeshComponent* Shadow_Caster; // 0x2f8
    UMaterialInterface* Shadow_Material; // 0x300
    UTexture* Shadow_Texture; // 0x308
    bool Shadow_Caster_Mesh; // 0x310
    char pad_311[0x7];
    UTexture* Diffuse_Texture; // 0x318
    UObject* Parent; // 0x320
    bool Force_LOD; // 0x328
    char pad_329[0x3];
    float Emissive_Intensity_Locked; // 0x32c
    float Scattered_Light_Transmission; // 0x330
    float Scattered_Light_Desaturation; // 0x334
    float Directional_Light_Transmission; // 0x338
    float Directional_Light_Desaturation; // 0x33c
    bool EXT_CAST_SHADOW; // 0x340
    bool Use_Custom_Shadow_Texture; // 0x341
    char pad_342[0x6];
    UTexture* Custom_Shadow_Texture; // 0x348
    bool Use_NonPhysical_TOD; // 0x350
    char pad_351[0x3];
    float Day_MIN; // 0x354
    float Day_MAX; // 0x358
    float Night; // 0x35c
    float Desaturation; // 0x360
    FLinearColor NonPhysical_Color_Tint; // 0x364
    char pad_374[0x4];
    UTexture* Fake_Ext_Diffuse; // 0x378
    bool Use_Fake_Ext_Texture; // 0x380
    char pad_381[0x3];
    float Parallax_Depth; // 0x384
    float Height_Ratio; // 0x388
    FLinearColor Fake_Ext_Color_Tint; // 0x38c
    float Opacity; // 0x39c
    int32_t Blur; // 0x3a0
    bool Decoupled_Night; // 0x3a4
    char pad_3a5[0x3];
    FLinearColor Night_Color_Tint; // 0x3a8
    float Night_ScatteredLight_Transmission; // 0x3b8
    bool Use_Fake_Int; // 0x3bc
    char pad_3bd[0x3];
    UTexture* FakeIntMask; // 0x3c0
    float FakeIntStrength; // 0x3c8
    float FakeExt_SLT; // 0x3cc
    float Scattered_Light_Transmission_FakeExt; // 0x3d0
    float Scattered_Light_Desaturation_FakeExt; // 0x3d4
    float Direcational_Light_Transmission_FakeExt; // 0x3d8
    float Direction_Light_Desaturation_FakeExt; // 0x3dc
    float Night_ScatteredLightTransmission_FakeExt; // 0x3e0
    FLinearColor ShadowTextureWeight; // 0x3e4
    char pad_3f4[0x4];
    static ABP_Window_Parent_C* StaticClass();
    void MakeShadowCaster_MAT(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, TArray<FFallbackStruct>& CallFunc_GetMaterialInstanceTextureParameters_ReturnValue, FFallbackStruct CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue);
    void ExteriorMID(TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, FName CallFunc_Array_Get_Item, UMaterialInterface* CallFunc_Array_Get_Item_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterial* CallFunc_GetParent_Parent, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, FName CallFunc_Array_Get_Item_2, FName CallFunc_Array_Get_Item_3, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32_t CallFunc_GetLightGroupIndex_GroupNumber, FString CallFunc_Conv_IntToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
    void GetParent(UMaterialInterface* Material_IN, UMaterial*& Parent, UMaterial* K2Node_DynamicCast_AsMaterial, bool K2Node_DynamicCast_bSuccess, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_1, UMaterial* CallFunc_GetBaseMaterial_ReturnValue, UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess_2, UMaterial* CallFunc_GetBaseMaterial_ReturnValue_1);
    void MakeMID(UStaticMeshComponent* Mesh, UMaterialInstanceDynamic*& Mid, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, UMaterialInterface* CallFunc_Array_Get_Item, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterial* CallFunc_GetParent_Parent, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void InteriorMID(float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FName CallFunc_Array_Get_Item, FName CallFunc_Array_Get_Item_1, FName CallFunc_Array_Get_Item_2, UMaterialInstanceDynamic* CallFunc_MakeMID_MID, bool CallFunc_IsValid_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1);
    void Exterior_Emissives(UMaterialInstanceDynamic* Mid, float Day_Emissive, float Light_on_Intensity, float Light_off_Intensity, FLinearColor Night_Light_Color, FName CallFunc_Array_Get_Item, FName CallFunc_Array_Get_Item_1, FName CallFunc_Array_Get_Item_2, FName CallFunc_Array_Get_Item_3);
    void Base_Emissives(UMaterialInstanceDynamic* Mid, float ScatteredLight_Tran, float ScatteredLight_Desat, float DirectionalLight_Tran, float DirectionLight_Desat, FLinearColor Color_Tint, FName CallFunc_Array_Get_Item, FName CallFunc_Array_Get_Item_1, FName CallFunc_Array_Get_Item_2, FName CallFunc_Array_Get_Item_3, FName CallFunc_Array_Get_Item_4);
    void Set_Static_Meshes(FTransform Temp_struct_Variable, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1);
    void UserConstructionScript();
    void Inside_Override_Emissive(float ScatteredLight_Tran, float ScatteredLight_Desat, float DirectionalLight_Tran, float DirectionalLight_Desat, FLinearColor Color_Tint, bool Set_Lock_Value, FLinearColor Locked_Color, float Locked_Emissive);
    void Reset();
    void Set_to_Defaults();
    void Outside_Override_Emissive(float Day_Value, float Light_on_Intensity, float Light_off_Intensity, FLinearColor Night_Color, bool Set_Lock_Value);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Window_Parent(int32_t EntryPoint, float K2Node_Event_Day_Value, float K2Node_Event_Light_on_Intensity, float K2Node_Event_Light_off_Intensity, FLinearColor K2Node_Event_Night_Color, bool K2Node_Event_Set_Lock_Value, float K2Node_Event_ScatteredLight_Tran, float K2Node_Event_ScatteredLight_Desat, float K2Node_Event_DirectionalLight_Tran, float K2Node_Event_DirectionalLight_Desat, FLinearColor K2Node_Event_Color_Tint, bool K2Node_Event_Set_Lock_Value_1, FLinearColor K2Node_Event_Locked_Color, float K2Node_Event_Locked_Emissive, FName CallFunc_Array_Get_Item, FName CallFunc_Array_Get_Item_1, FName CallFunc_Array_Get_Item_2, FName CallFunc_Array_Get_Item_3);
}; // Size: 0x3f8
#pragma pack(pop)
