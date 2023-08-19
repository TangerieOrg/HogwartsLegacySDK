#include "FSocketPreview.hpp"
#include "UDataAsset.hpp"
#include "UWorldEventSocketPreview.hpp"
UWorldEventSocketPreview* UWorldEventSocketPreview::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventSocketPreview");
    return (UWorldEventSocketPreview*)res;
}
