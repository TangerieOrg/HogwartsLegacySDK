#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FGuid.hpp"
#include "UPrimitiveComponent.hpp"
class ULandscapeLayerInfoObject;
class UPhysicalMaterial;
class ULandscapeComponent;
#pragma pack(push, 1)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent {
public:
    TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x480
    int32_t SectionBaseX; // 0x490
    int32_t SectionBaseY; // 0x494
    int32_t CollisionSizeQuads; // 0x498
    float CollisionScale; // 0x49c
    int32_t SimpleCollisionSizeQuads; // 0x4a0
    char pad_4a4[0x4];
    TArray<uint8_t> CollisionQuadFlags; // 0x4a8
    FGuid HeightfieldGuid; // 0x4b8
    FBox CachedLocalBox; // 0x4c8
    char pad_4e4[0x2c];
    TArray<UPhysicalMaterial*> CookedPhysicalMaterials; // 0x510
    char pad_520[0x40];
    static ULandscapeHeightfieldCollisionComponent* StaticClass();
    ULandscapeComponent* GetRenderComponent();
}; // Size: 0x560
#pragma pack(pop)
