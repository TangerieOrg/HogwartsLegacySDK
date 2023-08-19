#include "AActor.hpp"
#include "AHUD.hpp"
#include "APawn.hpp"
#include "APlayerController.hpp"
#include "EBlendMode.hpp"
#include "FColor.hpp"
#include "FDebugTextInfo.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UCanvas.hpp"
#include "UClass.hpp"
#include "UFont.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UTexture.hpp"
void AHUD::ShowDebug(FName DebugType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.ShowDebug"));
    struct Params_ShowDebug {
        FName DebugType; // 0x0
    }; // Size: 0x8
    Params_ShowDebug params{};
    params.DebugType = (FName)DebugType;
    ProcessEvent(func, &params);
}
FVector AHUD::Project(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.Project"));
    struct Params_Project {
        FVector Location; // 0x0
        FVector ReturnValue; // 0xc
    }; // Size: 0x18
    Params_Project params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
AHUD* AHUD::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.HUD");
    return (AHUD*)res;
}
void AHUD::ReceiveHitBoxRelease(FName BoxName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.ReceiveHitBoxRelease"));
    struct Params_ReceiveHitBoxRelease {
        FName BoxName; // 0x0
    }; // Size: 0x8
    Params_ReceiveHitBoxRelease params{};
    params.BoxName = (FName)BoxName;
    ProcessEvent(func, &params);
}
void AHUD::RemoveAllDebugStrings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.RemoveAllDebugStrings"));
    struct Params_RemoveAllDebugStrings {
    }; // Size: 0x0
    Params_RemoveAllDebugStrings params{};
    ProcessEvent(func, &params);
}
void AHUD::ShowHUD() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.ShowHUD"));
    struct Params_ShowHUD {
    }; // Size: 0x0
    Params_ShowHUD params{};
    ProcessEvent(func, &params);
}
void AHUD::ShowDebugToggleSubCategory(FName Category) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.ShowDebugToggleSubCategory"));
    struct Params_ShowDebugToggleSubCategory {
        FName Category; // 0x0
    }; // Size: 0x8
    Params_ShowDebugToggleSubCategory params{};
    params.Category = (FName)Category;
    ProcessEvent(func, &params);
}
void AHUD::ShowDebugForReticleTargetToggle(UClass* DesiredClass) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.ShowDebugForReticleTargetToggle"));
    struct Params_ShowDebugForReticleTargetToggle {
        UClass* DesiredClass; // 0x0
    }; // Size: 0x8
    Params_ShowDebugForReticleTargetToggle params{};
    params.DesiredClass = (UClass*)DesiredClass;
    ProcessEvent(func, &params);
}
void AHUD::RemoveDebugText(AActor* SrcActor, bool bLeaveDurationText) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.RemoveDebugText"));
    struct Params_RemoveDebugText {
        AActor* SrcActor; // 0x0
        bool bLeaveDurationText; // 0x8
    }; // Size: 0x9
    Params_RemoveDebugText params{};
    params.SrcActor = (AActor*)SrcActor;
    params.bLeaveDurationText = (bool)bLeaveDurationText;
    ProcessEvent(func, &params);
}
void AHUD::ReceiveHitBoxEndCursorOver(FName BoxName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.ReceiveHitBoxEndCursorOver"));
    struct Params_ReceiveHitBoxEndCursorOver {
        FName BoxName; // 0x0
    }; // Size: 0x8
    Params_ReceiveHitBoxEndCursorOver params{};
    params.BoxName = (FName)BoxName;
    ProcessEvent(func, &params);
}
void AHUD::ReceiveHitBoxClick(FName BoxName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.ReceiveHitBoxClick"));
    struct Params_ReceiveHitBoxClick {
        FName BoxName; // 0x0
    }; // Size: 0x8
    Params_ReceiveHitBoxClick params{};
    params.BoxName = (FName)BoxName;
    ProcessEvent(func, &params);
}
void AHUD::DrawRect(FLinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.DrawRect"));
    struct Params_DrawRect {
        FLinearColor RectColor; // 0x0
        float ScreenX; // 0x10
        float ScreenY; // 0x14
        float ScreenW; // 0x18
        float ScreenH; // 0x1c
    }; // Size: 0x20
    Params_DrawRect params{};
    params.RectColor = (FLinearColor)RectColor;
    params.ScreenX = (float)ScreenX;
    params.ScreenY = (float)ScreenY;
    params.ScreenW = (float)ScreenW;
    params.ScreenH = (float)ScreenH;
    ProcessEvent(func, &params);
}
void AHUD::ReceiveHitBoxBeginCursorOver(FName BoxName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.ReceiveHitBoxBeginCursorOver"));
    struct Params_ReceiveHitBoxBeginCursorOver {
        FName BoxName; // 0x0
    }; // Size: 0x8
    Params_ReceiveHitBoxBeginCursorOver params{};
    params.BoxName = (FName)BoxName;
    ProcessEvent(func, &params);
}
void AHUD::NextDebugTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.NextDebugTarget"));
    struct Params_NextDebugTarget {
    }; // Size: 0x0
    Params_NextDebugTarget params{};
    ProcessEvent(func, &params);
}
void AHUD::ReceiveDrawHUD(int32_t SizeX, int32_t SizeY) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.ReceiveDrawHUD"));
    struct Params_ReceiveDrawHUD {
        int32_t SizeX; // 0x0
        int32_t SizeY; // 0x4
    }; // Size: 0x8
    Params_ReceiveDrawHUD params{};
    params.SizeX = (int32_t)SizeX;
    params.SizeY = (int32_t)SizeY;
    ProcessEvent(func, &params);
}
void AHUD::PreviousDebugTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.PreviousDebugTarget"));
    struct Params_PreviousDebugTarget {
    }; // Size: 0x0
    Params_PreviousDebugTarget params{};
    ProcessEvent(func, &params);
}
void AHUD::GetTextSize(FString Text, float& OutWidth, float& OutHeight, UFont* Font, float Scale) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.GetTextSize"));
    struct Params_GetTextSize {
        FString Text; // 0x0
        float OutWidth; // 0x10
        float OutHeight; // 0x14
        UFont* Font; // 0x18
        float Scale; // 0x20
    }; // Size: 0x24
    Params_GetTextSize params{};
    params.Text = (FString)Text;
    params.OutWidth = (float)OutWidth;
    params.OutHeight = (float)OutHeight;
    params.Font = (UFont*)Font;
    params.Scale = (float)Scale;
    ProcessEvent(func, &params);
    OutWidth = params.OutWidth;
    OutHeight = params.OutHeight;
}
void AHUD::DrawTextureSimple(UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.DrawTextureSimple"));
    struct Params_DrawTextureSimple {
        UTexture* Texture; // 0x0
        float ScreenX; // 0x8
        float ScreenY; // 0xc
        float Scale; // 0x10
        bool bScalePosition; // 0x14
    }; // Size: 0x15
    Params_DrawTextureSimple params{};
    params.Texture = (UTexture*)Texture;
    params.ScreenX = (float)ScreenX;
    params.ScreenY = (float)ScreenY;
    params.Scale = (float)Scale;
    params.bScalePosition = (bool)bScalePosition;
    ProcessEvent(func, &params);
}
APlayerController* AHUD::GetOwningPlayerController() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.GetOwningPlayerController"));
    struct Params_GetOwningPlayerController {
        APlayerController* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwningPlayerController params{};
    ProcessEvent(func, &params);
    return (APlayerController*)params.ReturnValue;
}
APawn* AHUD::GetOwningPawn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.GetOwningPawn"));
    struct Params_GetOwningPawn {
        APawn* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetOwningPawn params{};
    ProcessEvent(func, &params);
    return (APawn*)params.ReturnValue;
}
void AHUD::GetActorsInSelectionRectangle(UClass* ClassFilter, FVector2D& FirstPoint, FVector2D& SecondPoint, TArray<AActor*>& OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.GetActorsInSelectionRectangle"));
    struct Params_GetActorsInSelectionRectangle {
        UClass* ClassFilter; // 0x0
        FVector2D FirstPoint; // 0x8
        FVector2D SecondPoint; // 0x10
        TArray<AActor*> OutActors; // 0x18
        bool bIncludeNonCollidingComponents; // 0x28
        bool bActorMustBeFullyEnclosed; // 0x29
    }; // Size: 0x2a
    Params_GetActorsInSelectionRectangle params{};
    params.ClassFilter = (UClass*)ClassFilter;
    params.FirstPoint = (FVector2D)FirstPoint;
    params.SecondPoint = (FVector2D)SecondPoint;
    params.OutActors = (TArray<AActor*>)OutActors;
    params.bIncludeNonCollidingComponents = (bool)bIncludeNonCollidingComponents;
    params.bActorMustBeFullyEnclosed = (bool)bActorMustBeFullyEnclosed;
    ProcessEvent(func, &params);
    SecondPoint = params.SecondPoint;
    FirstPoint = params.FirstPoint;
    OutActors = params.OutActors;
}
void AHUD::AddDebugText(FString DebugText, AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont* InFont, float FontScale, bool bDrawShadow) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.AddDebugText"));
    struct Params_AddDebugText {
        FString DebugText; // 0x0
        AActor* SrcActor; // 0x10
        float Duration; // 0x18
        FVector Offset; // 0x1c
        FVector DesiredOffset; // 0x28
        FColor TextColor; // 0x34
        bool bSkipOverwriteCheck; // 0x38
        bool bAbsoluteLocation; // 0x39
        bool bKeepAttachedToActor; // 0x3a
        char pad_3b[0x5];
        UFont* InFont; // 0x40
        float FontScale; // 0x48
        bool bDrawShadow; // 0x4c
    }; // Size: 0x4d
    Params_AddDebugText params{};
    params.DebugText = (FString)DebugText;
    params.SrcActor = (AActor*)SrcActor;
    params.Duration = (float)Duration;
    params.Offset = (FVector)Offset;
    params.DesiredOffset = (FVector)DesiredOffset;
    params.TextColor = (FColor)TextColor;
    params.bSkipOverwriteCheck = (bool)bSkipOverwriteCheck;
    params.bAbsoluteLocation = (bool)bAbsoluteLocation;
    params.bKeepAttachedToActor = (bool)bKeepAttachedToActor;
    params.InFont = (UFont*)InFont;
    params.FontScale = (float)FontScale;
    params.bDrawShadow = (bool)bDrawShadow;
    ProcessEvent(func, &params);
}
void AHUD::DrawTexture(UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, EBlendMode BlendMode, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.DrawTexture"));
    struct Params_DrawTexture {
        UTexture* Texture; // 0x0
        float ScreenX; // 0x8
        float ScreenY; // 0xc
        float ScreenW; // 0x10
        float ScreenH; // 0x14
        float TextureU; // 0x18
        float TextureV; // 0x1c
        float TextureUWidth; // 0x20
        float TextureVHeight; // 0x24
        FLinearColor TintColor; // 0x28
        EBlendMode BlendMode; // 0x38
        char pad_39[0x3];
        float Scale; // 0x3c
        bool bScalePosition; // 0x40
        char pad_41[0x3];
        float Rotation; // 0x44
        FVector2D RotPivot; // 0x48
    }; // Size: 0x50
    Params_DrawTexture params{};
    params.Texture = (UTexture*)Texture;
    params.ScreenX = (float)ScreenX;
    params.ScreenY = (float)ScreenY;
    params.ScreenW = (float)ScreenW;
    params.ScreenH = (float)ScreenH;
    params.TextureU = (float)TextureU;
    params.TextureV = (float)TextureV;
    params.TextureUWidth = (float)TextureUWidth;
    params.TextureVHeight = (float)TextureVHeight;
    params.TintColor = (FLinearColor)TintColor;
    params.BlendMode = (EBlendMode)BlendMode;
    params.Scale = (float)Scale;
    params.bScalePosition = (bool)bScalePosition;
    params.Rotation = (float)Rotation;
    params.RotPivot = (FVector2D)RotPivot;
    ProcessEvent(func, &params);
}
void AHUD::DrawText(FString Text, FLinearColor TextColor, float ScreenX, float ScreenY, UFont* Font, float Scale, bool bScalePosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.DrawText"));
    struct Params_DrawText {
        FString Text; // 0x0
        FLinearColor TextColor; // 0x10
        float ScreenX; // 0x20
        float ScreenY; // 0x24
        UFont* Font; // 0x28
        float Scale; // 0x30
        bool bScalePosition; // 0x34
    }; // Size: 0x35
    Params_DrawText params{};
    params.Text = (FString)Text;
    params.TextColor = (FLinearColor)TextColor;
    params.ScreenX = (float)ScreenX;
    params.ScreenY = (float)ScreenY;
    params.Font = (UFont*)Font;
    params.Scale = (float)Scale;
    params.bScalePosition = (bool)bScalePosition;
    ProcessEvent(func, &params);
}
void AHUD::DrawMaterialTriangle(UMaterialInterface* Material, FVector2D V0_Pos, FVector2D V1_Pos, FVector2D V2_Pos, FVector2D V0_UV, FVector2D V1_UV, FVector2D V2_UV, FLinearColor V0_Color, FLinearColor V1_Color, FLinearColor V2_Color) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.DrawMaterialTriangle"));
    struct Params_DrawMaterialTriangle {
        UMaterialInterface* Material; // 0x0
        FVector2D V0_Pos; // 0x8
        FVector2D V1_Pos; // 0x10
        FVector2D V2_Pos; // 0x18
        FVector2D V0_UV; // 0x20
        FVector2D V1_UV; // 0x28
        FVector2D V2_UV; // 0x30
        FLinearColor V0_Color; // 0x38
        FLinearColor V1_Color; // 0x48
        FLinearColor V2_Color; // 0x58
    }; // Size: 0x68
    Params_DrawMaterialTriangle params{};
    params.Material = (UMaterialInterface*)Material;
    params.V0_Pos = (FVector2D)V0_Pos;
    params.V1_Pos = (FVector2D)V1_Pos;
    params.V2_Pos = (FVector2D)V2_Pos;
    params.V0_UV = (FVector2D)V0_UV;
    params.V1_UV = (FVector2D)V1_UV;
    params.V2_UV = (FVector2D)V2_UV;
    params.V0_Color = (FLinearColor)V0_Color;
    params.V1_Color = (FLinearColor)V1_Color;
    params.V2_Color = (FLinearColor)V2_Color;
    ProcessEvent(func, &params);
}
void AHUD::DrawMaterialSimple(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.DrawMaterialSimple"));
    struct Params_DrawMaterialSimple {
        UMaterialInterface* Material; // 0x0
        float ScreenX; // 0x8
        float ScreenY; // 0xc
        float ScreenW; // 0x10
        float ScreenH; // 0x14
        float Scale; // 0x18
        bool bScalePosition; // 0x1c
    }; // Size: 0x1d
    Params_DrawMaterialSimple params{};
    params.Material = (UMaterialInterface*)Material;
    params.ScreenX = (float)ScreenX;
    params.ScreenY = (float)ScreenY;
    params.ScreenW = (float)ScreenW;
    params.ScreenH = (float)ScreenH;
    params.Scale = (float)Scale;
    params.bScalePosition = (bool)bScalePosition;
    ProcessEvent(func, &params);
}
void AHUD::DrawMaterial(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.DrawMaterial"));
    struct Params_DrawMaterial {
        UMaterialInterface* Material; // 0x0
        float ScreenX; // 0x8
        float ScreenY; // 0xc
        float ScreenW; // 0x10
        float ScreenH; // 0x14
        float MaterialU; // 0x18
        float MaterialV; // 0x1c
        float MaterialUWidth; // 0x20
        float MaterialVHeight; // 0x24
        float Scale; // 0x28
        bool bScalePosition; // 0x2c
        char pad_2d[0x3];
        float Rotation; // 0x30
        FVector2D RotPivot; // 0x34
    }; // Size: 0x3c
    Params_DrawMaterial params{};
    params.Material = (UMaterialInterface*)Material;
    params.ScreenX = (float)ScreenX;
    params.ScreenY = (float)ScreenY;
    params.ScreenW = (float)ScreenW;
    params.ScreenH = (float)ScreenH;
    params.MaterialU = (float)MaterialU;
    params.MaterialV = (float)MaterialV;
    params.MaterialUWidth = (float)MaterialUWidth;
    params.MaterialVHeight = (float)MaterialVHeight;
    params.Scale = (float)Scale;
    params.bScalePosition = (bool)bScalePosition;
    params.Rotation = (float)Rotation;
    params.RotPivot = (FVector2D)RotPivot;
    ProcessEvent(func, &params);
}
void AHUD::DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, FLinearColor LineColor, float LineThickness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.DrawLine"));
    struct Params_DrawLine {
        float StartScreenX; // 0x0
        float StartScreenY; // 0x4
        float EndScreenX; // 0x8
        float EndScreenY; // 0xc
        FLinearColor LineColor; // 0x10
        float LineThickness; // 0x20
    }; // Size: 0x24
    Params_DrawLine params{};
    params.StartScreenX = (float)StartScreenX;
    params.StartScreenY = (float)StartScreenY;
    params.EndScreenX = (float)EndScreenX;
    params.EndScreenY = (float)EndScreenY;
    params.LineColor = (FLinearColor)LineColor;
    params.LineThickness = (float)LineThickness;
    ProcessEvent(func, &params);
}
void AHUD::Deproject(float ScreenX, float ScreenY, FVector& WorldPosition, FVector& WorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.Deproject"));
    struct Params_Deproject {
        float ScreenX; // 0x0
        float ScreenY; // 0x4
        FVector WorldPosition; // 0x8
        FVector WorldDirection; // 0x14
    }; // Size: 0x20
    Params_Deproject params{};
    params.ScreenX = (float)ScreenX;
    params.ScreenY = (float)ScreenY;
    params.WorldPosition = (FVector)WorldPosition;
    params.WorldDirection = (FVector)WorldDirection;
    ProcessEvent(func, &params);
    WorldPosition = params.WorldPosition;
    WorldDirection = params.WorldDirection;
}
void AHUD::AddHitBox(FVector2D Position, FVector2D Size, FName InName, bool bConsumesInput, int32_t Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.HUD.AddHitBox"));
    struct Params_AddHitBox {
        FVector2D Position; // 0x0
        FVector2D Size; // 0x8
        FName InName; // 0x10
        bool bConsumesInput; // 0x18
        char pad_19[0x3];
        int32_t Priority; // 0x1c
    }; // Size: 0x20
    Params_AddHitBox params{};
    params.Position = (FVector2D)Position;
    params.Size = (FVector2D)Size;
    params.InName = (FName)InName;
    params.bConsumesInput = (bool)bConsumesInput;
    params.Priority = (int32_t)Priority;
    ProcessEvent(func, &params);
}
