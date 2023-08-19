#include "AActor.hpp"
#include "AMasterTickThrottlerSingleton.hpp"
#include "FMasterTickThrottlerSettings.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
AMasterTickThrottlerSingleton* AMasterTickThrottlerSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/MasterTickThrottler.MasterTickThrottlerSingleton");
    return (AMasterTickThrottlerSingleton*)res;
}
void AMasterTickThrottlerSingleton::RemoveManagedComponent(UActorComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.MasterTickThrottlerSingleton.RemoveManagedComponent"));
    struct Params_RemoveManagedComponent {
        UActorComponent* Component; // 0x0
    }; // Size: 0x8
    Params_RemoveManagedComponent params{};
    params.Component = (UActorComponent*)Component;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AMasterTickThrottlerSingleton::EnableComponentThrottling(UActorComponent* Component, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.MasterTickThrottlerSingleton.EnableComponentThrottling"));
    struct Params_EnableComponentThrottling {
        UActorComponent* Component; // 0x0
        bool bEnable; // 0x8
    }; // Size: 0x9
    Params_EnableComponentThrottling params{};
    params.Component = (UActorComponent*)Component;
    params.bEnable = (bool)bEnable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AMasterTickThrottlerSingleton::AddManagedComponent(UActorComponent* Component, FMasterTickThrottlerSettings& Settings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.MasterTickThrottlerSingleton.AddManagedComponent"));
    struct Params_AddManagedComponent {
        UActorComponent* Component; // 0x0
        FMasterTickThrottlerSettings Settings; // 0x8
    }; // Size: 0x30
    Params_AddManagedComponent params{};
    params.Component = (UActorComponent*)Component;
    params.Settings = (FMasterTickThrottlerSettings)Settings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Settings = params.Settings;
}
void AMasterTickThrottlerSingleton::IsComponentThrottled(UActorComponent* Component, bool& bIsThrottled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.MasterTickThrottlerSingleton.IsComponentThrottled"));
    struct Params_IsComponentThrottled {
        UActorComponent* Component; // 0x0
        bool bIsThrottled; // 0x8
    }; // Size: 0x9
    Params_IsComponentThrottled params{};
    params.Component = (UActorComponent*)Component;
    params.bIsThrottled = (bool)bIsThrottled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsThrottled = params.bIsThrottled;
}
void AMasterTickThrottlerSingleton::RemoveManagedActor(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.MasterTickThrottlerSingleton.RemoveManagedActor"));
    struct Params_RemoveManagedActor {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_RemoveManagedActor params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AMasterTickThrottlerSingleton::IsManagedComponent(UActorComponent* Component, bool& bIsManaged) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.MasterTickThrottlerSingleton.IsManagedComponent"));
    struct Params_IsManagedComponent {
        UActorComponent* Component; // 0x0
        bool bIsManaged; // 0x8
    }; // Size: 0x9
    Params_IsManagedComponent params{};
    params.Component = (UActorComponent*)Component;
    params.bIsManaged = (bool)bIsManaged;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsManaged = params.bIsManaged;
}
void AMasterTickThrottlerSingleton::IsActorThrottled(AActor* Actor, bool& bIsThrottled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.MasterTickThrottlerSingleton.IsActorThrottled"));
    struct Params_IsActorThrottled {
        AActor* Actor; // 0x0
        bool bIsThrottled; // 0x8
    }; // Size: 0x9
    Params_IsActorThrottled params{};
    params.Actor = (AActor*)Actor;
    params.bIsThrottled = (bool)bIsThrottled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsThrottled = params.bIsThrottled;
}
void AMasterTickThrottlerSingleton::IsManagedActor(AActor* Actor, bool& bIsManaged) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.MasterTickThrottlerSingleton.IsManagedActor"));
    struct Params_IsManagedActor {
        AActor* Actor; // 0x0
        bool bIsManaged; // 0x8
    }; // Size: 0x9
    Params_IsManagedActor params{};
    params.Actor = (AActor*)Actor;
    params.bIsManaged = (bool)bIsManaged;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsManaged = params.bIsManaged;
}
void AMasterTickThrottlerSingleton::DisableComponentThrottling(UActorComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.MasterTickThrottlerSingleton.DisableComponentThrottling"));
    struct Params_DisableComponentThrottling {
        UActorComponent* Component; // 0x0
    }; // Size: 0x8
    Params_DisableComponentThrottling params{};
    params.Component = (UActorComponent*)Component;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AMasterTickThrottlerSingleton::EnableActorThrottling(AActor* Actor, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.MasterTickThrottlerSingleton.EnableActorThrottling"));
    struct Params_EnableActorThrottling {
        AActor* Actor; // 0x0
        bool bEnable; // 0x8
    }; // Size: 0x9
    Params_EnableActorThrottling params{};
    params.Actor = (AActor*)Actor;
    params.bEnable = (bool)bEnable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AMasterTickThrottlerSingleton::DisableActorThrottling(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.MasterTickThrottlerSingleton.DisableActorThrottling"));
    struct Params_DisableActorThrottling {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_DisableActorThrottling params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AMasterTickThrottlerSingleton::AddManagedActor(AActor* Actor, FMasterTickThrottlerSettings& Settings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterTickThrottler.MasterTickThrottlerSingleton.AddManagedActor"));
    struct Params_AddManagedActor {
        AActor* Actor; // 0x0
        FMasterTickThrottlerSettings Settings; // 0x8
    }; // Size: 0x30
    Params_AddManagedActor params{};
    params.Actor = (AActor*)Actor;
    params.Settings = (FMasterTickThrottlerSettings)Settings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Settings = params.Settings;
}
