#include "UEnvQueryInstanceBlueprintWrapper.hpp"
#include "UEnvQueryInstanceBlueprintWrapperEx.hpp"
UEnvQueryInstanceBlueprintWrapperEx* UEnvQueryInstanceBlueprintWrapperEx::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnvQueryInstanceBlueprintWrapperEx");
    return (UEnvQueryInstanceBlueprintWrapperEx*)res;
}
