#include "EVertexPaintAxis.hpp"
#include "FLinearColor.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMeshVertexPainterKismetLibrary.hpp"
#include "UStaticMeshComponent.hpp"
UMeshVertexPainterKismetLibrary* UMeshVertexPainterKismetLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.MeshVertexPainterKismetLibrary");
    return (UMeshVertexPainterKismetLibrary*)res;
}
void UMeshVertexPainterKismetLibrary::RemovePaintedVertices(UStaticMeshComponent* StaticMeshComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MeshVertexPainterKismetLibrary.RemovePaintedVertices"));
    struct Params_RemovePaintedVertices {
        UStaticMeshComponent* StaticMeshComponent; // 0x0
    }; // Size: 0x8
    Params_RemovePaintedVertices params{};
    params.StaticMeshComponent = (UStaticMeshComponent*)StaticMeshComponent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UMeshVertexPainterKismetLibrary::PaintVerticesSingleColor(UStaticMeshComponent* StaticMeshComponent, FLinearColor& FillColor, bool bConvertToSRGB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MeshVertexPainterKismetLibrary.PaintVerticesSingleColor"));
    struct Params_PaintVerticesSingleColor {
        UStaticMeshComponent* StaticMeshComponent; // 0x0
        FLinearColor FillColor; // 0x8
        bool bConvertToSRGB; // 0x18
    }; // Size: 0x19
    Params_PaintVerticesSingleColor params{};
    params.StaticMeshComponent = (UStaticMeshComponent*)StaticMeshComponent;
    params.FillColor = (FLinearColor)FillColor;
    params.bConvertToSRGB = (bool)bConvertToSRGB;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    FillColor = params.FillColor;
}
void UMeshVertexPainterKismetLibrary::PaintVerticesLerpAlongAxis(UStaticMeshComponent* StaticMeshComponent, FLinearColor& StartColor, FLinearColor& EndColor, EVertexPaintAxis Axis, bool bConvertToSRGB) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.MeshVertexPainterKismetLibrary.PaintVerticesLerpAlongAxis"));
    struct Params_PaintVerticesLerpAlongAxis {
        UStaticMeshComponent* StaticMeshComponent; // 0x0
        FLinearColor StartColor; // 0x8
        FLinearColor EndColor; // 0x18
        EVertexPaintAxis Axis; // 0x28
        bool bConvertToSRGB; // 0x29
    }; // Size: 0x2a
    Params_PaintVerticesLerpAlongAxis params{};
    params.StaticMeshComponent = (UStaticMeshComponent*)StaticMeshComponent;
    params.StartColor = (FLinearColor)StartColor;
    params.EndColor = (FLinearColor)EndColor;
    params.Axis = (EVertexPaintAxis)Axis;
    params.bConvertToSRGB = (bool)bConvertToSRGB;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    StartColor = params.StartColor;
    EndColor = params.EndColor;
}
