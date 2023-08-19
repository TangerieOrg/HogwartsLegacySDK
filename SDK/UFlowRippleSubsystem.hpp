#pragma once
#include <cstdint>
#include "UWorldSubsystem.hpp"
class UTextureRenderTarget2DArray;
class UPlayerRenderTarget;
class UFlowRippleSystemSettings;
struct FVector;
class USceneComponent;
struct FFlowDynamicRippleRequest;
#pragma pack(push, 1)
class UFlowRippleSubsystem : public UWorldSubsystem {
public:
    UTextureRenderTarget2DArray* RenderTargetResource; // 0x30
    UPlayerRenderTarget* PlayerRenderTarget; // 0x38
    UFlowRippleSystemSettings* Settings; // 0x40
    char pad_48[0x50];
    static UFlowRippleSubsystem* StaticClass();
    void UnregisterDynamicRippleSource(USceneComponent* Attachment);
    void RemovePersistentRippleSource(USceneComponent* Requester);
    void RegisterDynamicRippleSource(FFlowDynamicRippleRequest& Request);
    void AddRipple(FVector& PositionWorld, float Intensity, float Radius, float LifeTime, float ForceOverLifetime);
    void AddPersistentRippleSource(USceneComponent* Requester, float Intensity, float Radius, float OscillationFrequency);
}; // Size: 0x98
#pragma pack(pop)
