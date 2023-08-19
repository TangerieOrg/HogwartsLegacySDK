#include "UActorComponent.hpp"
#include "UFieldSystemMetaData.hpp"
UFieldSystemMetaData* UFieldSystemMetaData::StaticClass() {
    static auto res = find_uobject("Class /Script/FieldSystemEngine.FieldSystemMetaData");
    return (UFieldSystemMetaData*)res;
}
