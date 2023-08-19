#include "AActor.hpp"
#include "ABP_FakeFog_A_C.hpp"
#include "FLinearColor.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "USceneComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
ABP_FakeFog_A_C* ABP_FakeFog_A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Lighting/Universal/BP_FakeFog_A.BP_FakeFog_A_C");
    return (ABP_FakeFog_A_C*)res;
}
void ABP_FakeFog_A_C::Construct_Fog(bool Temp_bool_Variable, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, UStaticMesh* K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/Universal/BP_FakeFog_A.BP_FakeFog_A_C.Construct Fog"));
    struct Params_Construct_Fog {
        bool Temp_bool_Variable; // 0x0
        char pad_1[0x7];
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x8
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue; // 0x10
        bool CallFunc_SetStaticMesh_ReturnValue; // 0x18
        char pad_19[0x7];
        UStaticMesh* K2Node_Select_Default; // 0x20
    }; // Size: 0x28
    Params_Construct_Fog params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_GetMaterial_ReturnValue = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue;
    params.CallFunc_SetStaticMesh_ReturnValue = (bool)CallFunc_SetStaticMesh_ReturnValue;
    params.K2Node_Select_Default = (UStaticMesh*)K2Node_Select_Default;
    ProcessEvent(func, &params);
}
void ABP_FakeFog_A_C::Fog_Sheet_Selection() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/Universal/BP_FakeFog_A.BP_FakeFog_A_C.Fog Sheet Selection"));
    struct Params_Fog_Sheet_Selection {
    }; // Size: 0x0
    Params_Fog_Sheet_Selection params{};
    ProcessEvent(func, &params);
}
void ABP_FakeFog_A_C::Texture_Dependent() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/Universal/BP_FakeFog_A.BP_FakeFog_A_C.Texture Dependent"));
    struct Params_Texture_Dependent {
    }; // Size: 0x0
    Params_Texture_Dependent params{};
    ProcessEvent(func, &params);
}
void ABP_FakeFog_A_C::Base_Fog_Parameters() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/Universal/BP_FakeFog_A.BP_FakeFog_A_C.Base Fog Parameters"));
    struct Params_Base_Fog_Parameters {
    }; // Size: 0x0
    Params_Base_Fog_Parameters params{};
    ProcessEvent(func, &params);
}
void ABP_FakeFog_A_C::UserConstructionScript0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Lighting/Universal/BP_FakeFog_A.BP_FakeFog_A_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
