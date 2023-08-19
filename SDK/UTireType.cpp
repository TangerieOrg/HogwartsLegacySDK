#include "UDataAsset.hpp"
#include "UTireType.hpp"
UTireType* UTireType::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TireType");
    return (UTireType*)res;
}
