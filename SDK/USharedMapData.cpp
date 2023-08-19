#include "FLinearColor.hpp"
#include "UDataAsset.hpp"
#include "USharedMapData.hpp"
USharedMapData* USharedMapData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SharedMapData");
    return (USharedMapData*)res;
}
