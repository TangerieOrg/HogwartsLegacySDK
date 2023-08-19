#include "EUVLayoutPreviewSide.hpp"
#include "FVector2D.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UUVLayoutPreviewProperties.hpp"
UUVLayoutPreviewProperties* UUVLayoutPreviewProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/ModelingComponents.UVLayoutPreviewProperties");
    return (UUVLayoutPreviewProperties*)res;
}
