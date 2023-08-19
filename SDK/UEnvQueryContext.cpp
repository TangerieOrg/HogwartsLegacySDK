#include "UEnvQueryContext.hpp"
#include "UObject.hpp"
UEnvQueryContext* UEnvQueryContext::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryContext");
    return (UEnvQueryContext*)res;
}
