#include "AActor.hpp"
#include "AControlRigControlActor.hpp"
#include "FTransform.hpp"
#include "UClass.hpp"
#include "UControlRig.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "USceneComponent.hpp"
#include "UStaticMeshComponent.hpp"
AControlRigControlActor* AControlRigControlActor::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRigControlActor");
    return (AControlRigControlActor*)res;
}
void AControlRigControlActor::Refresh() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigControlActor.Refresh"));
    struct Params_Refresh {
    }; // Size: 0x0
    Params_Refresh params{};
    ProcessEvent(func, &params);
}
void AControlRigControlActor::Clear() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRigControlActor.Clear"));
    struct Params_Clear {
    }; // Size: 0x0
    Params_Clear params{};
    ProcessEvent(func, &params);
}
