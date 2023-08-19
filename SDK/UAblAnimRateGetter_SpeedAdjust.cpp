#include "FVector2D.hpp"
#include "UAblAnimRateGetter.hpp"
#include "UAblAnimRateGetter_SpeedAdjust.hpp"
UAblAnimRateGetter_SpeedAdjust* UAblAnimRateGetter_SpeedAdjust::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimRateGetter_SpeedAdjust");
    return (UAblAnimRateGetter_SpeedAdjust*)res;
}
