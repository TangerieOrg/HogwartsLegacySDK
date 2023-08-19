#include "FNiagaraVariableAttributeBinding.hpp"
#include "FVector.hpp"
#include "UNiagaraLightRendererProperties.hpp"
#include "UNiagaraRendererProperties.hpp"
UNiagaraLightRendererProperties* UNiagaraLightRendererProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraLightRendererProperties");
    return (UNiagaraLightRendererProperties*)res;
}
