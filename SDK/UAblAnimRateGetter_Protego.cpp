#include "UAblAnimRateGetter.hpp"
#include "UAblAnimRateGetter_Protego.hpp"
UAblAnimRateGetter_Protego* UAblAnimRateGetter_Protego::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimRateGetter_Protego");
    return (UAblAnimRateGetter_Protego*)res;
}
