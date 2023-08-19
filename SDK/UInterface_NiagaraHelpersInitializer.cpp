#include "UInterface.hpp"
#include "UInterface_NiagaraHelpersInitializer.hpp"
UInterface_NiagaraHelpersInitializer* UInterface_NiagaraHelpersInitializer::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraHelpers.Interface_NiagaraHelpersInitializer");
    return (UInterface_NiagaraHelpersInitializer*)res;
}
