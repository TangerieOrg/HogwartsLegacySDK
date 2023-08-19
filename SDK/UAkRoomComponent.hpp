#pragma once
#include <cstdint>
#include "UAkGameObject.hpp"
class UAkAcousticTextureSetComponent;
class UPrimitiveComponent;
#pragma pack(push, 1)
class UAkRoomComponent : public UAkGameObject {
public:
    float Priority; // 0x240
    float WallOcclusion; // 0x244
    float AuxSendLevel; // 0x248
    bool AutoPost; // 0x24c
    bool bIsSimpleBox; // 0x24d
    char pad_24e[0x2a];
    UAkAcousticTextureSetComponent* GeometryComponent; // 0x278
    char pad_280[0x10];
    static UAkRoomComponent* StaticClass();
    void SetGeometryComponent(UAkAcousticTextureSetComponent* textureSetComponent);
    UPrimitiveComponent* GetPrimitiveParent();
}; // Size: 0x290
#pragma pack(pop)
