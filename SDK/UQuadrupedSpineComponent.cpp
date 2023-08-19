#include "FQuadrupedSpineBoneChain.hpp"
#include "FQuadrupedSpineRebase.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UQuadrupedSpineComponent.hpp"
#include "URootMotionModifier_QuadrupedSpine.hpp"
UQuadrupedSpineComponent* UQuadrupedSpineComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.QuadrupedSpineComponent");
    return (UQuadrupedSpineComponent*)res;
}
float UQuadrupedSpineComponent::GetInterpTimeAtSpeed(UQuadrupedSpineComponent* InSpineComponent, float InNormalizedSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.QuadrupedSpineComponent.GetInterpTimeAtSpeed"));
    struct Params_GetInterpTimeAtSpeed {
        UQuadrupedSpineComponent* InSpineComponent; // 0x0
        float InNormalizedSpeed; // 0x8
        float ReturnValue; // 0xc
    }; // Size: 0x10
    Params_GetInterpTimeAtSpeed params{};
    params.InSpineComponent = (UQuadrupedSpineComponent*)InSpineComponent;
    params.InNormalizedSpeed = (float)InNormalizedSpeed;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
