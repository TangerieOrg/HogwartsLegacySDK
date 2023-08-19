#pragma once
#include <cstdint>
#include "EReticuleState.hpp"
#include "FVector2D.hpp"
#include "UHUDElementGroup.hpp"
class UCanvasPanel;
class UImage;
class UWidget;
#pragma pack(push, 1)
class UReticule : public UHUDElementGroup {
public:
    bool IsSubReticuleVisible; // 0x2e8
    bool UseWeakSub; // 0x2e9
    char pad_2ea[0x2];
    float SubReticuleMoveToTargetTime; // 0x2ec
    float FinisherMaxSpeed; // 0x2f0
    float FinisherAcceleration; // 0x2f4
    bool IsFinisherOverlapped; // 0x2f8
    bool IsBestFinisherOverlapped; // 0x2f9
    bool PreventFinisherWhenNotOverlapped; // 0x2fa
    bool UseLinearFinisherReticule; // 0x2fb
    float FinisherStartAngle; // 0x2fc
    float FinisherLinearStartDistance; // 0x300
    float InitialFinisherReticuleDelay; // 0x304
    float OverlapHalfAngle; // 0x308
    float BestOverlapHalfAngle; // 0x30c
    float HoldFinisherTime; // 0x310
    char pad_314[0x4];
    UCanvasPanel* FinisherCircle; // 0x318
    UCanvasPanel* FinisherRing; // 0x320
    UImage* FinisherCircleImage; // 0x328
    UImage* FinisherRingImage; // 0x330
    UWidget* ReticulePanel; // 0x338
    UImage* Primary; // 0x340
    EReticuleState ReticuleState; // 0x348
    bool IsReticuleVisible; // 0x349
    bool IsCombatReticuleVisible; // 0x34a
    bool IsTargetReticuleVisible; // 0x34b
    char pad_34c[0x7c];
    static UReticule* StaticClass();
    void UseWeakReticuleBP(bool InUseWeakSub);
    void ShowTargetReticule(bool IsVisible);
    void ShowCombatReticule(bool IsVisible);
    void Show(bool IsVisible);
    void SetupForLinearFinisher();
    void SetupForCircularFinisher();
    void SetState(EReticuleState State);
    void SetFinisherNormalizedAngle(float NormalizedAngle);
    void SetFinisherActive(bool FinisherActiveIn);
    void HandleShowTargetReticule(bool IsVisible);
    void HandleShowSub(bool IsVisible);
    void HandleShowRing(bool IsVisible);
    void HandleShowCombatReticule(bool IsVisible);
    void HandleShow(bool IsVisible);
    void HandleSetTargetRingPosition(FVector2D Position);
    void HandleSetSubPosition(FVector2D Position);
    void HandleSetState(EReticuleState State);
    void HandleSetPrimaryPosition(FVector2D Position);
    void HandleOverlapping(bool Overlapping);
    void HandleFire();
    void HandleFinisherActiveChanged(bool FinisherActiveIn);
    void HandleFadeFinisher();
    void HandleBestOverlapping(bool Overlapping);
    EReticuleState GetState();
    bool GetFinisherActive();
}; // Size: 0x3c8
#pragma pack(pop)
