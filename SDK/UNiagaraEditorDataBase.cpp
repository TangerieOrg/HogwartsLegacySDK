#include "UNiagaraEditorDataBase.hpp"
#include "UObject.hpp"
UNiagaraEditorDataBase* UNiagaraEditorDataBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Niagara.NiagaraEditorDataBase");
    return (UNiagaraEditorDataBase*)res;
}
