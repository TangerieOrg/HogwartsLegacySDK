#include "AInfo.hpp"
#include "AWindDeflector.hpp"
#include "UWindDeflectorComponent.hpp"
AWindDeflector* AWindDeflector::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindDeflector");
    return (AWindDeflector*)res;
}
