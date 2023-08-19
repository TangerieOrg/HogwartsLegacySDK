#include "UAblAnimRateGetter.hpp"
#include "UAblAnimRateGetter_IdleTurnInPlace.hpp"
UAblAnimRateGetter_IdleTurnInPlace* UAblAnimRateGetter_IdleTurnInPlace::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimRateGetter_IdleTurnInPlace");
    return (UAblAnimRateGetter_IdleTurnInPlace*)res;
}
