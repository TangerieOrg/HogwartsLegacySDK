#include "AActor.hpp"
#include "FVector.hpp"
#include "UDynamicObject_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
void UDynamicObject_Interface::DOUpdateParents() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOUpdateParents"));
    struct Params_DOUpdateParents {
    }; // Size: 0x0
    Params_DOUpdateParents params{};
    ProcessEvent(func, &params);
}
bool UDynamicObject_Interface::DOAddChildActor(AActor* inChild) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOAddChildActor"));
    struct Params_DOAddChildActor {
        AActor* inChild; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DOAddChildActor params{};
    params.inChild = (AActor*)inChild;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UDynamicObject_Interface* UDynamicObject_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicObject_Interface");
    return (UDynamicObject_Interface*)res;
}
void UDynamicObject_Interface::DOUpdateChildren() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOUpdateChildren"));
    struct Params_DOUpdateChildren {
    }; // Size: 0x0
    Params_DOUpdateChildren params{};
    ProcessEvent(func, &params);
}
void UDynamicObject_Interface::DORequestActivation(AActor* inRequestingActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DORequestActivation"));
    struct Params_DORequestActivation {
        AActor* inRequestingActor; // 0x0
    }; // Size: 0x8
    Params_DORequestActivation params{};
    params.inRequestingActor = (AActor*)inRequestingActor;
    ProcessEvent(func, &params);
}
void UDynamicObject_Interface::DOUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOUpdate"));
    struct Params_DOUpdate {
    }; // Size: 0x0
    Params_DOUpdate params{};
    ProcessEvent(func, &params);
}
void UDynamicObject_Interface::DOUnregisterWithDOManager(AActor* DynamicObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOUnregisterWithDOManager"));
    struct Params_DOUnregisterWithDOManager {
        AActor* DynamicObject; // 0x0
    }; // Size: 0x8
    Params_DOUnregisterWithDOManager params{};
    params.DynamicObject = (AActor*)DynamicObject;
    ProcessEvent(func, &params);
}
void UDynamicObject_Interface::DOSetup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOSetup"));
    struct Params_DOSetup {
    }; // Size: 0x0
    Params_DOSetup params{};
    ProcessEvent(func, &params);
}
void UDynamicObject_Interface::DORemoveChildActor(AActor* inChild) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DORemoveChildActor"));
    struct Params_DORemoveChildActor {
        AActor* inChild; // 0x0
    }; // Size: 0x8
    Params_DORemoveChildActor params{};
    params.inChild = (AActor*)inChild;
    ProcessEvent(func, &params);
}
void UDynamicObject_Interface::DOSetDynamicObjectRegistered(bool inRegistered) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOSetDynamicObjectRegistered"));
    struct Params_DOSetDynamicObjectRegistered {
        bool inRegistered; // 0x0
    }; // Size: 0x1
    Params_DOSetDynamicObjectRegistered params{};
    params.inRegistered = (bool)inRegistered;
    ProcessEvent(func, &params);
}
void UDynamicObject_Interface::DORemoveParentActor(AActor* InParent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DORemoveParentActor"));
    struct Params_DORemoveParentActor {
        AActor* InParent; // 0x0
    }; // Size: 0x8
    Params_DORemoveParentActor params{};
    params.InParent = (AActor*)InParent;
    ProcessEvent(func, &params);
}
void UDynamicObject_Interface::DORemovedAsParent(AActor* inChild) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DORemovedAsParent"));
    struct Params_DORemovedAsParent {
        AActor* inChild; // 0x0
    }; // Size: 0x8
    Params_DORemovedAsParent params{};
    params.inChild = (AActor*)inChild;
    ProcessEvent(func, &params);
}
bool UDynamicObject_Interface::DOHasParent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOHasParent"));
    struct Params_DOHasParent {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DOHasParent params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UDynamicObject_Interface::DORemovedAsChild(AActor* InParent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DORemovedAsChild"));
    struct Params_DORemovedAsChild {
        AActor* InParent; // 0x0
    }; // Size: 0x8
    Params_DORemovedAsChild params{};
    params.InParent = (AActor*)InParent;
    ProcessEvent(func, &params);
}
void UDynamicObject_Interface::DORegisterWithDOManager(AActor* DynamicObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DORegisterWithDOManager"));
    struct Params_DORegisterWithDOManager {
        AActor* DynamicObject; // 0x0
    }; // Size: 0x8
    Params_DORegisterWithDOManager params{};
    params.DynamicObject = (AActor*)DynamicObject;
    ProcessEvent(func, &params);
}
bool UDynamicObject_Interface::DOIsActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOIsActive"));
    struct Params_DOIsActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DOIsActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UDynamicObject_Interface::DOCleanup() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOCleanup"));
    struct Params_DOCleanup {
    }; // Size: 0x0
    Params_DOCleanup params{};
    ProcessEvent(func, &params);
}
bool UDynamicObject_Interface::DOHasChildren() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOHasChildren"));
    struct Params_DOHasChildren {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DOHasChildren params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDynamicObject_Interface::DOHasActivationRequest() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOHasActivationRequest"));
    struct Params_DOHasActivationRequest {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DOHasActivationRequest params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDynamicObject_Interface::DOGetDynamciObjectRegistered() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOGetDynamciObjectRegistered"));
    struct Params_DOGetDynamciObjectRegistered {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DOGetDynamciObjectRegistered params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UDynamicObject_Interface::DOAddedAsChild(AActor* InParent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOAddedAsChild"));
    struct Params_DOAddedAsChild {
        AActor* InParent; // 0x0
    }; // Size: 0x8
    Params_DOAddedAsChild params{};
    params.InParent = (AActor*)InParent;
    ProcessEvent(func, &params);
}
void UDynamicObject_Interface::DODestroyed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DODestroyed"));
    struct Params_DODestroyed {
    }; // Size: 0x0
    Params_DODestroyed params{};
    ProcessEvent(func, &params);
}
bool UDynamicObject_Interface::DODeactivationCheck(FVector Pos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DODeactivationCheck"));
    struct Params_DODeactivationCheck {
        FVector Pos; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_DODeactivationCheck params{};
    params.Pos = (FVector)Pos;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UDynamicObject_Interface::DODeactivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DODeactivate"));
    struct Params_DODeactivate {
    }; // Size: 0x0
    Params_DODeactivate params{};
    ProcessEvent(func, &params);
}
bool UDynamicObject_Interface::DOAllowsAutoActivation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOAllowsAutoActivation"));
    struct Params_DOAllowsAutoActivation {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_DOAllowsAutoActivation params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDynamicObject_Interface::DOAllowAddAsParent(AActor* inChild) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOAllowAddAsParent"));
    struct Params_DOAllowAddAsParent {
        AActor* inChild; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DOAllowAddAsParent params{};
    params.inChild = (AActor*)inChild;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDynamicObject_Interface::DOAllowAddAsChild(AActor* InParent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOAllowAddAsChild"));
    struct Params_DOAllowAddAsChild {
        AActor* InParent; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DOAllowAddAsChild params{};
    params.InParent = (AActor*)InParent;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UDynamicObject_Interface::DOAddParentActor(AActor* InParent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOAddParentActor"));
    struct Params_DOAddParentActor {
        AActor* InParent; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DOAddParentActor params{};
    params.InParent = (AActor*)InParent;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UDynamicObject_Interface::DOAddedAsParent(AActor* inChild) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOAddedAsParent"));
    struct Params_DOAddedAsParent {
        AActor* inChild; // 0x0
    }; // Size: 0x8
    Params_DOAddedAsParent params{};
    params.inChild = (AActor*)inChild;
    ProcessEvent(func, &params);
}
bool UDynamicObject_Interface::DOActivationCheck(FVector Pos) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOActivationCheck"));
    struct Params_DOActivationCheck {
        FVector Pos; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_DOActivationCheck params{};
    params.Pos = (FVector)Pos;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UDynamicObject_Interface::DOActivate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicObject_Interface.DOActivate"));
    struct Params_DOActivate {
    }; // Size: 0x0
    Params_DOActivate params{};
    ProcessEvent(func, &params);
}
