#include "AActor.hpp"
#include "UActorChannel.hpp"
#include "UChannel.hpp"
#include "UObject.hpp"
UActorChannel* UActorChannel::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ActorChannel");
    return (UActorChannel*)res;
}
