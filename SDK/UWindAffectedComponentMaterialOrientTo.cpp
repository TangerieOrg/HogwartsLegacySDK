#include "FWindAffectedParameters.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UWindAffectedComponentMaterialOrientTo.hpp"
#include "UWindAffectedComponentOrientTo.hpp"
UWindAffectedComponentMaterialOrientTo* UWindAffectedComponentMaterialOrientTo::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindAffectedComponentMaterialOrientTo");
    return (UWindAffectedComponentMaterialOrientTo*)res;
}
