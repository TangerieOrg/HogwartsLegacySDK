#include "FTransform.hpp"
#include "UAnimInstance_RetrieveActorTransform.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UAnimInstance_RetrieveActorTransform* UAnimInstance_RetrieveActorTransform::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimInstance_RetrieveActorTransform");
    return (UAnimInstance_RetrieveActorTransform*)res;
}
void UAnimInstance_RetrieveActorTransform::AssignComponentTransform(FTransform& TransformInWorldSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimInstance_RetrieveActorTransform.AssignComponentTransform"));
    struct Params_AssignComponentTransform {
        FTransform TransformInWorldSpace; // 0x0
    }; // Size: 0x30
    Params_AssignComponentTransform params{};
    params.TransformInWorldSpace = (FTransform)TransformInWorldSpace;
    ProcessEvent(func, &params);
    TransformInWorldSpace = params.TransformInWorldSpace;
}
bool UAnimInstance_RetrieveActorTransform::RetreiveComponentTransform(FTransform& TransformInWorldSpace) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AvaAnimation.AnimInstance_RetrieveActorTransform.RetreiveComponentTransform"));
    struct Params_RetreiveComponentTransform {
        FTransform TransformInWorldSpace; // 0x0
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_RetreiveComponentTransform params{};
    params.TransformInWorldSpace = (FTransform)TransformInWorldSpace;
    ProcessEvent(func, &params);
    TransformInWorldSpace = params.TransformInWorldSpace;
    return (bool)params.ReturnValue;
}
