#include "UMetaData.hpp"
#include "UObject.hpp"
UMetaData* UMetaData::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.MetaData");
    return (UMetaData*)res;
}
