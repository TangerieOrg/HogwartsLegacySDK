#include "UActorComponentInstanceDataTransientOuter.hpp"
#include "UObject.hpp"
UActorComponentInstanceDataTransientOuter* UActorComponentInstanceDataTransientOuter::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ActorComponentInstanceDataTransientOuter");
    return (UActorComponentInstanceDataTransientOuter*)res;
}
