#include "AActor.hpp"
#include "FActorMeshSetupName.hpp"
#include "UActorMeshSetupLibrary.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMeshComponent.hpp"
UActorMeshSetupLibrary* UActorMeshSetupLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/ActorMeshStates.ActorMeshSetupLibrary");
    return (UActorMeshSetupLibrary*)res;
}
void UActorMeshSetupLibrary::ActorMeshSetupRemoveMeshAlwaysIgnore(UMeshComponent* MeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupRemoveMeshAlwaysIgnore"));
    struct Params_ActorMeshSetupRemoveMeshAlwaysIgnore {
        UMeshComponent* MeshComponent; // 0x0
    }; // Size: 0x8
    Params_ActorMeshSetupRemoveMeshAlwaysIgnore params{};
    params.MeshComponent = (UMeshComponent*)MeshComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UActorMeshSetupLibrary::ActorMeshSetupRemoveAlwaysIgnore(AActor* Actor, bool bIncludeChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupRemoveAlwaysIgnore"));
    struct Params_ActorMeshSetupRemoveAlwaysIgnore {
        AActor* Actor; // 0x0
        bool bIncludeChildren; // 0x8
    }; // Size: 0x9
    Params_ActorMeshSetupRemoveAlwaysIgnore params{};
    params.Actor = (AActor*)Actor;
    params.bIncludeChildren = (bool)bIncludeChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UActorMeshSetupLibrary::ActorMeshSetupAlwaysIgnoreMesh(UMeshComponent* MeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupAlwaysIgnoreMesh"));
    struct Params_ActorMeshSetupAlwaysIgnoreMesh {
        UMeshComponent* MeshComponent; // 0x0
    }; // Size: 0x8
    Params_ActorMeshSetupAlwaysIgnoreMesh params{};
    params.MeshComponent = (UMeshComponent*)MeshComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UActorMeshSetupLibrary::ActorMeshSetupProcessRefresh(AActor* Actor, bool bIncludeChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupProcessRefresh"));
    struct Params_ActorMeshSetupProcessRefresh {
        AActor* Actor; // 0x0
        bool bIncludeChildren; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_ActorMeshSetupProcessRefresh params{};
    params.Actor = (AActor*)Actor;
    params.bIncludeChildren = (bool)bIncludeChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UActorMeshSetupLibrary::ActorMeshSetupProcessNamed(AActor* Actor, FActorMeshSetupName MeshSetup, bool bIncludeChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupProcessNamed"));
    struct Params_ActorMeshSetupProcessNamed {
        AActor* Actor; // 0x0
        FActorMeshSetupName MeshSetup; // 0x8
        bool bIncludeChildren; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_ActorMeshSetupProcessNamed params{};
    params.Actor = (AActor*)Actor;
    params.MeshSetup = (FActorMeshSetupName)MeshSetup;
    params.bIncludeChildren = (bool)bIncludeChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UActorMeshSetupLibrary::ActorMeshSetupProcessAuto(AActor* Actor, bool bIncludeChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupProcessAuto"));
    struct Params_ActorMeshSetupProcessAuto {
        AActor* Actor; // 0x0
        bool bIncludeChildren; // 0x8
        bool ReturnValue; // 0x9
    }; // Size: 0xa
    Params_ActorMeshSetupProcessAuto params{};
    params.Actor = (AActor*)Actor;
    params.bIncludeChildren = (bool)bIncludeChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UActorMeshSetupLibrary::ActorMeshSetupAlwaysIgnore(AActor* Actor, bool bIncludeChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ActorMeshStates.ActorMeshSetupLibrary.ActorMeshSetupAlwaysIgnore"));
    struct Params_ActorMeshSetupAlwaysIgnore {
        AActor* Actor; // 0x0
        bool bIncludeChildren; // 0x8
    }; // Size: 0x9
    Params_ActorMeshSetupAlwaysIgnore params{};
    params.Actor = (AActor*)Actor;
    params.bIncludeChildren = (bool)bIncludeChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
