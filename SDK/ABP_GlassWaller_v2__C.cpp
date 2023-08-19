#include "ABP_GlassWaller_v2__C.hpp"
#include "AGlassWaller.hpp"
#include "ECollisionChannel.hpp"
#include "ECollisionEnabled\Type.hpp"
#include "FF_SplineCollisionGenerationSettings.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UBP_SplineCollisionGenerator_C.hpp"
#include "UFunction.hpp"
#include "UPhysicalMaterial.hpp"
#include "USplineComponent.hpp"
void ABP_GlassWaller_v2__C::ViewDocumentation() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_GlassWaller_v2_.BP_GlassWaller_v2__C.ViewDocumentation"));
    struct Params_ViewDocumentation {
    }; // Size: 0x0
    Params_ViewDocumentation params{};
    ProcessEvent(func, &params);
}
ABP_GlassWaller_v2__C* ABP_GlassWaller_v2__C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Utilities/BP_GlassWaller_v2_.BP_GlassWaller_v2__C");
    return (ABP_GlassWaller_v2__C*)res;
}
void ABP_GlassWaller_v2__C::Request_Destroy_Spline_Helper(USplineComponent* SplineHelper, bool& Success, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_GlassWaller_v2_.BP_GlassWaller_v2__C.Request Destroy Spline Helper"));
    struct Params_Request_Destroy_Spline_Helper {
        USplineComponent* SplineHelper; // 0x0
        bool Success; // 0x8
        bool CallFunc_IsValid_ReturnValue; // 0x9
    }; // Size: 0xa
    Params_Request_Destroy_Spline_Helper params{};
    params.SplineHelper = (USplineComponent*)SplineHelper;
    params.Success = (bool)Success;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    Success = params.Success;
}
void ABP_GlassWaller_v2__C::UserConstructionScript(bool CallFunc_WithEditor_ReturnValue, FVector CallFunc_Conv_LinearColorToVector_ReturnValue, FF_SplineCollisionGenerationSettings K2Node_MakeStruct_F_SplineCollisionGenerationSettings) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/BP_GlassWaller_v2_.BP_GlassWaller_v2__C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        bool CallFunc_WithEditor_ReturnValue; // 0x0
        char pad_1[0x3];
        FVector CallFunc_Conv_LinearColorToVector_ReturnValue; // 0x4
        FF_SplineCollisionGenerationSettings K2Node_MakeStruct_F_SplineCollisionGenerationSettings; // 0x10
    }; // Size: 0xa0
    Params_UserConstructionScript params{};
    params.CallFunc_WithEditor_ReturnValue = (bool)CallFunc_WithEditor_ReturnValue;
    params.CallFunc_Conv_LinearColorToVector_ReturnValue = (FVector)CallFunc_Conv_LinearColorToVector_ReturnValue;
    params.K2Node_MakeStruct_F_SplineCollisionGenerationSettings = (FF_SplineCollisionGenerationSettings)K2Node_MakeStruct_F_SplineCollisionGenerationSettings;
    ProcessEvent(func, &params);
}
