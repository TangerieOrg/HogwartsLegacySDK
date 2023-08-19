#include "UActorComponent.hpp"
#include "UFieldNodeBase.hpp"
UFieldNodeBase* UFieldNodeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.FieldNodeBase");
    return (UFieldNodeBase*)res;
}
