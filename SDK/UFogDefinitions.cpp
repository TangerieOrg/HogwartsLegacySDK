#include "FExpHeightFogParameters.hpp"
#include "UDataAsset.hpp"
#include "UFogDefinitions.hpp"
#include "UFogParams.hpp"
#include "UMaterialParameterCollection.hpp"
#include "UNiagaraParameterCollection.hpp"
UFogDefinitions* UFogDefinitions::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.FogDefinitions");
    return (UFogDefinitions*)res;
}
