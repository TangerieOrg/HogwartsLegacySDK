#include "UDefault__Class.hpp"
UDefault__Class* UDefault__Class::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.Default__Class");
    return (UDefault__Class*)res;
}
