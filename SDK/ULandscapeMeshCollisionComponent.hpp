#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "ULandscapeHeightfieldCollisionComponent.hpp"
#pragma pack(push, 1)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent {
public:
    FGuid MeshGuid; // 0x560
    char pad_570[0x10];
    static ULandscapeMeshCollisionComponent* StaticClass();
}; // Size: 0x580
#pragma pack(pop)
