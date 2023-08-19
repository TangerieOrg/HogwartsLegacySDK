#include "EExternalActorRole.hpp"
#include "UActorProvider.hpp"
#include "UActor_External.hpp"
UActor_External* UActor_External::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.Actor_External");
    return (UActor_External*)res;
}
