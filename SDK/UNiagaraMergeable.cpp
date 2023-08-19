#include "UNiagaraMergeable.hpp"
#include "UObject.hpp"
UNiagaraMergeable* UNiagaraMergeable::StaticClass() {
    static auto res = find_uobject("Class /Script/NiagaraCore.NiagaraMergeable");
    return (UNiagaraMergeable*)res;
}
