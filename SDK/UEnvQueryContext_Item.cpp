#include "UEnvQueryContext.hpp"
#include "UEnvQueryContext_Item.hpp"
UEnvQueryContext_Item* UEnvQueryContext_Item::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.EnvQueryContext_Item");
    return (UEnvQueryContext_Item*)res;
}
