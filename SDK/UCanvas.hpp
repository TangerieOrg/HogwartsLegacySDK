#pragma once
#include <cstdint>
#include "EBlendMode.hpp"
#include "FCanvasUVTri.hpp"
#include "FColor.hpp"
#include "FLinearColor.hpp"
#include "FPlane.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UObject.hpp"
class UTexture2D;
class UReporterGraph;
class UMaterialInterface;
class UFont;
class UTexture;
#pragma pack(push, 1)
class UCanvas : public UObject {
public:
    float OrgX; // 0x28
    float OrgY; // 0x2c
    float ClipX; // 0x30
    float ClipY; // 0x34
    FColor DrawColor; // 0x38
    uint8_t bCenterX : 1; // 0x3c
    uint8_t bCenterY : 1; // 0x3c
    uint8_t bNoSmooth : 1; // 0x3c
    uint8_t pad_bitfield_3c_3 : 5;
    char pad_3d[0x3];
    int32_t SizeX; // 0x40
    int32_t SizeY; // 0x44
    char pad_48[0x8];
    FPlane ColorModulate; // 0x50
    UTexture2D* DefaultTexture; // 0x60
    UTexture2D* GradientTexture0; // 0x68
    UReporterGraph* ReporterGraph; // 0x70
    char pad_78[0x258];
    static UCanvas* StaticClass();
    FVector2D K2_TextSize(UFont* RenderFont, FString RenderText, FVector2D Scale);
    FVector2D K2_StrLen(UFont* RenderFont, FString RenderText);
    FVector K2_Project(FVector WorldLocation);
    void K2_DrawTriangle(UTexture* RenderTexture, TArray<FCanvasUVTri> Triangles);
    void K2_DrawTexture(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, EBlendMode BlendMode, float Rotation, FVector2D PivotPoint);
    void K2_DrawText(UFont* RenderFont, FString RenderText, FVector2D ScreenPosition, FVector2D Scale, FLinearColor RenderColor, float Kerning, FLinearColor shadowColor, FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, FLinearColor OutlineColor);
    void K2_DrawPolygon(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D Radius, int32_t NumberOfSides, FLinearColor RenderColor);
    void K2_DrawMaterialTriangle(UMaterialInterface* RenderMaterial, TArray<FCanvasUVTri> Triangles);
    void K2_DrawMaterial(UMaterialInterface* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint);
    void K2_DrawLine(FVector2D ScreenPositionA, FVector2D ScreenPositionB, float Thickness, FLinearColor RenderColor);
    void K2_DrawBox(FVector2D ScreenPosition, FVector2D ScreenSize, float Thickness, FLinearColor RenderColor);
    void K2_DrawBorder(UTexture* BorderTexture, UTexture* BackgroundTexture, UTexture* LeftBorderTexture, UTexture* RightBorderTexture, UTexture* TopBorderTexture, UTexture* BottomBorderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, FVector2D BorderScale, FVector2D BackgroundScale, float Rotation, FVector2D PivotPoint, FVector2D CornerSize);
    void K2_Deproject(FVector2D ScreenPosition, FVector& WorldOrigin, FVector& WorldDirection);
}; // Size: 0x2d0
#pragma pack(pop)
