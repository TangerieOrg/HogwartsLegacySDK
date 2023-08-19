#include "UNiagaraEditorParametersAdapterBase.hpp"
#include "UObject.hpp"
UNiagaraEditorParametersAdapterBase* UNiagaraEditorParametersAdapterBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraEditorParametersAdapterBase");
    return (UNiagaraEditorParametersAdapterBase*)res;
}
