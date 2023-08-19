#include "FAIDataProviderFloatValue.hpp"
#include "FAIDataProviderIntValue.hpp"
#include "UClass.hpp"
#include "UEnvQueryGenerator.hpp"
#include "UEnvQueryGenerator_Mercuna_3DRing.hpp"
UEnvQueryGenerator_Mercuna_3DRing* UEnvQueryGenerator_Mercuna_3DRing::StaticClass() {
    static auto res = find_uobject("Class /Script/Mercuna.EnvQueryGenerator_Mercuna_3DRing");
    return (UEnvQueryGenerator_Mercuna_3DRing*)res;
}
