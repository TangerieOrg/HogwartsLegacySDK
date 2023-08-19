#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInterface.hpp"
class AActor;
#pragma pack(push, 1)
class UDynamicObject_Interface : public UInterface {
public:
    static UDynamicObject_Interface* StaticClass();
    void DOUpdateParents();
    void DOUpdateChildren();
    void DOUpdate();
    void DOUnregisterWithDOManager(AActor* DynamicObject);
    void DOSetup();
    void DOSetDynamicObjectRegistered(bool inRegistered);
    void DORequestActivation(AActor* inRequestingActor);
    void DORemoveParentActor(AActor* InParent);
    void DORemovedAsParent(AActor* inChild);
    void DORemovedAsChild(AActor* InParent);
    void DORemoveChildActor(AActor* inChild);
    void DORegisterWithDOManager(AActor* DynamicObject);
    bool DOIsActive();
    bool DOHasParent();
    bool DOHasChildren();
    bool DOHasActivationRequest();
    bool DOGetDynamciObjectRegistered();
    void DODestroyed();
    bool DODeactivationCheck(FVector Pos);
    void DODeactivate();
    void DOCleanup();
    bool DOAllowsAutoActivation();
    bool DOAllowAddAsParent(AActor* inChild);
    bool DOAllowAddAsChild(AActor* InParent);
    bool DOAddParentActor(AActor* InParent);
    void DOAddedAsParent(AActor* inChild);
    void DOAddedAsChild(AActor* InParent);
    bool DOAddChildActor(AActor* inChild);
    bool DOActivationCheck(FVector Pos);
    void DOActivate();
}; // Size: 0x28
#pragma pack(pop)
