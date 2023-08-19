#include "UNiagaraConvertInPlaceUtilityBase.hpp"
#include "UObject.hpp"
UNiagaraConvertInPlaceUtilityBase* UNiagaraConvertInPlaceUtilityBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraConvertInPlaceUtilityBase");
    return (UNiagaraConvertInPlaceUtilityBase*)res;
}
