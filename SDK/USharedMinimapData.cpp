#include "FLinearColor.hpp"
#include "UDataAsset.hpp"
#include "USharedMinimapData.hpp"
USharedMinimapData* USharedMinimapData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SharedMinimapData");
    return (USharedMinimapData*)res;
}
