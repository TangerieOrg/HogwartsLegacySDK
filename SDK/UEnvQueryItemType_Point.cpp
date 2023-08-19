#include "UEnvQueryItemType_Point.hpp"
#include "UEnvQueryItemType_VectorBase.hpp"
UEnvQueryItemType_Point* UEnvQueryItemType_Point::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryItemType_Point");
    return (UEnvQueryItemType_Point*)res;
}
