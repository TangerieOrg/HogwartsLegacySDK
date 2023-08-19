#pragma once
#include <cstdint>
#include "FVector2D.hpp"
#include "UBlueprintFunctionLibrary.hpp"
struct FGeometry;
class UObject;
struct FSlateBrush;
#pragma pack(push, 1)
class USlateBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static USlateBlueprintLibrary* StaticClass();
    static FVector2D TransformVectorLocalToAbsolute(FGeometry& Geometry, FVector2D LocalVector);
    static FVector2D TransformVectorAbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteVector);
    static float TransformScalarLocalToAbsolute(FGeometry& Geometry, float LocalScalar);
    static float TransformScalarAbsoluteToLocal(FGeometry& Geometry, float AbsoluteScalar);
    static void ScreenToWidgetLocal(UObject* WorldContextObject, FGeometry& Geometry, FVector2D ScreenPosition, FVector2D& LocalCoordinate, bool bIncludeWindowPosition);
    static void ScreenToWidgetAbsolute(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& AbsoluteCoordinate, bool bIncludeWindowPosition);
    static void ScreenToViewport(UObject* WorldContextObject, FVector2D ScreenPosition, FVector2D& ViewportPosition);
    static void LocalToViewport(UObject* WorldContextObject, FGeometry& Geometry, FVector2D LocalCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);
    static FVector2D LocalToAbsolute(FGeometry& Geometry, FVector2D LocalCoordinate);
    static bool IsUnderLocation(FGeometry& Geometry, FVector2D& AbsoluteCoordinate);
    static FVector2D GetLocalTopLeft(FGeometry& Geometry);
    static FVector2D GetLocalSize(FGeometry& Geometry);
    static FVector2D GetAbsoluteSize(FGeometry& Geometry);
    static bool EqualEqual_SlateBrush(FSlateBrush& A, FSlateBrush& B);
    static void AbsoluteToViewport(UObject* WorldContextObject, FVector2D AbsoluteDesktopCoordinate, FVector2D& PixelPosition, FVector2D& ViewportPosition);
    static FVector2D AbsoluteToLocal(FGeometry& Geometry, FVector2D AbsoluteCoordinate);
}; // Size: 0x28
#pragma pack(pop)
