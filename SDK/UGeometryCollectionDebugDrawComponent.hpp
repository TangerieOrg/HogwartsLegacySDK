#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class AGeometryCollectionDebugDrawActor;
class AGeometryCollectionRenderLevelSetActor;
#pragma pack(push, 1)
class UGeometryCollectionDebugDrawComponent : public UActorComponent {
public:
    AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xc8
    AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xd0
    char pad_d8[0x8];
    static UGeometryCollectionDebugDrawComponent* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
