#include "AActor.hpp"
#include "AStreamingPlaceholderBase.hpp"
#include "AStreamingPlaceholderFixedUID.hpp"
#include "FSpawnSelectInfo.hpp"
#include "UFunction.hpp"
AStreamingPlaceholderFixedUID* AStreamingPlaceholderFixedUID::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.StreamingPlaceholderFixedUID");
    return (AStreamingPlaceholderFixedUID*)res;
}
AActor* AStreamingPlaceholderFixedUID::GetSpawnedActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.StreamingPlaceholderFixedUID.GetSpawnedActor"));
    struct Params_GetSpawnedActor {
        AActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetSpawnedActor params{};
    ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
