#include "FAIDataProviderFloatValue.hpp"
#include "UClass.hpp"
#include "UEnvQueryGenerator_Cone.hpp"
#include "UEnvQueryGenerator_ProjectedPoints.hpp"
UEnvQueryGenerator_Cone* UEnvQueryGenerator_Cone::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryGenerator_Cone");
    return (UEnvQueryGenerator_Cone*)res;
}
