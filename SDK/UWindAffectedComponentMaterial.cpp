#include "FWindAffectedParameters.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UWindAffectedComponentMaterial.hpp"
#include "UWindAffectedComponentRefresh.hpp"
UWindAffectedComponentMaterial* UWindAffectedComponentMaterial::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.WindAffectedComponentMaterial");
    return (UWindAffectedComponentMaterial*)res;
}
