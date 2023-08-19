#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAIPerceptionComponent.hpp"
class UClass;
class AActor;
#pragma pack(push, 1)
class UCognitionComponent : public UAIPerceptionComponent {
public:
    float TimeOutCameraStickMoved; // 0x1a8
    char pad_1ac[0x94];
    static UCognitionComponent* StaticClass();
    void TimerExpired();
    void SetRightStickMoving(bool bInFlag);
    void SetMovementFocusDirection(FVector& WorldDirection);
    void SetLeftStickMoving(bool bInFlag);
    void SetIsLocked(bool bInFlag);
    void SetCameraLastMovedStick(bool InFlag);
    bool IsRightStickMoving();
    bool IsLocked();
    bool IsLeftStickMoving();
    bool IsCameraLastMovedStick();
    FVector GetMovementFocusDirection();
    FVector2D GetCameraFlickDirection();
    AActor* GetBestTarget(UClass* SenseImplementation);
    void DEBUG_CycleDebug();
    void DEBUG_ByIndex(int32_t InIndex);
}; // Size: 0x240
#pragma pack(pop)
