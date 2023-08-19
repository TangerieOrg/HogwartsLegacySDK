#pragma once
#include <cstdint>
#include "UPrimitiveComponent.hpp"
#pragma pack(push, 1)
class UConjurationSurfaceShapeComponent : public UPrimitiveComponent {
public:
    char pad_480[0x20];
    static UConjurationSurfaceShapeComponent* StaticClass();
    int32_t GetNumShapes();
    void BuildShapeFromMeshes();
    void BuildShapeFromCollision();
}; // Size: 0x4a0
#pragma pack(pop)
