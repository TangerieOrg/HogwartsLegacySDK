#include "AInfo.hpp"
#include "AWindModulate.hpp"
#include "UWindModulateComponent.hpp"
AWindModulate* AWindModulate::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindModulate");
    return (AWindModulate*)res;
}
