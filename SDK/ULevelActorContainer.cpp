#include "AActor.hpp"
#include "ULevelActorContainer.hpp"
#include "UObject.hpp"
ULevelActorContainer* ULevelActorContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.LevelActorContainer");
    return (ULevelActorContainer*)res;
}
