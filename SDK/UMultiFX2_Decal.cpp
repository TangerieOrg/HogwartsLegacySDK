#include "EDecalOrientation.hpp"
#include "FVector.hpp"
#include "UMaterialInterface.hpp"
#include "UMultiFX2_Decal.hpp"
#include "UMultiFX2_Filtered.hpp"
UMultiFX2_Decal* UMultiFX2_Decal::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_Decal");
    return (UMultiFX2_Decal*)res;
}
