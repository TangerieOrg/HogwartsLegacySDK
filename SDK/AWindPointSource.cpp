#include "AInfo.hpp"
#include "AWindPointSource.hpp"
#include "UWindPointSourceComponent.hpp"
AWindPointSource* AWindPointSource::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindPointSource");
    return (AWindPointSource*)res;
}
