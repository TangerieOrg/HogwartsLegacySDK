#include "AActor.hpp"
#include "UAkAudioEvent.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPostEventAsync.hpp"
UPostEventAsync* UPostEventAsync::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.PostEventAsync");
    return (UPostEventAsync*)res;
}
void UPostEventAsync::PostEventAsync(UObject* WorldContextObject, UAkAudioEvent* AkEvent, AActor* Actor, int32_t CallbackMask) {}
void UPostEventAsync::PollPostEventFuture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.PostEventAsync.PollPostEventFuture"));
    struct Params_PollPostEventFuture {
    }; // Size: 0x0
    Params_PollPostEventFuture params{};
    ProcessEvent(func, &params);
}
