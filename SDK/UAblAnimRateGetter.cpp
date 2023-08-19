#include "UAblAnimRateGetter.hpp"
#include "UObject.hpp"
UAblAnimRateGetter* UAblAnimRateGetter::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAnimRateGetter");
    return (UAblAnimRateGetter*)res;
}
