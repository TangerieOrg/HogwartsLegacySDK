#pragma once
#include <cstdint>
#include "FSpellUnlockMiniGamePathSegment.hpp"
#include "FVector2D.hpp"
#include "UPhoenixUserWidget.hpp"
class UObject;
#pragma pack(push, 1)
class USpellMiniGameSpark : public UPhoenixUserWidget {
public:
    bool IsRunning; // 0x328
    char pad_329[0x3];
    FVector2D LinearInput; // 0x32c
    float MaxSpeed; // 0x334
    float MaxAcceleration; // 0x338
    float BoostMultiplier; // 0x33c
    float BoostTime; // 0x340
    float BoostRampUpSpeed; // 0x344
    float BoostRampDownSpeed; // 0x348
    float OrientationSmoothSpeed; // 0x34c
    float MaxOrientationSmoothAngle; // 0x350
    float NormalizedPerformanceSpeed; // 0x354
    char pad_358[0x68];
    static USpellMiniGameSpark* StaticClass();
    void Stop();
    void Start();
    void Reset();
    void OnRun();
    void OnReset();
    void OnInputFailure();
    void OnFail(UObject* sender);
    void OnEnterInputWindow();
    void OnBoostStart();
    void OnBoostEnd();
    void LogSpellMinigameData(FString LogData);
    FVector2D GetVelocity();
    float GetTotalDistanceAsPercent();
    FVector2D GetPosition();
    float GetOrientation();
    float GetNextAngleTowardsDirection(float CurrentAngle, FVector2D& TargetDirection, float& SmoothSpeed, float& MaxSmoothAngle);
    bool GetIsBoosting();
    float GetDistanceAlongPathSegment(FSpellUnlockMiniGamePathSegment PathSegment);
    FVector2D GetDirection();
    FVector2D GetCurrentPositionOnPath();
    int32_t GetCurrentPathSegmentIndex();
    FSpellUnlockMiniGamePathSegment GetCurrentPathSegment();
    float GetCurrentDistanceAlongPath();
    float GetActiveSpeedScale();
    void ApplyBoost();
}; // Size: 0x3c0
#pragma pack(pop)
