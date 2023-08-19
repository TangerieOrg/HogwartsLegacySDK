#include "UInterface.hpp"
#include "UInterface_ActorSubobject.hpp"
UInterface_ActorSubobject* UInterface_ActorSubobject::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Interface_ActorSubobject");
    return (UInterface_ActorSubobject*)res;
}
