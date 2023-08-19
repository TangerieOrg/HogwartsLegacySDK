#include "FSlateBrush.hpp"
#include "UObject.hpp"
#include "USlateBrushAsset.hpp"
USlateBrushAsset* USlateBrushAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SlateBrushAsset");
    return (USlateBrushAsset*)res;
}
