#include "AActor.hpp"
#include "AStencilManagerSingleton.hpp"
#include "FStencilValueRenderCustomDepth.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "UStencilManager.hpp"
UStencilManager* UStencilManager::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.StencilManager");
    return (UStencilManager*)res;
}
void UStencilManager::SetActorStencilValueRenderCustomDepth(AActor* Actor, FStencilValueRenderCustomDepth StencilValueRenderCustomDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.SetActorStencilValueRenderCustomDepth"));
    struct Params_SetActorStencilValueRenderCustomDepth {
        AActor* Actor; // 0x0
        FStencilValueRenderCustomDepth StencilValueRenderCustomDepth; // 0x8
    }; // Size: 0x10
    Params_SetActorStencilValueRenderCustomDepth params{};
    params.Actor = (AActor*)Actor;
    params.StencilValueRenderCustomDepth = (FStencilValueRenderCustomDepth)StencilValueRenderCustomDepth;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::UnlockForStencil(UObject* WorldContextObject, UObject* LockOwner, UPrimitiveComponent* Component, bool& bSuccess, bool bRestore) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.UnlockForStencil"));
    struct Params_UnlockForStencil {
        UObject* WorldContextObject; // 0x0
        UObject* LockOwner; // 0x8
        UPrimitiveComponent* Component; // 0x10
        bool bSuccess; // 0x18
        bool bRestore; // 0x19
    }; // Size: 0x1a
    Params_UnlockForStencil params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LockOwner = (UObject*)LockOwner;
    params.Component = (UPrimitiveComponent*)Component;
    params.bSuccess = (bool)bSuccess;
    params.bRestore = (bool)bRestore;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UStencilManager::UnlockAllForStencil(UObject* WorldContextObject, UObject* LockOwner, bool& bSuccess, bool bRestore) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.UnlockAllForStencil"));
    struct Params_UnlockAllForStencil {
        UObject* WorldContextObject; // 0x0
        UObject* LockOwner; // 0x8
        bool bSuccess; // 0x10
        bool bRestore; // 0x11
    }; // Size: 0x12
    Params_UnlockAllForStencil params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LockOwner = (UObject*)LockOwner;
    params.bSuccess = (bool)bSuccess;
    params.bRestore = (bool)bRestore;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
bool UStencilManager::StencilGroupEnabled(UObject* WorldContextObject, FName Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.StencilGroupEnabled"));
    struct Params_StencilGroupEnabled {
        UObject* WorldContextObject; // 0x0
        FName Group; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_StencilGroupEnabled params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Group = (FName)Group;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UStencilManager::StencilEnabled(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.StencilEnabled"));
    struct Params_StencilEnabled {
        UObject* WorldContextObject; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_StencilEnabled params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UStencilManager::SetStencilValueRenderCustomDepth(UPrimitiveComponent* PrimitiveComponent, FStencilValueRenderCustomDepth StencilValueRenderCustomDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.SetStencilValueRenderCustomDepth"));
    struct Params_SetStencilValueRenderCustomDepth {
        UPrimitiveComponent* PrimitiveComponent; // 0x0
        FStencilValueRenderCustomDepth StencilValueRenderCustomDepth; // 0x8
    }; // Size: 0x10
    Params_SetStencilValueRenderCustomDepth params{};
    params.PrimitiveComponent = (UPrimitiveComponent*)PrimitiveComponent;
    params.StencilValueRenderCustomDepth = (FStencilValueRenderCustomDepth)StencilValueRenderCustomDepth;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::SetStencilValueAndRenderCustomDepth(UPrimitiveComponent* PrimitiveComponent, int32_t StencilValue, bool bRenderCustomDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.SetStencilValueAndRenderCustomDepth"));
    struct Params_SetStencilValueAndRenderCustomDepth {
        UPrimitiveComponent* PrimitiveComponent; // 0x0
        int32_t StencilValue; // 0x8
        bool bRenderCustomDepth; // 0xc
    }; // Size: 0xd
    Params_SetStencilValueAndRenderCustomDepth params{};
    params.PrimitiveComponent = (UPrimitiveComponent*)PrimitiveComponent;
    params.StencilValue = (int32_t)StencilValue;
    params.bRenderCustomDepth = (bool)bRenderCustomDepth;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::SetStencilValue(UPrimitiveComponent* PrimitiveComponent, int32_t StencilValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.SetStencilValue"));
    struct Params_SetStencilValue {
        UPrimitiveComponent* PrimitiveComponent; // 0x0
        int32_t StencilValue; // 0x8
    }; // Size: 0xc
    Params_SetStencilValue params{};
    params.PrimitiveComponent = (UPrimitiveComponent*)PrimitiveComponent;
    params.StencilValue = (int32_t)StencilValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::SetStencilEffect(AActor* InTarget, FName StencilEffect, bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.SetStencilEffect"));
    struct Params_SetStencilEffect {
        AActor* InTarget; // 0x0
        FName StencilEffect; // 0x8
        bool bFlag; // 0x10
    }; // Size: 0x11
    Params_SetStencilEffect params{};
    params.InTarget = (AActor*)InTarget;
    params.StencilEffect = (FName)StencilEffect;
    params.bFlag = (bool)bFlag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::SetStencil(AActor* InTarget, uint8_t StencilValue, bool bFlag) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.SetStencil"));
    struct Params_SetStencil {
        AActor* InTarget; // 0x0
        uint8_t StencilValue; // 0x8
        bool bFlag; // 0x9
    }; // Size: 0xa
    Params_SetStencil params{};
    params.InTarget = (AActor*)InTarget;
    params.StencilValue = (uint8_t)StencilValue;
    params.bFlag = (bool)bFlag;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::SetRenderCustomDepth(UPrimitiveComponent* PrimitiveComponent, bool bRenderCustomDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.SetRenderCustomDepth"));
    struct Params_SetRenderCustomDepth {
        UPrimitiveComponent* PrimitiveComponent; // 0x0
        bool bRenderCustomDepth; // 0x8
    }; // Size: 0x9
    Params_SetRenderCustomDepth params{};
    params.PrimitiveComponent = (UPrimitiveComponent*)PrimitiveComponent;
    params.bRenderCustomDepth = (bool)bRenderCustomDepth;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::SetActorStencilValueAndRenderCustomDepth(AActor* Actor, int32_t StencilValue, bool bRenderCustomDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.SetActorStencilValueAndRenderCustomDepth"));
    struct Params_SetActorStencilValueAndRenderCustomDepth {
        AActor* Actor; // 0x0
        int32_t StencilValue; // 0x8
        bool bRenderCustomDepth; // 0xc
    }; // Size: 0xd
    Params_SetActorStencilValueAndRenderCustomDepth params{};
    params.Actor = (AActor*)Actor;
    params.StencilValue = (int32_t)StencilValue;
    params.bRenderCustomDepth = (bool)bRenderCustomDepth;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::SetActorStencilValue(AActor* Actor, int32_t StencilValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.SetActorStencilValue"));
    struct Params_SetActorStencilValue {
        AActor* Actor; // 0x0
        int32_t StencilValue; // 0x8
    }; // Size: 0xc
    Params_SetActorStencilValue params{};
    params.Actor = (AActor*)Actor;
    params.StencilValue = (int32_t)StencilValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::SetActorRenderCustomDepth(AActor* Actor, bool bRenderCustomDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.SetActorRenderCustomDepth"));
    struct Params_SetActorRenderCustomDepth {
        AActor* Actor; // 0x0
        bool bRenderCustomDepth; // 0x8
    }; // Size: 0x9
    Params_SetActorRenderCustomDepth params{};
    params.Actor = (AActor*)Actor;
    params.bRenderCustomDepth = (bool)bRenderCustomDepth;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::LockOwnerForStencil(UObject* WorldContextObject, UPrimitiveComponent* Component, UObject*& Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.LockOwnerForStencil"));
    struct Params_LockOwnerForStencil {
        UObject* WorldContextObject; // 0x0
        UPrimitiveComponent* Component; // 0x8
        UObject* Owner; // 0x10
    }; // Size: 0x18
    Params_LockOwnerForStencil params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Component = (UPrimitiveComponent*)Component;
    params.Owner = (UObject*)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Owner = params.Owner;
}
void UStencilManager::LockForStencil(UObject* WorldContextObject, UObject* LockOwner, UPrimitiveComponent* Component, int32_t StencilValue, bool& bSuccess, bool bRenderCustomDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.LockForStencil"));
    struct Params_LockForStencil {
        UObject* WorldContextObject; // 0x0
        UObject* LockOwner; // 0x8
        UPrimitiveComponent* Component; // 0x10
        int32_t StencilValue; // 0x18
        bool bSuccess; // 0x1c
        bool bRenderCustomDepth; // 0x1d
    }; // Size: 0x1e
    Params_LockForStencil params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LockOwner = (UObject*)LockOwner;
    params.Component = (UPrimitiveComponent*)Component;
    params.StencilValue = (int32_t)StencilValue;
    params.bSuccess = (bool)bSuccess;
    params.bRenderCustomDepth = (bool)bRenderCustomDepth;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UStencilManager::LockAllForStencil(UObject* WorldContextObject, UObject* LockOwner, AActor* Actor, int32_t StencilValue, bool& bSuccess, bool bRenderCustomDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.LockAllForStencil"));
    struct Params_LockAllForStencil {
        UObject* WorldContextObject; // 0x0
        UObject* LockOwner; // 0x8
        AActor* Actor; // 0x10
        int32_t StencilValue; // 0x18
        bool bSuccess; // 0x1c
        bool bRenderCustomDepth; // 0x1d
    }; // Size: 0x1e
    Params_LockAllForStencil params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.LockOwner = (UObject*)LockOwner;
    params.Actor = (AActor*)Actor;
    params.StencilValue = (int32_t)StencilValue;
    params.bSuccess = (bool)bSuccess;
    params.bRenderCustomDepth = (bool)bRenderCustomDepth;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bSuccess = params.bSuccess;
}
void UStencilManager::IsLockedForStencil(UObject* WorldContextObject, UPrimitiveComponent* Component, bool& bLocked) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.IsLockedForStencil"));
    struct Params_IsLockedForStencil {
        UObject* WorldContextObject; // 0x0
        UPrimitiveComponent* Component; // 0x8
        bool bLocked; // 0x10
    }; // Size: 0x11
    Params_IsLockedForStencil params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Component = (UPrimitiveComponent*)Component;
    params.bLocked = (bool)bLocked;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bLocked = params.bLocked;
}
AStencilManagerSingleton* UStencilManager::GetStencilManager(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.GetStencilManager"));
    struct Params_GetStencilManager {
        UObject* WorldContextObject; // 0x0
        AStencilManagerSingleton* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetStencilManager params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AStencilManagerSingleton*)params.ReturnValue;
}
void UStencilManager::GetCurrentStencilEffect(AActor* InTarget, FName& StencilEffect) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.GetCurrentStencilEffect"));
    struct Params_GetCurrentStencilEffect {
        AActor* InTarget; // 0x0
        FName StencilEffect; // 0x8
    }; // Size: 0x10
    Params_GetCurrentStencilEffect params{};
    params.InTarget = (AActor*)InTarget;
    params.StencilEffect = (FName)StencilEffect;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    StencilEffect = params.StencilEffect;
}
void UStencilManager::EnableStencilGroups(UObject* WorldContextObject, TArray<FName> Groups, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.EnableStencilGroups"));
    struct Params_EnableStencilGroups {
        UObject* WorldContextObject; // 0x0
        TArray<FName> Groups; // 0x8
        bool bEnable; // 0x18
    }; // Size: 0x19
    Params_EnableStencilGroups params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Groups = (TArray<FName>)Groups;
    params.bEnable = (bool)bEnable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::EnableStencilGroup(UObject* WorldContextObject, FName Group, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.EnableStencilGroup"));
    struct Params_EnableStencilGroup {
        UObject* WorldContextObject; // 0x0
        FName Group; // 0x8
        bool bEnable; // 0x10
    }; // Size: 0x11
    Params_EnableStencilGroup params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Group = (FName)Group;
    params.bEnable = (bool)bEnable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::EnableStencil(UObject* WorldContextObject, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.EnableStencil"));
    struct Params_EnableStencil {
        UObject* WorldContextObject; // 0x0
        bool bEnable; // 0x8
    }; // Size: 0x9
    Params_EnableStencil params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.bEnable = (bool)bEnable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::DisableStencilGroups(UObject* WorldContextObject, TArray<FName> Groups) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.DisableStencilGroups"));
    struct Params_DisableStencilGroups {
        UObject* WorldContextObject; // 0x0
        TArray<FName> Groups; // 0x8
    }; // Size: 0x18
    Params_DisableStencilGroups params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Groups = (TArray<FName>)Groups;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UStencilManager::DisableStencilGroup(UObject* WorldContextObject, FName Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.StencilManager.DisableStencilGroup"));
    struct Params_DisableStencilGroup {
        UObject* WorldContextObject; // 0x0
        FName Group; // 0x8
    }; // Size: 0x10
    Params_DisableStencilGroup params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Group = (FName)Group;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
