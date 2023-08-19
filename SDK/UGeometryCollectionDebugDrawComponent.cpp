#include "AGeometryCollectionDebugDrawActor.hpp"
#include "AGeometryCollectionRenderLevelSetActor.hpp"
#include "UActorComponent.hpp"
#include "UGeometryCollectionDebugDrawComponent.hpp"
UGeometryCollectionDebugDrawComponent* UGeometryCollectionDebugDrawComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent");
    return (UGeometryCollectionDebugDrawComponent*)res;
}
