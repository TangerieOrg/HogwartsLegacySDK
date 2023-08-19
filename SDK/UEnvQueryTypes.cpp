#include "UEnvQueryTypes.hpp"
#include "UObject.hpp"
UEnvQueryTypes* UEnvQueryTypes::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryTypes");
    return (UEnvQueryTypes*)res;
}
