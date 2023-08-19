#include "UDeflectData.hpp"
#include "UObject.hpp"
UDeflectData* UDeflectData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DeflectData");
    return (UDeflectData*)res;
}
