#include "FRuntimeFloatCurve.hpp"
#include "UAblAnimRateGetter.hpp"
#include "UAblAnimRateGetter_SyncAnimationPosition.hpp"
#include "UClass.hpp"
UAblAnimRateGetter_SyncAnimationPosition* UAblAnimRateGetter_SyncAnimationPosition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimRateGetter_SyncAnimationPosition");
    return (UAblAnimRateGetter_SyncAnimationPosition*)res;
}
