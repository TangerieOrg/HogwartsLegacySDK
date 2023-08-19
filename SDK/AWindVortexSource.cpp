#include "AInfo.hpp"
#include "AWindVortexSource.hpp"
#include "UWindSourceVortexComponent.hpp"
AWindVortexSource* AWindVortexSource::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindVortexSource");
    return (AWindVortexSource*)res;
}
