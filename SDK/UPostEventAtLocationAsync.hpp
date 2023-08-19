#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UBlueprintAsyncActionBase.hpp"
class UObject;
class UAkAudioEvent;
#pragma pack(push, 1)
class UPostEventAtLocationAsync : public UBlueprintAsyncActionBase {
public:
    char pad_30[0x50];
    static UPostEventAtLocationAsync* StaticClass();
    static UPostEventAtLocationAsync* PostEventAtLocationAsync(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation);
    void PollPostEventFuture();
}; // Size: 0x80
#pragma pack(pop)
