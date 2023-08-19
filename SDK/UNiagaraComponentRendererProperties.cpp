#include "FNiagaraComponentPropertyBinding.hpp"
#include "FNiagaraVariableAttributeBinding.hpp"
#include "UClass.hpp"
#include "UNiagaraComponentRendererProperties.hpp"
#include "UNiagaraRendererProperties.hpp"
#include "USceneComponent.hpp"
UNiagaraComponentRendererProperties* UNiagaraComponentRendererProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraComponentRendererProperties");
    return (UNiagaraComponentRendererProperties*)res;
}
