#include "UActorProvider.hpp"
#include "UClass.hpp"
#include "UObject_SpawnActor.hpp"
UObject_SpawnActor* UObject_SpawnActor::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Object_SpawnActor");
    return (UObject_SpawnActor*)res;
}
