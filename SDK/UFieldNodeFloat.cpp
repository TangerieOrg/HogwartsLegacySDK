#include "UFieldNodeBase.hpp"
#include "UFieldNodeFloat.hpp"
UFieldNodeFloat* UFieldNodeFloat::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.FieldNodeFloat");
    return (UFieldNodeFloat*)res;
}
