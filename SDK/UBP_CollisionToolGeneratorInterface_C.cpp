#include "UBP_CollisionToolGeneratorInterface_C.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "USplineComponent.hpp"
UBP_CollisionToolGeneratorInterface_C* UBP_CollisionToolGeneratorInterface_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_CollisionToolGeneratorInterface.BP_CollisionToolGeneratorInterface_C");
    return (UBP_CollisionToolGeneratorInterface_C*)res;
}
void UBP_CollisionToolGeneratorInterface_C::Request_Destroy_Spline_Helper(USplineComponent* SplineHelper, bool& Success) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Blueprints/Utilities/EditorUtilities/BP_CollisionToolGeneratorInterface.BP_CollisionToolGeneratorInterface_C.Request Destroy Spline Helper"));
    struct Params_Request_Destroy_Spline_Helper {
        USplineComponent* SplineHelper; // 0x0
        bool Success; // 0x8
    }; // Size: 0x9
    Params_Request_Destroy_Spline_Helper params{};
    params.SplineHelper = (USplineComponent*)SplineHelper;
    params.Success = (bool)Success;
    ProcessEvent(func, &params);
    Success = params.Success;
}
