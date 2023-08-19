#include "AInfo.hpp"
#include "AWindDirectionalSource.hpp"
#include "UWindDirectionalSourceComponent.hpp"
AWindDirectionalSource* AWindDirectionalSource::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindDirectionalSource");
    return (AWindDirectionalSource*)res;
}
