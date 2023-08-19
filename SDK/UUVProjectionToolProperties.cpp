#include "EUVProjectionMethod.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UInteractiveToolPropertySet.hpp"
#include "UUVProjectionToolProperties.hpp"
UUVProjectionToolProperties* UUVProjectionToolProperties::StaticClass() {
    static auto res = find_uobject("Class /Script/MeshModelingTools.UVProjectionToolProperties");
    return (UUVProjectionToolProperties*)res;
}
