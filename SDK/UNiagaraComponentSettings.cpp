#include "UNiagaraComponentSettings.hpp"
#include "UObject.hpp"
UNiagaraComponentSettings* UNiagaraComponentSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraComponentSettings");
    return (UNiagaraComponentSettings*)res;
}
