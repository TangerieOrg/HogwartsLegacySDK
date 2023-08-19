#include "AActor.hpp"
#include "UChildActorComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "USceneComponent.hpp"
UChildActorComponent* UChildActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ChildActorComponent");
    return (UChildActorComponent*)res;
}
void UChildActorComponent::SetChildActorClass(UClass* InClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ChildActorComponent.SetChildActorClass"));
    struct Params_SetChildActorClass {
        UClass* InClass; // 0x0
    }; // Size: 0x8
    Params_SetChildActorClass params{};
    params.InClass = (UClass*)InClass;
    ProcessEvent(func, &params);
}
