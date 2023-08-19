#include "FMaterialSwapParameters.hpp"
#include "UNiagaraMaterialDriverComponent.hpp"
#include "UNiagaraSwapParamsDriverComponent.hpp"
UNiagaraSwapParamsDriverComponent* UNiagaraSwapParamsDriverComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/SkinFX.NiagaraSwapParamsDriverComponent");
    return (UNiagaraSwapParamsDriverComponent*)res;
}
