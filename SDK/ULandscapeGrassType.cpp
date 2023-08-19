#include "FGrassVariety.hpp"
#include "ULandscapeGrassType.hpp"
#include "UObject.hpp"
#include "UStaticMesh.hpp"
ULandscapeGrassType* ULandscapeGrassType::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeGrassType");
    return (ULandscapeGrassType*)res;
}
