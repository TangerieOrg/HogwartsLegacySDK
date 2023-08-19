#pragma once
#include <cstdint>
#include "FStencilValueRenderCustomDepth.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class UPrimitiveComponent;
class AActor;
class AStencilManagerSingleton;
#pragma pack(push, 1)
class UStencilManager : public UBlueprintFunctionLibrary {
public:
    static UStencilManager* StaticClass();
    static void UnlockForStencil(UObject* WorldContextObject, UObject* LockOwner, UPrimitiveComponent* Component, bool& bSuccess, bool bRestore);
    static void UnlockAllForStencil(UObject* WorldContextObject, UObject* LockOwner, bool& bSuccess, bool bRestore);
    static bool StencilGroupEnabled(UObject* WorldContextObject, FName Group);
    static bool StencilEnabled(UObject* WorldContextObject);
    static void SetStencilValueRenderCustomDepth(UPrimitiveComponent* PrimitiveComponent, FStencilValueRenderCustomDepth StencilValueRenderCustomDepth);
    static void SetStencilValueAndRenderCustomDepth(UPrimitiveComponent* PrimitiveComponent, int32_t StencilValue, bool bRenderCustomDepth);
    static void SetStencilValue(UPrimitiveComponent* PrimitiveComponent, int32_t StencilValue);
    static void SetStencilEffect(AActor* InTarget, FName StencilEffect, bool bFlag);
    static void SetStencil(AActor* InTarget, uint8_t StencilValue, bool bFlag);
    static void SetRenderCustomDepth(UPrimitiveComponent* PrimitiveComponent, bool bRenderCustomDepth);
    static void SetActorStencilValueRenderCustomDepth(AActor* Actor, FStencilValueRenderCustomDepth StencilValueRenderCustomDepth);
    static void SetActorStencilValueAndRenderCustomDepth(AActor* Actor, int32_t StencilValue, bool bRenderCustomDepth);
    static void SetActorStencilValue(AActor* Actor, int32_t StencilValue);
    static void SetActorRenderCustomDepth(AActor* Actor, bool bRenderCustomDepth);
    static void LockOwnerForStencil(UObject* WorldContextObject, UPrimitiveComponent* Component, UObject*& Owner);
    static void LockForStencil(UObject* WorldContextObject, UObject* LockOwner, UPrimitiveComponent* Component, int32_t StencilValue, bool& bSuccess, bool bRenderCustomDepth);
    static void LockAllForStencil(UObject* WorldContextObject, UObject* LockOwner, AActor* Actor, int32_t StencilValue, bool& bSuccess, bool bRenderCustomDepth);
    static void IsLockedForStencil(UObject* WorldContextObject, UPrimitiveComponent* Component, bool& bLocked);
    static AStencilManagerSingleton* GetStencilManager(UObject* WorldContextObject);
    static void GetCurrentStencilEffect(AActor* InTarget, FName& StencilEffect);
    static void EnableStencilGroups(UObject* WorldContextObject, TArray<FName> Groups, bool bEnable);
    static void EnableStencilGroup(UObject* WorldContextObject, FName Group, bool bEnable);
    static void EnableStencil(UObject* WorldContextObject, bool bEnable);
    static void DisableStencilGroups(UObject* WorldContextObject, TArray<FName> Groups);
    static void DisableStencilGroup(UObject* WorldContextObject, FName Group);
}; // Size: 0x28
#pragma pack(pop)
