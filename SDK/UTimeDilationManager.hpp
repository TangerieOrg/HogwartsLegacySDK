#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
class UCurveFloat;
#pragma pack(push, 1)
class UTimeDilationManager : public UObject {
public:
    char pad_28[0xa8];
    static UTimeDilationManager* StaticClass();
    static void StartWorldTimeDilation(UObject* WorldContextObject, float Dilation, UObject* Provider, float EaseInDuration);
    static void StartActorTimeDilation(AActor* Actor, float Dilation, UObject* Provider, float EaseInDuration);
    static void StartActorTimeAcceleration(AActor* Actor, float AccelerationDilation, float AcceleratedDuration, UObject* Provider);
    static void StartActorCounterDilation(AActor* Actor);
    static void PlayWorldTimeDilationEffect(UObject* WorldContextObject, UCurveFloat* TimeDilationCurve);
    static void PlayActorTimeDilationEffect(AActor* Actor, UCurveFloat* TimeDilationCurve);
    static void FinishWorldTimeDilation(UObject* Provider, float EaseOutDuration);
    static void FinishActorTimeDilation(UObject* Provider, float EaseOutDuration);
    static void FinishActorCounterDilation(AActor* Actor);
}; // Size: 0xd0
#pragma pack(pop)
