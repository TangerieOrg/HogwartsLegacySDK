#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTier4ActorCache.hpp"
UTier4ActorCache* UTier4ActorCache::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Tier4ActorCache");
    return (UTier4ActorCache*)res;
}
UTier4ActorCache* UTier4ActorCache::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tier4ActorCache.Get"));
    struct Params_Get {
        UTier4ActorCache* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTier4ActorCache*)params.ReturnValue;
}
void UTier4ActorCache::SetTempMaxAllowedT4(float InTempMax) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tier4ActorCache.SetTempMaxAllowedT4"));
    struct Params_SetTempMaxAllowedT4 {
        float InTempMax; // 0x0
    }; // Size: 0x4
    Params_SetTempMaxAllowedT4 params{};
    params.InTempMax = (float)InTempMax;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTier4ActorCache::ClearTempMaxAllowedT4() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tier4ActorCache.ClearTempMaxAllowedT4"));
    struct Params_ClearTempMaxAllowedT4 {
    }; // Size: 0x0
    Params_ClearTempMaxAllowedT4 params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
