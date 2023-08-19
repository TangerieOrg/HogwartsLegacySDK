#include "AActor.hpp"
#include "FDbDoubleColumnInfo.hpp"
#include "SocialCapitalStatusIDs.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UOwnershipComponent.hpp"
#include "UScheduledEntity.hpp"
UOwnershipComponent* UOwnershipComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OwnershipComponent");
    return (UOwnershipComponent*)res;
}
bool UOwnershipComponent::IsTakingObjectStealing(AActor* ObjectToTake, AActor* WhoIsTaking) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OwnershipComponent.IsTakingObjectStealing"));
    struct Params_IsTakingObjectStealing {
        AActor* ObjectToTake; // 0x0
        AActor* WhoIsTaking; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsTakingObjectStealing params{};
    params.ObjectToTake = (AActor*)ObjectToTake;
    params.WhoIsTaking = (AActor*)WhoIsTaking;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UOwnershipComponent::IsEntityAnOwner(AActor* Owned, UScheduledEntity* ScheduledEntity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OwnershipComponent.IsEntityAnOwner"));
    struct Params_IsEntityAnOwner {
        AActor* Owned; // 0x0
        UScheduledEntity* ScheduledEntity; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsEntityAnOwner params{};
    params.Owned = (AActor*)Owned;
    params.ScheduledEntity = (UScheduledEntity*)ScheduledEntity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UOwnershipComponent::HasOwnership(AActor* Owned) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OwnershipComponent.HasOwnership"));
    struct Params_HasOwnership {
        AActor* Owned; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_HasOwnership params{};
    params.Owned = (AActor*)Owned;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UOwnershipComponent::GetOwnership(AActor* Owned, FString& o_OwnerName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OwnershipComponent.GetOwnership"));
    struct Params_GetOwnership {
        AActor* Owned; // 0x0
        FString o_OwnerName; // 0x8
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetOwnership params{};
    params.Owned = (AActor*)Owned;
    params.o_OwnerName = (FString)o_OwnerName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    o_OwnerName = params.o_OwnerName;
    return (bool)params.ReturnValue;
}
SocialCapitalStatusIDs UOwnershipComponent::GetMinimumPlayerStatusWithOwners(AActor* OwnedObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OwnershipComponent.GetMinimumPlayerStatusWithOwners"));
    struct Params_GetMinimumPlayerStatusWithOwners {
        AActor* OwnedObject; // 0x0
        SocialCapitalStatusIDs ReturnValue; // 0x8
    }; // Size: 0x9
    Params_GetMinimumPlayerStatusWithOwners params{};
    params.OwnedObject = (AActor*)OwnedObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (SocialCapitalStatusIDs)params.ReturnValue;
}
void UOwnershipComponent::CopyOwnership(AActor* From, AActor* To) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.OwnershipComponent.CopyOwnership"));
    struct Params_CopyOwnership {
        AActor* From; // 0x0
        AActor* To; // 0x8
    }; // Size: 0x10
    Params_CopyOwnership params{};
    params.From = (AActor*)From;
    params.To = (AActor*)To;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
