#include "UDamageType.hpp"
#include "UObject.hpp"
UDamageType* UDamageType::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DamageType");
    return (UDamageType*)res;
}
