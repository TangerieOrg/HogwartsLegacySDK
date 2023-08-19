#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class UAkGameObject;
class AActor;
#pragma pack(push, 1)
class UAvaAudioCachedRTPC : public UBlueprintFunctionLibrary {
public:
    static UAvaAudioCachedRTPC* StaticClass();
    static void AvaAudioSetGlobalState(FName StateName, FName StateValue, bool& bSuccess, bool bForce);
    static void AvaAudioSetGlobalRTPC(FName RTPCName, float RTPCValue, bool& bSuccess, int32_t InterpolationTimeMilliseconds, float Threshold, bool bForce, bool bHoldMax);
    static void AvaAudioSetGameObjectRTPC(UAkGameObject* AudioObject, FName RTPCName, float RTPCValue, bool& bSuccess, int32_t InterpolationTimeMilliseconds, float Threshold, bool bForce);
    static void AvaAudioSetActorRTPC(AActor* Actor, FName RTPCName, float RTPCValue, bool& bSuccess, int32_t InterpolationTimeMilliseconds, float Threshold, bool bForce);
    static void AvaAudioResetGlobalState(FName StateName);
    static void AvaAudioResetGlobalRTPC(FName RTPCName);
    static void AvaAudioResetGameObjectRTPC(UAkGameObject* AudioObject, FName RTPCName);
    static void AvaAudioResetActorRTPC(AActor* Actor, FName RTPCName);
    static void AvaAudioGetGlobalState(FName StateName, bool& bSuccess, FName& StateValue);
    static void AvaAudioGetGlobalRTPC(FName RTPCName, bool& bSuccess, float& RTPCValue);
    static void AvaAudioGetGameObjectRTPC(UAkGameObject* AudioObject, FName RTPCName, bool& bSuccess, float& RTPCValue);
    static void AvaAudioGetActorRTPC(AActor* Actor, FName RTPCName, bool& bSuccess, float& RTPCValue);
}; // Size: 0x28
#pragma pack(pop)
