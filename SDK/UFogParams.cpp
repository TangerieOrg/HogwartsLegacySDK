#include "UFogParams.hpp"
#include "UObject.hpp"
UFogParams* UFogParams::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.FogParams");
    return (UFogParams*)res;
}
