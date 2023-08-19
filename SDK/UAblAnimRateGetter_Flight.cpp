#include "UAblAnimRateGetter.hpp"
#include "UAblAnimRateGetter_Flight.hpp"
UAblAnimRateGetter_Flight* UAblAnimRateGetter_Flight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimRateGetter_Flight");
    return (UAblAnimRateGetter_Flight*)res;
}
