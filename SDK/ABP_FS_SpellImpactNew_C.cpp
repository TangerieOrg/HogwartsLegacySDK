#include "ABP_FS_SpellImpactNew_C.hpp"
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
#include "URandomVector.hpp"
#include "UStaticMeshComponent.hpp"
#include "UUniformScalar.hpp"
#include "UUniformVector.hpp"
void ABP_FS_SpellImpactNew_C::ExecuteUbergraph_BP_FS_SpellImpactNew(int32_t EntryPoint, FVector CallFunc_K2_GetComponentLocation_ReturnValue, UNoiseField* CallFunc_SetNoiseField_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, URadialVector* CallFunc_SetRadialVector_ReturnValue, bool CallFunc_GetConsoleVariableBoolValue_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, URandomVector* CallFunc_SetRandomVector_ReturnValue, UUniformVector* CallFunc_SetUniformVector_ReturnValue, UUniformScalar* CallFunc_SetUniformScalar_ReturnValue, UOperatorField* CallFunc_SetOperatorField_ReturnValue, UOperatorField* CallFunc_SetOperatorField_ReturnValue_1, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue, UOperatorField* CallFunc_SetOperatorField_ReturnValue_2, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_1, UOperatorField* CallFunc_SetOperatorField_ReturnValue_3, UCullingField* CallFunc_SetCullingField_ReturnValue, UCullingField* CallFunc_SetCullingField_ReturnValue_1, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_2, URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_3, UCullingField* CallFunc_SetCullingField_ReturnValue_2, UUniformVector* CallFunc_SetUniformVector_ReturnValue_1, UOperatorField* CallFunc_SetOperatorField_ReturnValue_4, UCullingField* CallFunc_SetCullingField_ReturnValue_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Chaos/Blueprints/FieldNodes/Strain/SpellImpact/BP_FS_SpellImpactNew.BP_FS_SpellImpactNew_C.ExecuteUbergraph_BP_FS_SpellImpactNew"));
    struct Params_ExecuteUbergraph_BP_FS_SpellImpactNew {
        int32_t EntryPoint; // 0x0
        FVector CallFunc_K2_GetComponentLocation_ReturnValue; // 0x4
        UNoiseField* CallFunc_SetNoiseField_ReturnValue; // 0x10
        bool Temp_bool_IsClosed_Variable; // 0x18
        bool Temp_bool_Has_Been_Initd_Variable; // 0x19
        char pad_1a[0x6];
        URadialVector* CallFunc_SetRadialVector_ReturnValue; // 0x20
        bool CallFunc_GetConsoleVariableBoolValue_ReturnValue; // 0x28
        bool CallFunc_BooleanOR_ReturnValue; // 0x29
        bool CallFunc_Not_PreBool_ReturnValue; // 0x2a
        char pad_2b[0x5];
        URandomVector* CallFunc_SetRandomVector_ReturnValue; // 0x30
        UUniformVector* CallFunc_SetUniformVector_ReturnValue; // 0x38
        UUniformScalar* CallFunc_SetUniformScalar_ReturnValue; // 0x40
        UOperatorField* CallFunc_SetOperatorField_ReturnValue; // 0x48
        UOperatorField* CallFunc_SetOperatorField_ReturnValue_1; // 0x50
        URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue; // 0x58
        UOperatorField* CallFunc_SetOperatorField_ReturnValue_2; // 0x60
        URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_1; // 0x68
        UOperatorField* CallFunc_SetOperatorField_ReturnValue_3; // 0x70
        UCullingField* CallFunc_SetCullingField_ReturnValue; // 0x78
        UCullingField* CallFunc_SetCullingField_ReturnValue_1; // 0x80
        URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_2; // 0x88
        URadialFalloff* CallFunc_SetRadialFalloff_ReturnValue_3; // 0x90
        UCullingField* CallFunc_SetCullingField_ReturnValue_2; // 0x98
        UUniformVector* CallFunc_SetUniformVector_ReturnValue_1; // 0xa0
        UOperatorField* CallFunc_SetOperatorField_ReturnValue_4; // 0xa8
        UCullingField* CallFunc_SetCullingField_ReturnValue_3; // 0xb0
    }; // Size: 0xb8
    Params_ExecuteUbergraph_BP_FS_SpellImpactNew params{};
    params.EntryPoint = (int32_t)EntryPoint;
    params.CallFunc_K2_GetComponentLocation_ReturnValue = (FVector)CallFunc_K2_GetComponentLocation_ReturnValue;
    params.CallFunc_SetNoiseField_ReturnValue = (UNoiseField*)CallFunc_SetNoiseField_ReturnValue;
    params.Temp_bool_IsClosed_Variable = (bool)Temp_bool_IsClosed_Variable;
    params.Temp_bool_Has_Been_Initd_Variable = (bool)Temp_bool_Has_Been_Initd_Variable;
    params.CallFunc_SetRadialVector_ReturnValue = (URadialVector*)CallFunc_SetRadialVector_ReturnValue;
    params.CallFunc_GetConsoleVariableBoolValue_ReturnValue = (bool)CallFunc_GetConsoleVariableBoolValue_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_SetRandomVector_ReturnValue = (URandomVector*)CallFunc_SetRandomVector_ReturnValue;
    params.CallFunc_SetUniformVector_ReturnValue = (UUniformVector*)CallFunc_SetUniformVector_ReturnValue;
    params.CallFunc_SetUniformScalar_ReturnValue = (UUniformScalar*)CallFunc_SetUniformScalar_ReturnValue;
    params.CallFunc_SetOperatorField_ReturnValue = (UOperatorField*)CallFunc_SetOperatorField_ReturnValue;
    params.CallFunc_SetOperatorField_ReturnValue_1 = (UOperatorField*)CallFunc_SetOperatorField_ReturnValue_1;
    params.CallFunc_SetRadialFalloff_ReturnValue = (URadialFalloff*)CallFunc_SetRadialFalloff_ReturnValue;
    params.CallFunc_SetOperatorField_ReturnValue_2 = (UOperatorField*)CallFunc_SetOperatorField_ReturnValue_2;
    params.CallFunc_SetRadialFalloff_ReturnValue_1 = (URadialFalloff*)CallFunc_SetRadialFalloff_ReturnValue_1;
    params.CallFunc_SetOperatorField_ReturnValue_3 = (UOperatorField*)CallFunc_SetOperatorField_ReturnValue_3;
    params.CallFunc_SetCullingField_ReturnValue = (UCullingField*)CallFunc_SetCullingField_ReturnValue;
    params.CallFunc_SetCullingField_ReturnValue_1 = (UCullingField*)CallFunc_SetCullingField_ReturnValue_1;
    params.CallFunc_SetRadialFalloff_ReturnValue_2 = (URadialFalloff*)CallFunc_SetRadialFalloff_ReturnValue_2;
    params.CallFunc_SetRadialFalloff_ReturnValue_3 = (URadialFalloff*)CallFunc_SetRadialFalloff_ReturnValue_3;
    params.CallFunc_SetCullingField_ReturnValue_2 = (UCullingField*)CallFunc_SetCullingField_ReturnValue_2;
    params.CallFunc_SetUniformVector_ReturnValue_1 = (UUniformVector*)CallFunc_SetUniformVector_ReturnValue_1;
    params.CallFunc_SetOperatorField_ReturnValue_4 = (UOperatorField*)CallFunc_SetOperatorField_ReturnValue_4;
    params.CallFunc_SetCullingField_ReturnValue_3 = (UCullingField*)CallFunc_SetCullingField_ReturnValue_3;
    ProcessEvent(func, &params);
}
void ABP_FS_SpellImpactNew_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Chaos/Blueprints/FieldNodes/Strain/SpellImpact/BP_FS_SpellImpactNew.BP_FS_SpellImpactNew_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
ABP_FS_SpellImpactNew_C* ABP_FS_SpellImpactNew_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Chaos/Blueprints/FieldNodes/Strain/SpellImpact/BP_FS_SpellImpactNew.BP_FS_SpellImpactNew_C");
    return (ABP_FS_SpellImpactNew_C*)res;
}
void ABP_FS_SpellImpactNew_C::UserConstructionScript(UMaterialInterface* Strain_Material, float Radius_Multiplier, float CallFunc_Multiply_FloatFloat_ReturnValue, FVector CallFunc_Conv_FloatToVector_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Chaos/Blueprints/FieldNodes/Strain/SpellImpact/BP_FS_SpellImpactNew.BP_FS_SpellImpactNew_C.UserConstructionScript"));
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
