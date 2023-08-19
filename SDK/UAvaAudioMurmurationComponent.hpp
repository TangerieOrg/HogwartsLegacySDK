#pragma once
#include <cstdint>
#include "UAkComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UAvaAudioMurmurationComponent : public UAkComponent {
public:
    char pad_620[0x60];
    static UAvaAudioMurmurationComponent* StaticClass();
    void UpdateHealthRTPCCallback(AActor* InActor, float Delta, bool bIndicateHUD);
    void StartIntensityDecay();
    void OnCharacterLoadComplete(AActor* Actor);
    void OnAddOnMeshesChanged(AActor* Actor);
    void IncrementRTPC(FString RTPC_Name, int32_t Increment, float InterpolationTime, bool bDecay);
    void AbsoluteRTPC(FString RTPC_Name, float RTPC_Value, float InterpolationTimeMs, bool bDecay);
}; // Size: 0x680
#pragma pack(pop)
