#pragma once
#include <cstdint>
#include "ERTPCValueType.hpp"
#include "USceneComponent.hpp"
class UAkAudioEvent;
class UAkRtpc;
class UObject;
#pragma pack(push, 1)
class UAkGameObject : public USceneComponent {
public:
    FString EventName; // 0x220
    char pad_230[0x10];
    static UAkGameObject* StaticClass();
    void Stop();
    void SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, FString RTPC);
    void PostAssociatedAkEventAsync(UObject* WorldContextObject, int32_t CallbackMask);
    void PostAssociatedAkEvent(int32_t CallbackMask);
    void PostAkEventWithStartTime(UAkAudioEvent* AkEvent, int32_t CallbackMask);
    void PostAkEventAsync(UObject* WorldContextObject, UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask);
    void PostAkEvent(UAkAudioEvent* AkEvent, int32_t CallbackMask);
    void GetRTPCValue(UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32_t PlayingID);
}; // Size: 0x240
#pragma pack(pop)
