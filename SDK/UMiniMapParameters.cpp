#include "FVector2D.hpp"
#include "UDataAsset.hpp"
#include "UMiniMapParameters.hpp"
UMiniMapParameters* UMiniMapParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MiniMapParameters");
    return (UMiniMapParameters*)res;
}
