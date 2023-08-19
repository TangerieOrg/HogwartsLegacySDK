#include "ERTPCValueType.hpp"
#include "UAkAudioEvent.hpp"
#include "UAkGameObject.hpp"
#include "UAkRtpc.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "USceneComponent.hpp"
UAkGameObject* UAkGameObject::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.AkGameObject");
    return (UAkGameObject*)res;
}
void UAkGameObject::Stop() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameObject.Stop"));
    struct Params_Stop {
    }; // Size: 0x0
    Params_Stop params{};
    ProcessEvent(func, &params);
}
void UAkGameObject::SetRTPCValue(UAkRtpc* RTPCValue, float Value, int32_t InterpolationTimeMs, FString RTPC) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameObject.SetRTPCValue"));
    struct Params_SetRTPCValue {
        UAkRtpc* RTPCValue; // 0x0
        float Value; // 0x8
        int32_t InterpolationTimeMs; // 0xc
        FString RTPC; // 0x10
    }; // Size: 0x20
    Params_SetRTPCValue params{};
    params.RTPCValue = (UAkRtpc*)RTPCValue;
    params.Value = (float)Value;
    params.InterpolationTimeMs = (int32_t)InterpolationTimeMs;
    params.RTPC = (FString)RTPC;
    ProcessEvent(func, &params);
}
void UAkGameObject::PostAkEventWithStartTime(UAkAudioEvent* AkEvent, int32_t CallbackMask) {}
void UAkGameObject::GetRTPCValue(UAkRtpc* RTPCValue, ERTPCValueType InputValueType, float& Value, ERTPCValueType& OutputValueType, FString RTPC, int32_t PlayingID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.AkGameObject.GetRTPCValue"));
    struct Params_GetRTPCValue {
        UAkRtpc* RTPCValue; // 0x0
        ERTPCValueType InputValueType; // 0x8
        char pad_9[0x3];
        float Value; // 0xc
        ERTPCValueType OutputValueType; // 0x10
        char pad_11[0x7];
        FString RTPC; // 0x18
        int32_t PlayingID; // 0x28
    }; // Size: 0x2c
    Params_GetRTPCValue params{};
    params.RTPCValue = (UAkRtpc*)RTPCValue;
    params.InputValueType = (ERTPCValueType)InputValueType;
    params.Value = (float)Value;
    params.OutputValueType = (ERTPCValueType)OutputValueType;
    params.RTPC = (FString)RTPC;
    params.PlayingID = (int32_t)PlayingID;
    ProcessEvent(func, &params);
    Value = params.Value;
    OutputValueType = params.OutputValueType;
}
void UAkGameObject::PostAssociatedAkEventAsync(UObject* WorldContextObject, int32_t CallbackMask) {}
void UAkGameObject::PostAssociatedAkEvent(int32_t CallbackMask) {}
void UAkGameObject::PostAkEventAsync(UObject* WorldContextObject, UAkAudioEvent* AkEvent, int32_t& PlayingID, int32_t CallbackMask) {}
void UAkGameObject::PostAkEvent(UAkAudioEvent* AkEvent, int32_t CallbackMask) {}
