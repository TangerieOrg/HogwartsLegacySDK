#include "AActor.hpp"
#include "EMobilityOverride.hpp"
#include "UFunction.hpp"
#include "UMobilityOverrider.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
UMobilityOverrider* UMobilityOverrider::StaticClass() {
    static auto res = find_uobject("Class /Script/ComponentNativize.MobilityOverrider");
    return (UMobilityOverrider*)res;
}
void UMobilityOverrider::ComponentOverrideMobility(USceneComponent* SceneComponent, EMobilityOverride mobilityOverride, EMobilityOverride lightMobilityOverride, bool includeChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ComponentNativize.MobilityOverrider.ComponentOverrideMobility"));
    struct Params_ComponentOverrideMobility {
        USceneComponent* SceneComponent; // 0x0
        EMobilityOverride mobilityOverride; // 0x8
        EMobilityOverride lightMobilityOverride; // 0x9
        bool includeChildren; // 0xa
    }; // Size: 0xb
    Params_ComponentOverrideMobility params{};
    params.SceneComponent = (USceneComponent*)SceneComponent;
    params.mobilityOverride = (EMobilityOverride)mobilityOverride;
    params.lightMobilityOverride = (EMobilityOverride)lightMobilityOverride;
    params.includeChildren = (bool)includeChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMobilityOverrider::ActorOverrideMobility(AActor* Actor, EMobilityOverride mobilityOverride, EMobilityOverride lightMobilityOverride, bool includeChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/ComponentNativize.MobilityOverrider.ActorOverrideMobility"));
    struct Params_ActorOverrideMobility {
        AActor* Actor; // 0x0
        EMobilityOverride mobilityOverride; // 0x8
        EMobilityOverride lightMobilityOverride; // 0x9
        bool includeChildren; // 0xa
    }; // Size: 0xb
    Params_ActorOverrideMobility params{};
    params.Actor = (AActor*)Actor;
    params.mobilityOverride = (EMobilityOverride)mobilityOverride;
    params.lightMobilityOverride = (EMobilityOverride)lightMobilityOverride;
    params.includeChildren = (bool)includeChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
