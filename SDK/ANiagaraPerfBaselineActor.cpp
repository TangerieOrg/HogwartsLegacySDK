#include "AActor.hpp"
#include "ANiagaraPerfBaselineActor.hpp"
#include "UNiagaraBaselineController.hpp"
#include "UTextRenderComponent.hpp"
ANiagaraPerfBaselineActor* ANiagaraPerfBaselineActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraPerfBaselineActor");
    return (ANiagaraPerfBaselineActor*)res;
}
