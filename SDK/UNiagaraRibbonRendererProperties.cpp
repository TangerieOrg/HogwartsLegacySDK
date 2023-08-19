#include "ENiagaraRibbonDrawDirection.hpp"
#include "ENiagaraRibbonFacingMode.hpp"
#include "ENiagaraRibbonShapeMode.hpp"
#include "ENiagaraRibbonTessellationMode.hpp"
#include "FNiagaraMaterialAttributeBinding.hpp"
#include "FNiagaraRibbonShapeCustomVertex.hpp"
#include "FNiagaraRibbonUVSettings.hpp"
#include "FNiagaraUserParameterBinding.hpp"
#include "FNiagaraVariableAttributeBinding.hpp"
#include "UMaterialInterface.hpp"
#include "UNiagaraRendererProperties.hpp"
#include "UNiagaraRibbonRendererProperties.hpp"
UNiagaraRibbonRendererProperties* UNiagaraRibbonRendererProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraRibbonRendererProperties");
    return (UNiagaraRibbonRendererProperties*)res;
}
