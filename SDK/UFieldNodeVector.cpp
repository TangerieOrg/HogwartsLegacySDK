#include "UFieldNodeBase.hpp"
#include "UFieldNodeVector.hpp"
UFieldNodeVector* UFieldNodeVector::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.FieldNodeVector");
    return (UFieldNodeVector*)res;
}
