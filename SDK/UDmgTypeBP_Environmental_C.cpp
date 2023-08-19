#include "UDamageType.hpp"
#include "UDmgTypeBP_Environmental_C.hpp"
UDmgTypeBP_Environmental_C* UDmgTypeBP_Environmental_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Engine/EngineDamageTypes/DmgTypeBP_Environmental.DmgTypeBP_Environmental_C");
    return (UDmgTypeBP_Environmental_C*)res;
}
