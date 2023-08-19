#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EHoverDroneControlMode\Type.hpp"
#include "FHoverDroneConfigStruct.hpp"
#include "FVector.hpp"
class UClass;
class UInputComponent;
class APlayerController;
class APhoenixHoverDronePawn;
#pragma pack(push, 1)
class AHoverDroneController : public AActor {
public:
    char pad_248[0x38];
    UClass* ControlModePawnClass[3]; // 0x280
    char pad_298[0x40];
    UClass* m_MinimapWidgetClass; // 0x2d8
    AActor* m_pFollowActor; // 0x2e0
    FHoverDroneConfigStruct MyStruct; // 0x2e8
    UInputComponent* m_pInputComponent; // 0x2f8
    APlayerController* m_pPlayerController; // 0x300
    float JumpToBookmarkCameraFadeTime; // 0x308
    float JumpToBookmarkCameraHoldBlackTime; // 0x30c
    char pad_310[0x30];
    static AHoverDroneController* StaticClass();
    void ToggleHUD();
    void StartHoverDroneFromSystemMenu();
    void SetPlayerBounds(FVector BoundsMin, FVector BoundsMax);
    void GetPlayerBounds(FVector& Max, FVector& Min);
    float GetPawnAltitude();
    APhoenixHoverDronePawn* GetDronePawn();
    FString GetControlModeString();
    EHoverDroneControlMode::Type GetControlMode();
}; // Size: 0x340
#pragma pack(pop)
