#pragma once
#include <cstdint>
#include "FRuntimeFloatCurve.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class ULightSmoothOnOff : public UActorComponent {
public:
    float DefaultIntensity; // 0xc8
    float IntensityChangeFilter; // 0xcc
    bool DisableIntensityFilter; // 0xd0
    char pad_d1[0x7];
    FRuntimeFloatCurve TurnOnCurve; // 0xd8
    float TurnOnDuration; // 0x160
    char pad_164[0x4];
    FRuntimeFloatCurve TurnOffCurve; // 0x168
    float TurnOffDuration; // 0x1f0
    bool DisableOnOffSmoothing; // 0x1f4
    char pad_1f5[0x3];
    float TimeFactor; // 0x1f8
    char pad_1fc[0x14];
    static ULightSmoothOnOff* StaticClass();
    void TurnOnOff(bool On, bool smooth);
    void SetIntensity(float NewIntensity, bool Filter);
    bool IsOnSmoothed();
    bool IsOn();
    void Initialize(float Intensity, bool Visible);
    float GetSmoothedIntensity();
    float GetIntensity();
    void AbortFadeOn(bool abortFade);
    void AbortFadeOff(bool abortFade);
}; // Size: 0x210
#pragma pack(pop)
