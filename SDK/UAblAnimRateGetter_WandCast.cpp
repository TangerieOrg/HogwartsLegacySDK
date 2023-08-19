#include "UAblAnimRateGetter.hpp"
#include "UAblAnimRateGetter_WandCast.hpp"
UAblAnimRateGetter_WandCast* UAblAnimRateGetter_WandCast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimRateGetter_WandCast");
    return (UAblAnimRateGetter_WandCast*)res;
}
