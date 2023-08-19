#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAkAudioEvent.hpp"
#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPostEventAtLocationAsync.hpp"
UPostEventAtLocationAsync* UPostEventAtLocationAsync::StaticClass() {
    static auto res = find_uobject("Class /Script/AkAudio.PostEventAtLocationAsync");
    return (UPostEventAtLocationAsync*)res;
}
UPostEventAtLocationAsync* UPostEventAtLocationAsync::PostEventAtLocationAsync(UObject* WorldContextObject, UAkAudioEvent* AkEvent, FVector Location, FRotator Orientation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.PostEventAtLocationAsync.PostEventAtLocationAsync"));
    struct Params_PostEventAtLocationAsync {
        UObject* WorldContextObject; // 0x0
        UAkAudioEvent* AkEvent; // 0x8
        FVector Location; // 0x10
        FRotator Orientation; // 0x1c
        UPostEventAtLocationAsync* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_PostEventAtLocationAsync params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.AkEvent = (UAkAudioEvent*)AkEvent;
    params.Location = (FVector)Location;
    params.Orientation = (FRotator)Orientation;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UPostEventAtLocationAsync*)params.ReturnValue;
}
void UPostEventAtLocationAsync::PollPostEventFuture() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AkAudio.PostEventAtLocationAsync.PollPostEventFuture"));
    struct Params_PollPostEventFuture {
    }; // Size: 0x0
    Params_PollPostEventFuture params{};
    ProcessEvent(func, &params);
}
