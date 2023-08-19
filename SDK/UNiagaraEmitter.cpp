#include "EEmitterCullingPriority.hpp"
#include "ENiagaraSimTarget.hpp"
#include "EParticleAllocationMode.hpp"
#include "FBox.hpp"
#include "FNiagaraDetailsLevelScaleOverrides.hpp"
#include "FNiagaraEmitterScalabilityOverrides.hpp"
#include "FNiagaraEmitterScriptProperties.hpp"
#include "FNiagaraEventScriptProperties.hpp"
#include "FNiagaraPlatformSet.hpp"
#include "UNiagaraEmitter.hpp"
#include "UNiagaraRendererProperties.hpp"
#include "UNiagaraScript.hpp"
#include "UNiagaraSimulationStageBase.hpp"
#include "UObject.hpp"
UNiagaraEmitter* UNiagaraEmitter::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraEmitter");
    return (UNiagaraEmitter*)res;
}
