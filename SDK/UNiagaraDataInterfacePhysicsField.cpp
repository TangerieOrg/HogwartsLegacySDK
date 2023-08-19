#include "UNiagaraDataInterface.hpp"
#include "UNiagaraDataInterfacePhysicsField.hpp"
UNiagaraDataInterfacePhysicsField* UNiagaraDataInterfacePhysicsField::StaticClass() {
    static auto res = find_uobject("Class /Script/ChaosNiagara.NiagaraDataInterfacePhysicsField");
    return (UNiagaraDataInterfacePhysicsField*)res;
}
