#include "AActor.hpp"
#include "FPortraitPaintingComponentStates.hpp"
#include "FTransform.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialPermuterLoadingBundle.hpp"
#include "UMaterialSwap.hpp"
#include "UPortraitPaintingEntityComponent.hpp"
#include "UScheduledEntity.hpp"
UPortraitPaintingEntityComponent* UPortraitPaintingEntityComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PortraitPaintingEntityComponent");
    return (UPortraitPaintingEntityComponent*)res;
}
void UPortraitPaintingEntityComponent::OnFleshDestroyed(AActor* Actor, UScheduledEntity* entity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PortraitPaintingEntityComponent.OnFleshDestroyed"));
    struct Params_OnFleshDestroyed {
        AActor* Actor; // 0x0
        UScheduledEntity* entity; // 0x8
    }; // Size: 0x10
    Params_OnFleshDestroyed params{};
    params.Actor = (AActor*)Actor;
    params.entity = (UScheduledEntity*)entity;
    ProcessEvent(func, &params);
}
void UPortraitPaintingEntityComponent::OnCharacterAddOnMeshesChanged(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PortraitPaintingEntityComponent.OnCharacterAddOnMeshesChanged"));
    struct Params_OnCharacterAddOnMeshesChanged {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnCharacterAddOnMeshesChanged params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
