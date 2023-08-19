#include "AActor.hpp"
#include "ATransfigurationPreviewActor.hpp"
#include "ATransformationStyleBase.hpp"
#include "UFunction.hpp"
void ATransformationStyleBase::StartTransformation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TransformationStyleBase.StartTransformation"));
    struct Params_StartTransformation {
    }; // Size: 0x0
    Params_StartTransformation params{};
    ProcessEvent(func, &params);
}
ATransformationStyleBase* ATransformationStyleBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TransformationStyleBase");
    return (ATransformationStyleBase*)res;
}
