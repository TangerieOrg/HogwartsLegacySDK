#include "UDataAsset.hpp"
#include "UMaterialParameterCollection.hpp"
#include "UNiagaraParameterCollection.hpp"
#include "UWindDefinitions.hpp"
#include "UWindParams.hpp"
UWindDefinitions* UWindDefinitions::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.WindDefinitions");
    return (UWindDefinitions*)res;
}
