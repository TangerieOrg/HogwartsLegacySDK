#include "UActorProvider.hpp"
#include "UObject_NamedActor.hpp"
UObject_NamedActor* UObject_NamedActor::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Object_NamedActor");
    return (UObject_NamedActor*)res;
}
