#include "UAblAnimRateGetter.hpp"
#include "UAblAnimRateGetter_Strafe.hpp"
UAblAnimRateGetter_Strafe* UAblAnimRateGetter_Strafe::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimRateGetter_Strafe");
    return (UAblAnimRateGetter_Strafe*)res;
}
