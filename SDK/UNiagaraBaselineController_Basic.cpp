#include "UNiagaraBaselineController.hpp"
#include "UNiagaraBaselineController_Basic.hpp"
#include "UNiagaraComponent.hpp"
UNiagaraBaselineController_Basic* UNiagaraBaselineController_Basic::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraBaselineController_Basic");
    return (UNiagaraBaselineController_Basic*)res;
}
