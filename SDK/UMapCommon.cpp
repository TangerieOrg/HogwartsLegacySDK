#include "UMapCommon.hpp"
#include "UObject.hpp"
UMapCommon* UMapCommon::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapCommon");
    return (UMapCommon*)res;
}
