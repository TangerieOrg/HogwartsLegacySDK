#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EBlendMode.hpp"
#include "FColor.hpp"
#include "FDebugTextInfo.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
class UMaterialInterface;
class APlayerController;
class UFont;
class UCanvas;
class APawn;
class UClass;
class UTexture;
#pragma pack(push, 1)
class AHUD : public AActor {
public:
    APlayerController* PlayerOwner; // 0x248
    uint8_t bLostFocusPaused : 1; // 0x250
    uint8_t bShowHUD : 1; // 0x250
    uint8_t bShowDebugInfo : 1; // 0x250
    uint8_t pad_bitfield_250_3 : 5;
    char pad_251[0x3];
    int32_t CurrentTargetIndex; // 0x254
    uint8_t bShowHitBoxDebugInfo : 1; // 0x258
    uint8_t bShowOverlays : 1; // 0x258
    uint8_t bEnableDebugTextShadow : 1; // 0x258
    uint8_t pad_bitfield_258_3 : 5;
    char pad_259[0x7];
    TArray<AActor*> PostRenderedActors; // 0x260
    char pad_270[0x8];
    TArray<FName> DebugDisplay; // 0x278
    TArray<FName> ToggledDebugCategories; // 0x288
    UCanvas* Canvas; // 0x298
    UCanvas* DebugCanvas; // 0x2a0
    TArray<FDebugTextInfo> DebugTextList; // 0x2a8
    UClass* ShowDebugTargetDesiredClass; // 0x2b8
    AActor* ShowDebugTargetActor; // 0x2c0
    char pad_2c8[0x70];
    static AHUD* StaticClass();
    void ShowHUD();
    void ShowDebugToggleSubCategory(FName Category);
    void ShowDebugForReticleTargetToggle(UClass* DesiredClass);
    void ShowDebug(FName DebugType);
    void RemoveDebugText(AActor* SrcActor, bool bLeaveDurationText);
    void RemoveAllDebugStrings();
    void ReceiveHitBoxRelease(FName BoxName);
    void ReceiveHitBoxEndCursorOver(FName BoxName);
    void ReceiveHitBoxClick(FName BoxName);
    void ReceiveHitBoxBeginCursorOver(FName BoxName);
    void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY);
    FVector Project(FVector Location);
    void PreviousDebugTarget();
    void NextDebugTarget();
    void GetTextSize(FString Text, float& OutWidth, float& OutHeight, UFont* Font, float Scale);
    APlayerController* GetOwningPlayerController();
    APawn* GetOwningPawn();
    void GetActorsInSelectionRectangle(UClass* ClassFilter, FVector2D& FirstPoint, FVector2D& SecondPoint, TArray<AActor*>& OutActors, bool bIncludeNonCollidingComponents, bool bActorMustBeFullyEnclosed);
    void DrawTextureSimple(UTexture* Texture, float ScreenX, float ScreenY, float Scale, bool bScalePosition);
    void DrawTexture(UTexture* Texture, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float TextureU, float TextureV, float TextureUWidth, float TextureVHeight, FLinearColor TintColor, EBlendMode BlendMode, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);
    void DrawText(FString Text, FLinearColor TextColor, float ScreenX, float ScreenY, UFont* Font, float Scale, bool bScalePosition);
    void DrawRect(FLinearColor RectColor, float ScreenX, float ScreenY, float ScreenW, float ScreenH);
    void DrawMaterialTriangle(UMaterialInterface* Material, FVector2D V0_Pos, FVector2D V1_Pos, FVector2D V2_Pos, FVector2D V0_UV, FVector2D V1_UV, FVector2D V2_UV, FLinearColor V0_Color, FLinearColor V1_Color, FLinearColor V2_Color);
    void DrawMaterialSimple(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float Scale, bool bScalePosition);
    void DrawMaterial(UMaterialInterface* Material, float ScreenX, float ScreenY, float ScreenW, float ScreenH, float MaterialU, float MaterialV, float MaterialUWidth, float MaterialVHeight, float Scale, bool bScalePosition, float Rotation, FVector2D RotPivot);
    void DrawLine(float StartScreenX, float StartScreenY, float EndScreenX, float EndScreenY, FLinearColor LineColor, float LineThickness);
    void Deproject(float ScreenX, float ScreenY, FVector& WorldPosition, FVector& WorldDirection);
    void AddHitBox(FVector2D Position, FVector2D Size, FName InName, bool bConsumesInput, int32_t Priority);
    void AddDebugText(FString DebugText, AActor* SrcActor, float Duration, FVector Offset, FVector DesiredOffset, FColor TextColor, bool bSkipOverwriteCheck, bool bAbsoluteLocation, bool bKeepAttachedToActor, UFont* InFont, float FontScale, bool bDrawShadow);
}; // Size: 0x338
#pragma pack(pop)
