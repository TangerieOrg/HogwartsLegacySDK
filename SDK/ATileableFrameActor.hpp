#pragma once
#include <cstdint>
#include "AActor.hpp"
class USceneComponent;
class UInstancedStaticMeshComponent;
class UStaticMesh;
#pragma pack(push, 1)
class ATileableFrameActor : public AActor {
public:
    USceneComponent* SceneRoot; // 0x248
    UInstancedStaticMeshComponent* InstRectTileMid; // 0x250
    UInstancedStaticMeshComponent* InstRectTileCorner; // 0x258
    UStaticMesh* RectangularFrameTile; // 0x260
    UStaticMesh* RectangularFrameCorner; // 0x268
    int32_t HorizontalTileCount; // 0x270
    int32_t VerticalTileCount; // 0x274
    static ATileableFrameActor* StaticClass();
    void MakeFrame();
}; // Size: 0x278
#pragma pack(pop)
