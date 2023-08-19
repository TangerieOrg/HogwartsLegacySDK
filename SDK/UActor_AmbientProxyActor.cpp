#include "FAmbientProxyActorReference.hpp"
#include "UActorProvider.hpp"
#include "UActor_AmbientProxyActor.hpp"
UActor_AmbientProxyActor* UActor_AmbientProxyActor::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.Actor_AmbientProxyActor");
    return (UActor_AmbientProxyActor*)res;
}
