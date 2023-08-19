#include "UDEPRECATED_ClothSharedSimConfigBase.hpp"
#include "UObject.hpp"
UDEPRECATED_ClothSharedSimConfigBase* UDEPRECATED_ClothSharedSimConfigBase::StaticClass() {
    static auto res = find_uobject("Class /Script/ClothingSystemRuntimeInterface.ClothSharedSimConfigBase");
    return (UDEPRECATED_ClothSharedSimConfigBase*)res;
}
