#pragma once
#include <cstdint>
#include "FBox2D.hpp"
#include "FEquirectProps.hpp"
#include "FVector2D.hpp"
#include "UStereoLayerShape.hpp"
#pragma pack(push, 1)
class UStereoLayerShapeEquirect : public UStereoLayerShape {
public:
    FBox2D LeftUVRect; // 0x28
    FBox2D RightUVRect; // 0x3c
    FVector2D LeftScale; // 0x50
    FVector2D RightScale; // 0x58
    FVector2D LeftBias; // 0x60
    FVector2D RightBias; // 0x68
    static UStereoLayerShapeEquirect* StaticClass();
    void SetEquirectProps(FEquirectProps InScaleBiases);
}; // Size: 0x70
#pragma pack(pop)
