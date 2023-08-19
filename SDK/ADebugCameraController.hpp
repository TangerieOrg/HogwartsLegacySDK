#pragma once
#include <cstdint>
#include "APlayerController.hpp"
#include "FHitResult.hpp"
class UDrawFrustumComponent;
class UPrimitiveComponent;
class AActor;
struct FVector;
class UPlayer;
#pragma pack(push, 1)
class ADebugCameraController : public APlayerController {
public:
    uint8_t bShowSelectedInfo : 1; // 0x5b0
    uint8_t bIsFrozenRendering : 1; // 0x5b0
    uint8_t bIsOrbitingSelectedActor : 1; // 0x5b0
    uint8_t bOrbitPivotUseCenter : 1; // 0x5b0
    uint8_t bEnableBufferVisualization : 1; // 0x5b0
    uint8_t bEnableBufferVisualizationFullMode : 1; // 0x5b0
    uint8_t bIsBufferVisualizationInputSetup : 1; // 0x5b0
    uint8_t bLastDisplayEnabled : 1; // 0x5b0
    char pad_5b1[0x7];
    UDrawFrustumComponent* DrawFrustum; // 0x5b8
    AActor* SelectedActor; // 0x5c0
    UPrimitiveComponent* SelectedComponent; // 0x5c8
    FHitResult SelectedHitPoint; // 0x5d0
    APlayerController* OriginalControllerRef; // 0x658
    UPlayer* OriginalPlayer; // 0x660
    float SpeedScale; // 0x668
    float InitialMaxSpeed; // 0x66c
    float InitialAccel; // 0x670
    float InitialDecel; // 0x674
    char pad_678[0x38];
    static ADebugCameraController* StaticClass();
    void ToggleDisplay();
    void ShowDebugSelectedInfo();
    void SetPawnMovementSpeedScale(float NewSpeedScale);
    void ReceiveOnDeactivate(APlayerController* RestoredPC);
    void ReceiveOnActorSelected(AActor* NewSelectedActor, FVector& SelectHitLocation, FVector& SelectHitNormal, FHitResult& Hit);
    void ReceiveOnActivate(APlayerController* OriginalPC);
    AActor* GetSelectedActor();
}; // Size: 0x6b0
#pragma pack(pop)
