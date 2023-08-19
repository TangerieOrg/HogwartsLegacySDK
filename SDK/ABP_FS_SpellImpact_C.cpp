#include "ABP_FS_SpellImpact_C.hpp"
#include "AFieldSystemActor.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"
#include "UCullingField.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UNoiseField.hpp"
#include "UOperatorField.hpp"
#include "URadialFalloff.hpp"
#include "URadialVector.hpp"
#include "UStaticMeshComponent.hpp"
ABP_FS_SpellImpact_C* ABP_FS_SpellImpact_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Chaos/Blueprints/FieldNodes/Strain/SpellImpact/BP_FS_SpellImpact.BP_FS_SpellImpact_C");
    return (ABP_FS_SpellImpact_C*)res;
}
void ABP_FS_SpellImpact_C::UserConstructionScript(UMaterialInterface* Strain_Material, float Radius_Multiplier, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Chaos/Blueprints/FieldNodes/Strain/SpellImpact/BP_FS_SpellImpact.BP_FS_SpellImpact_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        UMaterialInterface* Strain_Material; // 0x0
        float Radius_Multiplier; // 0x8
        float CallFunc_Multiply_FloatFloat_ReturnValue; // 0xc
        FVector CallFunc_Conv_FloatToVector_ReturnValue; // 0x10
    }; // Size: 0x1c
    Params_UserConstructionScript params{};
    params.Strain_Material = (UMaterialInterface*)Strain_Material;
    params.Radius_Multiplier = (float)Radius_Multiplier;
    params.CallFunc_Multiply_FloatFloat_ReturnValue = (float)CallFunc_Multiply_FloatFloat_ReturnValue;
    params.CallFunc_Conv_FloatToVector_ReturnValue = (FVector)CallFunc_Conv_FloatToVector_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_FS_SpellImpact_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Chaos/Blueprints/FieldNodes/Strain/SpellImpact/BP_FS_SpellImpact.BP_FS_SpellImpact_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_FS_SpellImpact_C::ExecuteUbergraph_BP_FS_SpellImpact(int32_t EntryPoint, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, UNoiseField* CallFunc_SetNoiseField_ReturnValue, bool Temp_bool_IsClosed_Variable, FVector CallFunc_K2_GetComponentLocation_ReturnValue, URadialVector* CallFunc_SetRadialVector_ReturnValue, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_1, UOperatorField* CallFunc_SetOperatorField_ReturnValue, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_2, UOperatorField* CallFunc_SetOperatorField_ReturnValue_1, UCullingField* CallFunc_SetCullingField_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_3, UCullingField* CallFunc_SetCullingField_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Chaos/Blueprints/FieldNodes/Strain/SpellImpact/BP_FS_SpellImpact.BP_FS_SpellImpact_C.ExecuteUbergraph_BP_FS_SpellImpact"));
    struct Params_ExecuteUbergraph_BP_FS_SpellImpact {
        int32_t EntryPoint; // 0x0
        bool CallFunc_GetConsoleVariableBoolValue_ReturnValue; // 0x4
        char pad_5[0x3];
        UNoiseField* CallFunc_SetNoiseField_ReturnValue; // 0x8
        bool Temp_bool_IsClosed_Variable; // 0x10
        char pad_11[0x3];
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x14
        URadialVector* CallFunc_SetRadialVector_ReturnValue; // 0x20
        URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue; // 0x28
        URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_1; // 0x30
        UOperatorField* CallFunc_SetOperatorField_ReturnValue; // 0x38
        URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_2; // 0x40
        UOperatorField* CallFunc_SetOperatorField_ReturnValue_1; // 0x48
        UCullingField* CallFunc_SetCullingField_ReturnValue; // 0x50
        bool Temp_bool_Has_Been_Initd_Variable; // 0x58
        bool CallFunc_BooleanOR_ReturnValue; // 0x59
        bool CallFunc_Not_PreBool_ReturnValue; // 0x5a
        char pad_5b[0x5];
        URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_3; // 0x60
        UCullingField* CallFunc_SetCullingField_ReturnValue_1; // 0x68
    }; // Size: 0x70
    Params_ExecuteUbergraph_BP_FS_SpellImpact params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_GetConsoleVariableBoolValue_ReturnValue = (bool)CallFunc_GetConsoleVariableBoolValue_ReturnValue;
    params.CallFunc_SetNoiseField_ReturnValue = (UNoiseField*)CallFunc_SetNoiseField_ReturnValue;
    params.Temp_bool_IsClosed_Variable = (bool)Temp_bool_IsClosed_Variable;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_SetRadialVector_ReturnValue = (URadialVector*)CallFunc_SetRadialVector_ReturnValue;
    params.CallFunc_SetRadialFalloff_ReturnValue = (URadialFalloff*)CallFunc_SetRadialFalloff_ReturnValue;
    params.CallFunc_SetRadialFalloff_ReturnValue_1 = (URadialFalloff*)CallFunc_SetRadialFalloff_ReturnValue_1;
    params.CallFunc_SetOperatorField_ReturnValue = (UOperatorField*)CallFunc_SetOperatorField_ReturnValue;
    params.CallFunc_SetRadialFalloff_ReturnValue_2 = (URadialFalloff*)CallFunc_SetRadialFalloff_ReturnValue_2;
    params.CallFunc_SetOperatorField_ReturnValue_1 = (UOperatorField*)CallFunc_SetOperatorField_ReturnValue_1;
    params.CallFunc_SetCullingField_ReturnValue = (UCullingField*)CallFunc_SetCullingField_ReturnValue;
    params.Temp_bool_Has_Been_Initd_Variable = (bool)Temp_bool_Has_Been_Initd_Variable;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_SetRadialFalloff_ReturnValue_3 = (URadialFalloff*)CallFunc_SetRadialFalloff_ReturnValue_3;
    params.CallFunc_SetCullingField_ReturnValue_1 = (UCullingField*)CallFunc_SetCullingField_ReturnValue_1;
    ProcessEvent(func, &params);
}
