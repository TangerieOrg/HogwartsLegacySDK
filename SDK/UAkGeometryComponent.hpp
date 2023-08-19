#pragma once
#include <cstdint>
#include "AkMeshType.hpp"
#include "FAkGeometryData.hpp"
#include "FAkGeometrySurfaceOverride.hpp"
#include "UAkAcousticTextureSetComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UAkGeometryComponent : public UAkAcousticTextureSetComponent {
public:
    AkMeshType MeshType; // 0x230
    char pad_231[0x3];
    int32_t LOD; // 0x234
    float WeldingThreshold; // 0x238
    char pad_23c[0x54];
    FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x290
    uint8_t bEnableDiffraction : 1; // 0x2a8
    uint8_t bEnableDiffractionOnBoundaryEdges : 1; // 0x2a8
    uint8_t pad_bitfield_2a8_2 : 6;
    char pad_2a9[0x7];
    AActor* AssociatedRoom; // 0x2b0
    char pad_2b8[0x10];
    FAkGeometryData GeometryData; // 0x2c8
    char pad_318[0xa8];
    static UAkGeometryComponent* StaticClass();
    void UpdateGeometry();
    void SendGeometry();
    void RemoveGeometry();
    void ConvertMesh();
}; // Size: 0x3c0
#pragma pack(pop)
