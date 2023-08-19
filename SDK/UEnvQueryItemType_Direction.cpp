#include "UEnvQueryItemType_Direction.hpp"
#include "UEnvQueryItemType_VectorBase.hpp"
UEnvQueryItemType_Direction* UEnvQueryItemType_Direction::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryItemType_Direction");
    return (UEnvQueryItemType_Direction*)res;
}
