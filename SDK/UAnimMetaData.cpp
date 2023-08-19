#include "UAnimMetaData.hpp"
#include "UObject.hpp"
UAnimMetaData* UAnimMetaData::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimMetaData");
    return (UAnimMetaData*)res;
}
