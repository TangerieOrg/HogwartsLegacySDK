#include "UAblAnimRateGetter.hpp"
#include "UAblAnimRateGetter_Random.hpp"
UAblAnimRateGetter_Random* UAblAnimRateGetter_Random::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAnimRateGetter_Random");
    return (UAblAnimRateGetter_Random*)res;
}
