#include "AActor.hpp"
#include "AMasterOverlapThrottlerSingleton.hpp"
#include "FMasterOverlapThrottlerSettings.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
void AMasterOverlapThrottlerSingleton::EnablePrimitiveComponentThrottling(UPrimitiveComponent* Component, bool bEnable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterOverlapThrottler.MasterOverlapThrottlerSingleton.EnablePrimitiveComponentThrottling"));
    struct Params_EnablePrimitiveComponentThrottling {
        UPrimitiveComponent* Component; // 0x0
        bool bEnable; // 0x8
    }; // Size: 0x9
    Params_EnablePrimitiveComponentThrottling params{};
    params.Component = (UPrimitiveComponent*)Component;
    params.bEnable = (bool)bEnable;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
AMasterOverlapThrottlerSingleton* AMasterOverlapThrottlerSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/MasterOverlapThrottler.MasterOverlapThrottlerSingleton");
    return (AMasterOverlapThrottlerSingleton*)res;
}
void AMasterOverlapThrottlerSingleton::AddManagedPrimitiveComponent(UPrimitiveComponent* Component, FMasterOverlapThrottlerSettings& Settings) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterOverlapThrottler.MasterOverlapThrottlerSingleton.AddManagedPrimitiveComponent"));
    struct Params_AddManagedPrimitiveComponent {
        UPrimitiveComponent* Component; // 0x0
        FMasterOverlapThrottlerSettings Settings; // 0x8
    }; // Size: 0x18
    Params_AddManagedPrimitiveComponent params{};
    params.Component = (UPrimitiveComponent*)Component;
    params.Settings = (FMasterOverlapThrottlerSettings)Settings;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Settings = params.Settings;
}
void AMasterOverlapThrottlerSingleton::RemoveManagedPrimitiveComponent(UPrimitiveComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterOverlapThrottler.MasterOverlapThrottlerSingleton.RemoveManagedPrimitiveComponent"));
    struct Params_RemoveManagedPrimitiveComponent {
        UPrimitiveComponent* Component; // 0x0
    }; // Size: 0x8
    Params_RemoveManagedPrimitiveComponent params{};
    params.Component = (UPrimitiveComponent*)Component;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void AMasterOverlapThrottlerSingleton::IsPrimitiveComponentThrottled(UPrimitiveComponent* Component, bool& bIsThrottled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterOverlapThrottler.MasterOverlapThrottlerSingleton.IsPrimitiveComponentThrottled"));
    struct Params_IsPrimitiveComponentThrottled {
        UPrimitiveComponent* Component; // 0x0
        bool bIsThrottled; // 0x8
    }; // Size: 0x9
    Params_IsPrimitiveComponentThrottled params{};
    params.Component = (UPrimitiveComponent*)Component;
    params.bIsThrottled = (bool)bIsThrottled;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsThrottled = params.bIsThrottled;
}
void AMasterOverlapThrottlerSingleton::IsManagedPrimitiveComponent(UPrimitiveComponent* Component, bool& bIsManaged) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterOverlapThrottler.MasterOverlapThrottlerSingleton.IsManagedPrimitiveComponent"));
    struct Params_IsManagedPrimitiveComponent {
        UPrimitiveComponent* Component; // 0x0
        bool bIsManaged; // 0x8
    }; // Size: 0x9
    Params_IsManagedPrimitiveComponent params{};
    params.Component = (UPrimitiveComponent*)Component;
    params.bIsManaged = (bool)bIsManaged;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsManaged = params.bIsManaged;
}
void AMasterOverlapThrottlerSingleton::DisablePrimitiveComponentThrottling(UPrimitiveComponent* Component) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MasterOverlapThrottler.MasterOverlapThrottlerSingleton.DisablePrimitiveComponentThrottling"));
    struct Params_DisablePrimitiveComponentThrottling {
        UPrimitiveComponent* Component; // 0x0
    }; // Size: 0x8
    Params_DisablePrimitiveComponentThrottling params{};
    params.Component = (UPrimitiveComponent*)Component;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
