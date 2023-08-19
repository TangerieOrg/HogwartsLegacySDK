#include "UActorProvider.hpp"
#include "UClass.hpp"
#include "UObjectProvider.hpp"
#include "UObject_ActorComponent.hpp"
UObject_ActorComponent* UObject_ActorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Object_ActorComponent");
    return (UObject_ActorComponent*)res;
}
