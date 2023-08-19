#include "ERigExecutionType.hpp"
#include "FControlRigDrawContainer.hpp"
#include "FRigHierarchyContainer.hpp"
#include "FRigInfluenceMapPerEvent.hpp"
#include "UAnimationDataSourceRegistry.hpp"
#include "UAssetUserData.hpp"
#include "UClass.hpp"
#include "UControlRig.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URigVM.hpp"
void UControlRig::SetInteractionRigClass(UClass* InInteractionRigClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRig.SetInteractionRigClass"));
    struct Params_SetInteractionRigClass {
        UClass* InInteractionRigClass; // 0x0
    }; // Size: 0x8
    Params_SetInteractionRigClass params{};
    params.InInteractionRigClass = (UClass*)InInteractionRigClass;
    ProcessEvent(func, &params);
}
UControlRig* UControlRig::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlRig.ControlRig");
    return (UControlRig*)res;
}
void UControlRig::SetInteractionRig(UControlRig* InInteractionRig) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRig.SetInteractionRig"));
    struct Params_SetInteractionRig {
        UControlRig* InInteractionRig; // 0x0
    }; // Size: 0x8
    Params_SetInteractionRig params{};
    params.InInteractionRig = (UControlRig*)InInteractionRig;
    ProcessEvent(func, &params);
}
UClass* UControlRig::GetInteractionRigClass() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRig.GetInteractionRigClass"));
    struct Params_GetInteractionRigClass {
        UClass* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInteractionRigClass params{};
    ProcessEvent(func, &params);
    return (UClass*)params.ReturnValue;
}
UControlRig* UControlRig::GetInteractionRig() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlRig.ControlRig.GetInteractionRig"));
    struct Params_GetInteractionRig {
        UControlRig* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInteractionRig params{};
    ProcessEvent(func, &params);
    return (UControlRig*)params.ReturnValue;
}
