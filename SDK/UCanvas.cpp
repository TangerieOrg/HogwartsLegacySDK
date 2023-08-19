#include "EBlendMode.hpp"
#include "FCanvasUVTri.hpp"
#include "FColor.hpp"
#include "FLinearColor.hpp"
#include "FPlane.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UCanvas.hpp"
#include "UFont.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "UReporterGraph.hpp"
#include "UTexture.hpp"
#include "UTexture2D.hpp"
UCanvas* UCanvas::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Canvas");
    return (UCanvas*)res;
}
void UCanvas::K2_DrawPolygon(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D Radius, int32_t NumberOfSides, FLinearColor RenderColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Canvas.K2_DrawPolygon"));
    struct Params_K2_DrawPolygon {
        UTexture* RenderTexture; // 0x0
        FVector2D ScreenPosition; // 0x8
        FVector2D Radius; // 0x10
        int32_t NumberOfSides; // 0x18
        FLinearColor RenderColor; // 0x1c
    }; // Size: 0x2c
    Params_K2_DrawPolygon params{};
    params.RenderTexture = (UTexture*)RenderTexture;
    params.ScreenPosition = (FVector2D)ScreenPosition;
    params.Radius = (FVector2D)Radius;
    params.NumberOfSides = (int32_t)NumberOfSides;
    params.RenderColor = (FLinearColor)RenderColor;
    ProcessEvent(func, &params);
}
FVector2D UCanvas::K2_TextSize(UFont* RenderFont, FString RenderText, FVector2D Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Canvas.K2_TextSize"));
    struct Params_K2_TextSize {
        UFont* RenderFont; // 0x0
        FString RenderText; // 0x8
        FVector2D Scale; // 0x18
        FVector2D ReturnValue; // 0x20
    }; // Size: 0x28
    Params_K2_TextSize params{};
    params.RenderFont = (UFont*)RenderFont;
    params.RenderText = (FString)RenderText;
    params.Scale = (FVector2D)Scale;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UCanvas::K2_Deproject(FVector2D ScreenPosition, FVector& WorldOrigin, FVector& WorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Canvas.K2_Deproject"));
    struct Params_K2_Deproject {
        FVector2D ScreenPosition; // 0x0
        FVector WorldOrigin; // 0x8
        FVector WorldDirection; // 0x14
    }; // Size: 0x20
    Params_K2_Deproject params{};
    params.ScreenPosition = (FVector2D)ScreenPosition;
    params.WorldOrigin = (FVector)WorldOrigin;
    params.WorldDirection = (FVector)WorldDirection;
    ProcessEvent(func, &params);
    WorldOrigin = params.WorldOrigin;
    WorldDirection = params.WorldDirection;
}
FVector UCanvas::K2_Project(FVector WorldLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Canvas.K2_Project"));
    struct Params_K2_Project {
        FVector WorldLocation; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_K2_Project params{};
    params.WorldLocation = (FVector)WorldLocation;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector2D UCanvas::K2_StrLen(UFont* RenderFont, FString RenderText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Canvas.K2_StrLen"));
    struct Params_K2_StrLen {
        UFont* RenderFont; // 0x0
        FString RenderText; // 0x8
        FVector2D ReturnValue; // 0x18
    }; // Size: 0x20
    Params_K2_StrLen params{};
    params.RenderFont = (UFont*)RenderFont;
    params.RenderText = (FString)RenderText;
    ProcessEvent(func, &params);
    return (FVector2D)params.ReturnValue;
}
void UCanvas::K2_DrawTriangle(UTexture* RenderTexture, TArray<FCanvasUVTri> Triangles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Canvas.K2_DrawTriangle"));
    struct Params_K2_DrawTriangle {
        UTexture* RenderTexture; // 0x0
        TArray<FCanvasUVTri> Triangles; // 0x8
    }; // Size: 0x18
    Params_K2_DrawTriangle params{};
    params.RenderTexture = (UTexture*)RenderTexture;
    params.Triangles = (TArray<FCanvasUVTri>)Triangles;
    ProcessEvent(func, &params);
}
void UCanvas::K2_DrawText(UFont* RenderFont, FString RenderText, FVector2D ScreenPosition, FVector2D Scale, FLinearColor RenderColor, float Kerning, FLinearColor shadowColor, FVector2D ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, FLinearColor OutlineColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Canvas.K2_DrawText"));
    struct Params_K2_DrawText {
        UFont* RenderFont; // 0x0
        FString RenderText; // 0x8
        FVector2D ScreenPosition; // 0x18
        FVector2D Scale; // 0x20
        FLinearColor RenderColor; // 0x28
        float Kerning; // 0x38
        FLinearColor shadowColor; // 0x3c
        FVector2D ShadowOffset; // 0x4c
        bool bCentreX; // 0x54
        bool bCentreY; // 0x55
        bool bOutlined; // 0x56
        char pad_57[0x1];
        FLinearColor OutlineColor; // 0x58
    }; // Size: 0x68
    Params_K2_DrawText params{};
    params.RenderFont = (UFont*)RenderFont;
    params.RenderText = (FString)RenderText;
    params.ScreenPosition = (FVector2D)ScreenPosition;
    params.Scale = (FVector2D)Scale;
    params.RenderColor = (FLinearColor)RenderColor;
    params.Kerning = (float)Kerning;
    params.shadowColor = (FLinearColor)shadowColor;
    params.ShadowOffset = (FVector2D)ShadowOffset;
    params.bCentreX = (bool)bCentreX;
    params.bCentreY = (bool)bCentreY;
    params.bOutlined = (bool)bOutlined;
    params.OutlineColor = (FLinearColor)OutlineColor;
    ProcessEvent(func, &params);
}
void UCanvas::K2_DrawTexture(UTexture* RenderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, EBlendMode BlendMode, float Rotation, FVector2D PivotPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Canvas.K2_DrawTexture"));
    struct Params_K2_DrawTexture {
        UTexture* RenderTexture; // 0x0
        FVector2D ScreenPosition; // 0x8
        FVector2D ScreenSize; // 0x10
        FVector2D CoordinatePosition; // 0x18
        FVector2D CoordinateSize; // 0x20
        FLinearColor RenderColor; // 0x28
        EBlendMode BlendMode; // 0x38
        char pad_39[0x3];
        float Rotation; // 0x3c
        FVector2D PivotPoint; // 0x40
    }; // Size: 0x48
    Params_K2_DrawTexture params{};
    params.RenderTexture = (UTexture*)RenderTexture;
    params.ScreenPosition = (FVector2D)ScreenPosition;
    params.ScreenSize = (FVector2D)ScreenSize;
    params.CoordinatePosition = (FVector2D)CoordinatePosition;
    params.CoordinateSize = (FVector2D)CoordinateSize;
    params.RenderColor = (FLinearColor)RenderColor;
    params.BlendMode = (EBlendMode)BlendMode;
    params.Rotation = (float)Rotation;
    params.PivotPoint = (FVector2D)PivotPoint;
    ProcessEvent(func, &params);
}
void UCanvas::K2_DrawBox(FVector2D ScreenPosition, FVector2D ScreenSize, float Thickness, FLinearColor RenderColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Canvas.K2_DrawBox"));
    struct Params_K2_DrawBox {
        FVector2D ScreenPosition; // 0x0
        FVector2D ScreenSize; // 0x8
        float Thickness; // 0x10
        FLinearColor RenderColor; // 0x14
    }; // Size: 0x24
    Params_K2_DrawBox params{};
    params.ScreenPosition = (FVector2D)ScreenPosition;
    params.ScreenSize = (FVector2D)ScreenSize;
    params.Thickness = (float)Thickness;
    params.RenderColor = (FLinearColor)RenderColor;
    ProcessEvent(func, &params);
}
void UCanvas::K2_DrawMaterialTriangle(UMaterialInterface* RenderMaterial, TArray<FCanvasUVTri> Triangles) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Canvas.K2_DrawMaterialTriangle"));
    struct Params_K2_DrawMaterialTriangle {
        UMaterialInterface* RenderMaterial; // 0x0
        TArray<FCanvasUVTri> Triangles; // 0x8
    }; // Size: 0x18
    Params_K2_DrawMaterialTriangle params{};
    params.RenderMaterial = (UMaterialInterface*)RenderMaterial;
    params.Triangles = (TArray<FCanvasUVTri>)Triangles;
    ProcessEvent(func, &params);
}
void UCanvas::K2_DrawMaterial(UMaterialInterface* RenderMaterial, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, float Rotation, FVector2D PivotPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Canvas.K2_DrawMaterial"));
    struct Params_K2_DrawMaterial {
        UMaterialInterface* RenderMaterial; // 0x0
        FVector2D ScreenPosition; // 0x8
        FVector2D ScreenSize; // 0x10
        FVector2D CoordinatePosition; // 0x18
        FVector2D CoordinateSize; // 0x20
        float Rotation; // 0x28
        FVector2D PivotPoint; // 0x2c
    }; // Size: 0x34
    Params_K2_DrawMaterial params{};
    params.RenderMaterial = (UMaterialInterface*)RenderMaterial;
    params.ScreenPosition = (FVector2D)ScreenPosition;
    params.ScreenSize = (FVector2D)ScreenSize;
    params.CoordinatePosition = (FVector2D)CoordinatePosition;
    params.CoordinateSize = (FVector2D)CoordinateSize;
    params.Rotation = (float)Rotation;
    params.PivotPoint = (FVector2D)PivotPoint;
    ProcessEvent(func, &params);
}
void UCanvas::K2_DrawLine(FVector2D ScreenPositionA, FVector2D ScreenPositionB, float Thickness, FLinearColor RenderColor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Canvas.K2_DrawLine"));
    struct Params_K2_DrawLine {
        FVector2D ScreenPositionA; // 0x0
        FVector2D ScreenPositionB; // 0x8
        float Thickness; // 0x10
        FLinearColor RenderColor; // 0x14
    }; // Size: 0x24
    Params_K2_DrawLine params{};
    params.ScreenPositionA = (FVector2D)ScreenPositionA;
    params.ScreenPositionB = (FVector2D)ScreenPositionB;
    params.Thickness = (float)Thickness;
    params.RenderColor = (FLinearColor)RenderColor;
    ProcessEvent(func, &params);
}
void UCanvas::K2_DrawBorder(UTexture* BorderTexture, UTexture* BackgroundTexture, UTexture* LeftBorderTexture, UTexture* RightBorderTexture, UTexture* TopBorderTexture, UTexture* BottomBorderTexture, FVector2D ScreenPosition, FVector2D ScreenSize, FVector2D CoordinatePosition, FVector2D CoordinateSize, FLinearColor RenderColor, FVector2D BorderScale, FVector2D BackgroundScale, float Rotation, FVector2D PivotPoint, FVector2D CornerSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.Canvas.K2_DrawBorder"));
    struct Params_K2_DrawBorder {
        UTexture* BorderTexture; // 0x0
        UTexture* BackgroundTexture; // 0x8
        UTexture* LeftBorderTexture; // 0x10
        UTexture* RightBorderTexture; // 0x18
        UTexture* TopBorderTexture; // 0x20
        UTexture* BottomBorderTexture; // 0x28
        FVector2D ScreenPosition; // 0x30
        FVector2D ScreenSize; // 0x38
        FVector2D CoordinatePosition; // 0x40
        FVector2D CoordinateSize; // 0x48
        FLinearColor RenderColor; // 0x50
        FVector2D BorderScale; // 0x60
        FVector2D BackgroundScale; // 0x68
        float Rotation; // 0x70
        FVector2D PivotPoint; // 0x74
        FVector2D CornerSize; // 0x7c
    }; // Size: 0x84
    Params_K2_DrawBorder params{};
    params.BorderTexture = (UTexture*)BorderTexture;
    params.BackgroundTexture = (UTexture*)BackgroundTexture;
    params.LeftBorderTexture = (UTexture*)LeftBorderTexture;
    params.RightBorderTexture = (UTexture*)RightBorderTexture;
    params.TopBorderTexture = (UTexture*)TopBorderTexture;
    params.BottomBorderTexture = (UTexture*)BottomBorderTexture;
    params.ScreenPosition = (FVector2D)ScreenPosition;
    params.ScreenSize = (FVector2D)ScreenSize;
    params.CoordinatePosition = (FVector2D)CoordinatePosition;
    params.CoordinateSize = (FVector2D)CoordinateSize;
    params.RenderColor = (FLinearColor)RenderColor;
    params.BorderScale = (FVector2D)BorderScale;
    params.BackgroundScale = (FVector2D)BackgroundScale;
    params.Rotation = (float)Rotation;
    params.PivotPoint = (FVector2D)PivotPoint;
    params.CornerSize = (FVector2D)CornerSize;
    ProcessEvent(func, &params);
}
