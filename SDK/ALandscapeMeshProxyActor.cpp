#include "AActor.hpp"
#include "ALandscapeMeshProxyActor.hpp"
#include "ULandscapeMeshProxyComponent.hpp"
ALandscapeMeshProxyActor* ALandscapeMeshProxyActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeMeshProxyActor");
    return (ALandscapeMeshProxyActor*)res;
}
