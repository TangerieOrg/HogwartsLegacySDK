#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
class UGeometryCollectionComponent;
class UGeometryCollectionDebugDrawComponent;
struct FHitResult;
#pragma pack(push, 1)
class AGeometryCollectionActor : public AActor {
public:
    UGeometryCollectionComponent* GeometryCollectionComponent; // 0x248
    UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x250
    static AGeometryCollectionActor* StaticClass();
    bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);
}; // Size: 0x258
#pragma pack(pop)
