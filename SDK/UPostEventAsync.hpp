#pragma once
#include <cstdint>
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
class UAkAudioEvent;
class AActor;
#pragma pack(push, 1)
class UPostEventAsync : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x70];
    static UPostEventAsync* StaticClass();
    static void PostEventAsync(UObject* WorldContextObject, UAkAudioEvent* AkEvent, AActor* Actor, int32_t CallbackMask);
    void PollPostEventFuture();
}; // Size: 0xa0
#pragma pack(pop)
