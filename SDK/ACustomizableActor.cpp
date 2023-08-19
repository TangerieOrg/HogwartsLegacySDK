#include "AActor.hpp"
#include "ACustomizableActor.hpp"
#include "FDbDoubleColumnInfo.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "UFunction.hpp"
#include "USkeletalMeshComponent.hpp"
ACustomizableActor* ACustomizableActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CustomizableActor");
    return (ACustomizableActor*)res;
}
UCustomizableCharacterComponent* ACustomizableActor::GetCCC() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CustomizableActor.GetCCC"));
    struct Params_GetCCC {
        UCustomizableCharacterComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetCCC params{};
    ProcessEvent(func, &params);
    return (UCustomizableCharacterComponent*)params.ReturnValue;
}
void ACustomizableActor::SetLODOverride(int32_t InLODOverride) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CustomizableActor.SetLODOverride"));
    struct Params_SetLODOverride {
        int32_t InLODOverride; // 0x0
    }; // Size: 0x4
    Params_SetLODOverride params{};
    params.InLODOverride = (int32_t)InLODOverride;
    ProcessEvent(func, &params);
}
FString ACustomizableActor::GetRegistryID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CustomizableActor.GetRegistryID"));
    struct Params_GetRegistryID {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetRegistryID params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
