#include "AActor.hpp"
#include "AGeometryCollectionDebugDrawActor.hpp"
#include "EGeometryCollectionDebugDrawActorHideGeometry.hpp"
#include "FColor.hpp"
#include "FGeometryCollectionDebugDrawActorSelectedRigidBody.hpp"
#include "FGeometryCollectionDebugDrawWarningMessage.hpp"
#include "UBillboardComponent.hpp"
AGeometryCollectionDebugDrawActor* AGeometryCollectionDebugDrawActor::StaticClass() {
    static auto res = find_uobject("Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor");
    return (AGeometryCollectionDebugDrawActor*)res;
}
