#include "AActor.hpp"
#include "UActorProvider.hpp"
#include "UObject_DirectActor.hpp"
UObject_DirectActor* UObject_DirectActor::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Object_DirectActor");
    return (UObject_DirectActor*)res;
}
