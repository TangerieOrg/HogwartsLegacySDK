#include "UFieldNodeBase.hpp"
#include "UFieldNodeInt.hpp"
UFieldNodeInt* UFieldNodeInt::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.FieldNodeInt");
    return (UFieldNodeInt*)res;
}
