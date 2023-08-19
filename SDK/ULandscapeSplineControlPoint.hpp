#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FLandscapeSplineConnection.hpp"
#include "FLandscapeSplineInterpPoint.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class UControlPointMeshComponent;
#pragma pack(push, 1)
class ULandscapeSplineControlPoint : public UObject {
public:
    FVector Location; // 0x28
    FRotator Rotation; // 0x34
    float Width; // 0x40
    float LayerWidthRatio; // 0x44
    float SideFalloff; // 0x48
    float LeftSideFalloffFactor; // 0x4c
    float RightSideFalloffFactor; // 0x50
    float LeftSideLayerFalloffFactor; // 0x54
    float RightSideLayerFalloffFactor; // 0x58
    float EndFalloff; // 0x5c
    TArray<FLandscapeSplineConnection> ConnectedSegments; // 0x60
    TArray<FLandscapeSplineInterpPoint> Points; // 0x70
    FBox Bounds; // 0x80
    char pad_9c[0x4];
    UControlPointMeshComponent* LocalMeshComponent; // 0xa0
    static ULandscapeSplineControlPoint* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
