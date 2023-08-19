#include "AActor.hpp"
#include "AWeatherStormFXBase.hpp"
#include "FWeatherStormState.hpp"
#include "UFunction.hpp"
#include "UWeatherStorm.hpp"
AWeatherStormFXBase* AWeatherStormFXBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WeatherStormFXBase");
    return (AWeatherStormFXBase*)res;
}
void AWeatherStormFXBase::OnStormStart(FWeatherStormState StormState) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherStormFXBase.OnStormStart"));
    struct Params_OnStormStart {
        FWeatherStormState StormState; // 0x0
    }; // Size: 0x20
    Params_OnStormStart params{};
    params.StormState = (FWeatherStormState)StormState;
    ProcessEvent(func, &params);
}
void AWeatherStormFXBase::OnStormEnd() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherStormFXBase.OnStormEnd"));
    struct Params_OnStormEnd {
    }; // Size: 0x0
    Params_OnStormEnd params{};
    ProcessEvent(func, &params);
}
void AWeatherStormFXBase::IsStorming(bool& bStorming) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherStormFXBase.IsStorming"));
    struct Params_IsStorming {
        bool bStorming; // 0x0
    }; // Size: 0x1
    Params_IsStorming params{};
    params.bStorming = (bool)bStorming;
    ProcessEvent(func, &params);
    bStorming = params.bStorming;
}
void AWeatherStormFXBase::GetStormState(FWeatherStormState& StormState, bool& bStorming) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Weather.WeatherStormFXBase.GetStormState"));
    struct Params_GetStormState {
        FWeatherStormState StormState; // 0x0
        bool bStorming; // 0x20
    }; // Size: 0x21
    Params_GetStormState params{};
    params.StormState = (FWeatherStormState)StormState;
    params.bStorming = (bool)bStorming;
    ProcessEvent(func, &params);
    StormState = params.StormState;
    bStorming = params.bStorming;
}
