#include "FSlateMeshVertex.hpp"
#include "FVector2D.hpp"
#include "UMaterialInterface.hpp"
#include "UObject.hpp"
#include "USlateVectorArtData.hpp"
USlateVectorArtData* USlateVectorArtData::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.SlateVectorArtData");
    return (USlateVectorArtData*)res;
}
