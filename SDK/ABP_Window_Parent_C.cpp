#include "ABP_Window_Parent_C.hpp"
#include "ALightGroupActorBase.hpp"
#include "FFallbackStruct.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "UMaterial.hpp"
#include "UMaterialInstance.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTexture.hpp"
ABP_Window_Parent_C* ABP_Window_Parent_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C");
    return (ABP_Window_Parent_C*)res;
}
void ABP_Window_Parent_C::MakeShadowCaster_MAT(int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, bool CallFunc_IsValid_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_1, TArray<FFallbackStruct>& CallFunc_GetMaterialInstanceTextureParameters_ReturnValue, FFallbackStruct CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.MakeShadowCaster_MAT"));
    struct Params_MakeShadowCaster_MAT {
        int32_t Temp_int_Loop_Counter_Variable; // 0x0
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x4
        int32_t Temp_int_Array_Index_Variable; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0xc
        char pad_d[0x3];
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue; // 0x10
        UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance; // 0x18
        bool K2Node_DynamicCast_bSuccess; // 0x20
        bool CallFunc_IsValid_ReturnValue_1; // 0x21
        char pad_22[0x6];
        TArray<FFallbackStruct> CallFunc_GetMaterialInstanceTextureParameters_ReturnValue; // 0x28
        FFallbackStruct CallFunc_Array_Get_Item; // 0x38
        char pad_39[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x3c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x40
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x41
    }; // Size: 0x42
    Params_MakeShadowCaster_MAT params{};
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_GetMaterial_ReturnValue = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue;
    params.K2Node_DynamicCast_AsMaterial_Instance = (UMaterialInstance*)K2Node_DynamicCast_AsMaterial_Instance;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_GetMaterialInstanceTextureParameters_ReturnValue = (TArray<FFallbackStruct>)CallFunc_GetMaterialInstanceTextureParameters_ReturnValue;
    params.CallFunc_Array_Get_Item = (FFallbackStruct)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetMaterialInstanceTextureParameters_ReturnValue = params.CallFunc_GetMaterialInstanceTextureParameters_ReturnValue;
}
void ABP_Window_Parent_C::ExteriorMID(TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, FName CallFunc_Array_Get_Item, UMaterialInterface* CallFunc_Array_Get_Item_1, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterial* CallFunc_GetParent_Parent, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, FName CallFunc_Array_Get_Item_2, FName CallFunc_Array_Get_Item_3, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, int32_t CallFunc_GetLightGroupIndex_GroupNumber, FString CallFunc_Conv_IntToString_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.ExteriorMID"));
    struct Params_ExteriorMID {
        TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue; // 0x0
        int32_t CallFunc_Array_Length_ReturnValue; // 0x10
        int32_t Temp_int_Array_Index_Variable; // 0x14
        FName CallFunc_Array_Get_Item; // 0x18
        UMaterialInterface* CallFunc_Array_Get_Item_1; // 0x20
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x28
        UMaterial* CallFunc_GetParent_Parent; // 0x30
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x38
        bool CallFunc_IsValid_ReturnValue; // 0x39
        char pad_3a[0x2];
        FName CallFunc_Array_Get_Item_2; // 0x3c
        FName CallFunc_Array_Get_Item_3; // 0x44
        int32_t Temp_int_Loop_Counter_Variable; // 0x4c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x50
        char pad_51[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x54
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x58
        int32_t CallFunc_GetLightGroupIndex_GroupNumber; // 0x68
        char pad_6c[0x4];
        FString CallFunc_Conv_IntToString_ReturnValue; // 0x70
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x80
        char pad_84[0x4];
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x88
        bool CallFunc_GreaterEqual_IntInt_ReturnValue; // 0x98
    }; // Size: 0x99
    Params_ExteriorMID params{};
    params.CallFunc_GetMaterials_ReturnValue = (TArray<UMaterialInterface*>)CallFunc_GetMaterials_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (UMaterialInterface*)CallFunc_Array_Get_Item_1;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_GetParent_Parent = (UMaterial*)CallFunc_GetParent_Parent;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Array_Get_Item_2 = (FName)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Get_Item_3 = (FName)CallFunc_Array_Get_Item_3;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_GetLightGroupIndex_GroupNumber = (int32_t)CallFunc_GetLightGroupIndex_GroupNumber;
    params.CallFunc_Conv_IntToString_ReturnValue = (FString)CallFunc_Conv_IntToString_ReturnValue;
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_GreaterEqual_IntInt_ReturnValue = (bool)CallFunc_GreaterEqual_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetMaterials_ReturnValue = params.CallFunc_GetMaterials_ReturnValue;
}
void ABP_Window_Parent_C::GetParent(UMaterialInterface* Material_IN, UMaterial*& Parent, UMaterial* K2Node_DynamicCast_AsMaterial, bool K2Node_DynamicCast_bSuccess, UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess_1, UMaterial* CallFunc_GetBaseMaterial_ReturnValue, UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess_2, UMaterial* CallFunc_GetBaseMaterial_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.GetParent"));
    struct Params_GetParent {
        UMaterialInterface* Material_IN; // 0x0
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
    Params_GetParent params{};
    params.Material_IN = (UMaterialInterface*)Material_IN;
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
void ABP_Window_Parent_C::MakeMID(UStaticMeshComponent* Mesh, UMaterialInstanceDynamic*& Mid, TArray<UMaterialInterface*>& CallFunc_GetMaterials_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Array_Length_ReturnValue, UMaterialInterface* CallFunc_Array_Get_Item, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterial* CallFunc_GetParent_Parent, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.MakeMID"));
    struct Params_MakeMID {
        UStaticMeshComponent* Mesh; // 0x0
        UMaterialInstanceDynamic* Mid; // 0x8
        TArray<UMaterialInterface*> CallFunc_GetMaterials_ReturnValue; // 0x10
        int32_t Temp_int_Array_Index_Variable; // 0x20
        int32_t CallFunc_Array_Length_ReturnValue; // 0x24
        UMaterialInterface* CallFunc_Array_Get_Item; // 0x28
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x30
        UMaterial* CallFunc_GetParent_Parent; // 0x38
        int32_t Temp_int_Loop_Counter_Variable; // 0x40
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x44
        bool CallFunc_Less_IntInt_ReturnValue; // 0x45
        char pad_46[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x48
    }; // Size: 0x4c
    Params_MakeMID params{};
    params.Mesh = (UStaticMeshComponent*)Mesh;
    params.Mid = (UMaterialInstanceDynamic*)Mid;
    params.CallFunc_GetMaterials_ReturnValue = (TArray<UMaterialInterface*>)CallFunc_GetMaterials_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (UMaterialInterface*)CallFunc_Array_Get_Item;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_GetParent_Parent = (UMaterial*)CallFunc_GetParent_Parent;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    Mid = params.Mid;
    CallFunc_GetMaterials_ReturnValue = params.CallFunc_GetMaterials_ReturnValue;
}
void ABP_Window_Parent_C::Exterior_Emissives(UMaterialInstanceDynamic* Mid, float Day_Emissive, float Light_on_Intensity, float Light_off_Intensity, FLinearColor Night_Light_Color, FName CallFunc_Array_Get_Item, FName CallFunc_Array_Get_Item_1, FName CallFunc_Array_Get_Item_2, FName CallFunc_Array_Get_Item_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.Exterior Emissives"));
    struct Params_Exterior_Emissives {
        UMaterialInstanceDynamic* Mid; // 0x0
        float Day_Emissive; // 0x8
        float Light_on_Intensity; // 0xc
        float Light_off_Intensity; // 0x10
        FLinearColor Night_Light_Color; // 0x14
        FName CallFunc_Array_Get_Item; // 0x24
        FName CallFunc_Array_Get_Item_1; // 0x2c
        FName CallFunc_Array_Get_Item_2; // 0x34
        FName CallFunc_Array_Get_Item_3; // 0x3c
    }; // Size: 0x44
    Params_Exterior_Emissives params{};
    params.Mid = (UMaterialInstanceDynamic*)Mid;
    params.Day_Emissive = (float)Day_Emissive;
    params.Light_on_Intensity = (float)Light_on_Intensity;
    params.Light_off_Intensity = (float)Light_off_Intensity;
    params.Night_Light_Color = (FLinearColor)Night_Light_Color;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (FName)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Get_Item_2 = (FName)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Get_Item_3 = (FName)CallFunc_Array_Get_Item_3;
    ProcessEvent(func, &params);
}
void ABP_Window_Parent_C::InteriorMID(float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, FName CallFunc_Array_Get_Item, FName CallFunc_Array_Get_Item_1, FName CallFunc_Array_Get_Item_2, UMaterialInstanceDynamic* CallFunc_MakeMID_MID, bool CallFunc_IsValid_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.InteriorMID"));
    struct Params_InteriorMID {
        float CallFunc_Conv_IntToFloat_ReturnValue; // 0x0
        bool CallFunc_BooleanAND_ReturnValue; // 0x4
        char pad_5[0x3];
        FName CallFunc_Array_Get_Item; // 0x8
        FName CallFunc_Array_Get_Item_1; // 0x10
        FName CallFunc_Array_Get_Item_2; // 0x18
        UMaterialInstanceDynamic* CallFunc_MakeMID_MID; // 0x20
        bool CallFunc_IsValid_ReturnValue; // 0x28
        char pad_29[0x3];
        float CallFunc_FClamp_ReturnValue; // 0x2c
        float CallFunc_FClamp_ReturnValue_1; // 0x30
    }; // Size: 0x34
    Params_InteriorMID params{};
    params.CallFunc_Conv_IntToFloat_ReturnValue = (float)CallFunc_Conv_IntToFloat_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (FName)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Get_Item_2 = (FName)CallFunc_Array_Get_Item_2;
    params.CallFunc_MakeMID_MID = (UMaterialInstanceDynamic*)CallFunc_MakeMID_MID;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_FClamp_ReturnValue = (float)CallFunc_FClamp_ReturnValue;
    params.CallFunc_FClamp_ReturnValue_1 = (float)CallFunc_FClamp_ReturnValue_1;
    ProcessEvent(func, &params);
}
void ABP_Window_Parent_C::Base_Emissives(UMaterialInstanceDynamic* Mid, float ScatteredLight_Tran, float ScatteredLight_Desat, float DirectionalLight_Tran, float DirectionLight_Desat, FLinearColor Color_Tint, FName CallFunc_Array_Get_Item, FName CallFunc_Array_Get_Item_1, FName CallFunc_Array_Get_Item_2, FName CallFunc_Array_Get_Item_3, FName CallFunc_Array_Get_Item_4) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.Base Emissives"));
    struct Params_Base_Emissives {
        UMaterialInstanceDynamic* Mid; // 0x0
        float ScatteredLight_Tran; // 0x8
        float ScatteredLight_Desat; // 0xc
        float DirectionalLight_Tran; // 0x10
        float DirectionLight_Desat; // 0x14
        FLinearColor Color_Tint; // 0x18
        FName CallFunc_Array_Get_Item; // 0x28
        FName CallFunc_Array_Get_Item_1; // 0x30
        FName CallFunc_Array_Get_Item_2; // 0x38
        FName CallFunc_Array_Get_Item_3; // 0x40
        FName CallFunc_Array_Get_Item_4; // 0x48
    }; // Size: 0x50
    Params_Base_Emissives params{};
    params.Mid = (UMaterialInstanceDynamic*)Mid;
    params.ScatteredLight_Tran = (float)ScatteredLight_Tran;
    params.ScatteredLight_Desat = (float)ScatteredLight_Desat;
    params.DirectionalLight_Tran = (float)DirectionalLight_Tran;
    params.DirectionLight_Desat = (float)DirectionLight_Desat;
    params.Color_Tint = (FLinearColor)Color_Tint;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (FName)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Get_Item_2 = (FName)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Get_Item_3 = (FName)CallFunc_Array_Get_Item_3;
    params.CallFunc_Array_Get_Item_4 = (FName)CallFunc_Array_Get_Item_4;
    ProcessEvent(func, &params);
}
void ABP_Window_Parent_C::Set_Static_Meshes(FTransform Temp_struct_Variable, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.Set Static Meshes"));
    struct Params_Set_Static_Meshes {
        FTransform Temp_struct_Variable; // 0x0
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x30
        UStaticMeshComponent* CallFunc_AddComponent_ReturnValue; // 0x38
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x40
        bool CallFunc_SetStaticMesh_ReturnValue_1; // 0x41
    }; // Size: 0x42
    Params_Set_Static_Meshes params{};
    params.Temp_struct_Variable = (FTransform)Temp_struct_Variable;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_AddComponent_ReturnValue = (UStaticMeshComponent*)CallFunc_AddComponent_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue_1 = (bool)CallFunc_SetStaticMesh_ReturnValue_1;
    ProcessEvent(func, &params);
}
void ABP_Window_Parent_C::UserConstructionScript() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
void ABP_Window_Parent_C::Inside_Override_Emissive(float ScatteredLight_Tran, float ScatteredLight_Desat, float DirectionalLight_Tran, float DirectionalLight_Desat, FLinearColor Color_Tint, bool Set_Lock_Value, FLinearColor Locked_Color, float Locked_Emissive) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.Inside Override Emissive"));
    struct Params_Inside_Override_Emissive {
        float ScatteredLight_Tran; // 0x0
        float ScatteredLight_Desat; // 0x4
        float DirectionalLight_Tran; // 0x8
        float DirectionalLight_Desat; // 0xc
        FLinearColor Color_Tint; // 0x10
        bool Set_Lock_Value; // 0x20
        char pad_21[0x3];
        FLinearColor Locked_Color; // 0x24
        float Locked_Emissive; // 0x34
    }; // Size: 0x38
    Params_Inside_Override_Emissive params{};
    params.ScatteredLight_Tran = (float)ScatteredLight_Tran;
    params.ScatteredLight_Desat = (float)ScatteredLight_Desat;
    params.DirectionalLight_Tran = (float)DirectionalLight_Tran;
    params.DirectionalLight_Desat = (float)DirectionalLight_Desat;
    params.Color_Tint = (FLinearColor)Color_Tint;
    params.Set_Lock_Value = (bool)Set_Lock_Value;
    params.Locked_Color = (FLinearColor)Locked_Color;
    params.Locked_Emissive = (float)Locked_Emissive;
    ProcessEvent(func, &params);
}
void ABP_Window_Parent_C::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
void ABP_Window_Parent_C::Set_to_Defaults() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.Set to Defaults"));
    struct Params_Set_to_Defaults {
    }; // Size: 0x0
    Params_Set_to_Defaults params{};
    ProcessEvent(func, &params);
}
void ABP_Window_Parent_C::Outside_Override_Emissive(float Day_Value, float Light_on_Intensity, float Light_off_Intensity, FLinearColor Night_Color, bool Set_Lock_Value) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.Outside Override Emissive"));
    struct Params_Outside_Override_Emissive {
        float Day_Value; // 0x0
        float Light_on_Intensity; // 0x4
        float Light_off_Intensity; // 0x8
        FLinearColor Night_Color; // 0xc
        bool Set_Lock_Value; // 0x1c
    }; // Size: 0x1d
    Params_Outside_Override_Emissive params{};
    params.Day_Value = (float)Day_Value;
    params.Light_on_Intensity = (float)Light_on_Intensity;
    params.Light_off_Intensity = (float)Light_off_Intensity;
    params.Night_Color = (FLinearColor)Night_Color;
    params.Set_Lock_Value = (bool)Set_Lock_Value;
    ProcessEvent(func, &params);
}
void ABP_Window_Parent_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_Window_Parent_C::ExecuteUbergraph_BP_Window_Parent(int32_t EntryPoint, float K2Node_Event_Day_Value, float K2Node_Event_Light_on_Intensity, float K2Node_Event_Light_off_Intensity, FLinearColor K2Node_Event_Night_Color, bool K2Node_Event_Set_Lock_Value, float K2Node_Event_ScatteredLight_Tran, float K2Node_Event_ScatteredLight_Desat, float K2Node_Event_DirectionalLight_Tran, float K2Node_Event_DirectionalLight_Desat, FLinearColor K2Node_Event_Color_Tint, bool K2Node_Event_Set_Lock_Value_1, FLinearColor K2Node_Event_Locked_Color, float K2Node_Event_Locked_Emissive, FName CallFunc_Array_Get_Item, FName CallFunc_Array_Get_Item_1, FName CallFunc_Array_Get_Item_2, FName CallFunc_Array_Get_Item_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_Window_Parent.BP_Window_Parent_C.ExecuteUbergraph_BP_Window_Parent"));
    struct Params_ExecuteUbergraph_BP_Window_Parent {
        int32_t EntryPoint; // 0x0
        float K2Node_Event_Day_Value; // 0x4
        float K2Node_Event_Light_on_Intensity; // 0x8
        float K2Node_Event_Light_off_Intensity; // 0xc
        FLinearColor K2Node_Event_Night_Color; // 0x10
        bool K2Node_Event_Set_Lock_Value; // 0x20
        char pad_21[0x3];
        float K2Node_Event_ScatteredLight_Tran; // 0x24
        float K2Node_Event_ScatteredLight_Desat; // 0x28
        float K2Node_Event_DirectionalLight_Tran; // 0x2c
        float K2Node_Event_DirectionalLight_Desat; // 0x30
        FLinearColor K2Node_Event_Color_Tint; // 0x34
        bool K2Node_Event_Set_Lock_Value_1; // 0x44
        char pad_45[0x3];
        FLinearColor K2Node_Event_Locked_Color; // 0x48
        float K2Node_Event_Locked_Emissive; // 0x58
        FName CallFunc_Array_Get_Item; // 0x5c
        FName CallFunc_Array_Get_Item_1; // 0x64
        FName CallFunc_Array_Get_Item_2; // 0x6c
        FName CallFunc_Array_Get_Item_3; // 0x74
    }; // Size: 0x7c
    Params_ExecuteUbergraph_BP_Window_Parent params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.K2Node_Event_Day_Value = (float)K2Node_Event_Day_Value;
    params.K2Node_Event_Light_on_Intensity = (float)K2Node_Event_Light_on_Intensity;
    params.K2Node_Event_Light_off_Intensity = (float)K2Node_Event_Light_off_Intensity;
    params.K2Node_Event_Night_Color = (FLinearColor)K2Node_Event_Night_Color;
    params.K2Node_Event_Set_Lock_Value = (bool)K2Node_Event_Set_Lock_Value;
    params.K2Node_Event_ScatteredLight_Tran = (float)K2Node_Event_ScatteredLight_Tran;
    params.K2Node_Event_ScatteredLight_Desat = (float)K2Node_Event_ScatteredLight_Desat;
    params.K2Node_Event_DirectionalLight_Tran = (float)K2Node_Event_DirectionalLight_Tran;
    params.K2Node_Event_DirectionalLight_Desat = (float)K2Node_Event_DirectionalLight_Desat;
    params.K2Node_Event_Color_Tint = (FLinearColor)K2Node_Event_Color_Tint;
    params.K2Node_Event_Set_Lock_Value_1 = (bool)K2Node_Event_Set_Lock_Value_1;
    params.K2Node_Event_Locked_Color = (FLinearColor)K2Node_Event_Locked_Color;
    params.K2Node_Event_Locked_Emissive = (float)K2Node_Event_Locked_Emissive;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Get_Item_1 = (FName)CallFunc_Array_Get_Item_1;
    params.CallFunc_Array_Get_Item_2 = (FName)CallFunc_Array_Get_Item_2;
    params.CallFunc_Array_Get_Item_3 = (FName)CallFunc_Array_Get_Item_3;
    ProcessEvent(func, &params);
}
