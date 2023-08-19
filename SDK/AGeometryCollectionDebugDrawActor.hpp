#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EGeometryCollectionDebugDrawActorHideGeometry.hpp"
#include "FColor.hpp"
#include "FGeometryCollectionDebugDrawActorSelectedRigidBody.hpp"
#include "FGeometryCollectionDebugDrawWarningMessage.hpp"
class UBillboardComponent;
#pragma pack(push, 1)
class AGeometryCollectionDebugDrawActor : public AActor {
public:
    FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x248
    char pad_249[0x7];
    FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x250
    bool bDebugDrawWholeCollection; // 0x268
    bool bDebugDrawHierarchy; // 0x269
    bool bDebugDrawClustering; // 0x26a
    EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x26b
    bool bShowRigidBodyId; // 0x26c
    bool bShowRigidBodyCollision; // 0x26d
    bool bCollisionAtOrigin; // 0x26e
    bool bShowRigidBodyTransform; // 0x26f
    bool bShowRigidBodyInertia; // 0x270
    bool bShowRigidBodyVelocity; // 0x271
    bool bShowRigidBodyForce; // 0x272
    bool bShowRigidBodyInfos; // 0x273
    bool bShowTransformIndex; // 0x274
    bool bShowTransform; // 0x275
    bool bShowParent; // 0x276
    bool bShowLevel; // 0x277
    bool bShowConnectivityEdges; // 0x278
    bool bShowGeometryIndex; // 0x279
    bool bShowGeometryTransform; // 0x27a
    bool bShowBoundingBox; // 0x27b
    bool bShowFaces; // 0x27c
    bool bShowFaceIndices; // 0x27d
    bool bShowFaceNormals; // 0x27e
    bool bShowSingleFace; // 0x27f
    int32_t SingleFaceIndex; // 0x280
    bool bShowVertices; // 0x284
    bool bShowVertexIndices; // 0x285
    bool bShowVertexNormals; // 0x286
    bool bUseActiveVisualization; // 0x287
    float PointThickness; // 0x288
    float LineThickness; // 0x28c
    bool bTextShadow; // 0x290
    char pad_291[0x3];
    float TextScale; // 0x294
    float NormalScale; // 0x298
    float AxisScale; // 0x29c
    float ArrowScale; // 0x2a0
    FColor RigidBodyIdColor; // 0x2a4
    float RigidBodyTransformScale; // 0x2a8
    FColor RigidBodyCollisionColor; // 0x2ac
    FColor RigidBodyInertiaColor; // 0x2b0
    FColor RigidBodyVelocityColor; // 0x2b4
    FColor RigidBodyForceColor; // 0x2b8
    FColor RigidBodyInfoColor; // 0x2bc
    FColor TransformIndexColor; // 0x2c0
    float TransformScale; // 0x2c4
    FColor LevelColor; // 0x2c8
    FColor ParentColor; // 0x2cc
    float ConnectivityEdgeThickness; // 0x2d0
    FColor GeometryIndexColor; // 0x2d4
    float GeometryTransformScale; // 0x2d8
    FColor BoundingBoxColor; // 0x2dc
    FColor FaceColor; // 0x2e0
    FColor FaceIndexColor; // 0x2e4
    FColor FaceNormalColor; // 0x2e8
    FColor SingleFaceColor; // 0x2ec
    FColor VertexColor; // 0x2f0
    FColor VertexIndexColor; // 0x2f4
    FColor VertexNormalColor; // 0x2f8
    char pad_2fc[0x4];
    UBillboardComponent* SpriteComponent; // 0x300
    char pad_308[0x28];
    static AGeometryCollectionDebugDrawActor* StaticClass();
}; // Size: 0x330
#pragma pack(pop)
