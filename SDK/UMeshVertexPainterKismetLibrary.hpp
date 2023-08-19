#pragma once
#include <cstdint>
#include "EVertexPaintAxis.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UStaticMeshComponent;
struct FLinearColor;
#pragma pack(push, 1)
class UMeshVertexPainterKismetLibrary : public UBlueprintFunctionLibrary {
public:
    static UMeshVertexPainterKismetLibrary* StaticClass();
    static void RemovePaintedVertices(UStaticMeshComponent* StaticMeshComponent);
    static void PaintVerticesSingleColor(UStaticMeshComponent* StaticMeshComponent, FLinearColor& FillColor, bool bConvertToSRGB);
    static void PaintVerticesLerpAlongAxis(UStaticMeshComponent* StaticMeshComponent, FLinearColor& StartColor, FLinearColor& EndColor, EVertexPaintAxis Axis, bool bConvertToSRGB);
}; // Size: 0x28
#pragma pack(pop)
