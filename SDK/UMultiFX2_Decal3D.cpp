#include "UClass.hpp"
#include "UMultiFX2_Decal3D.hpp"
#include "UMultiFX2_Filtered.hpp"
UMultiFX2_Decal3D* UMultiFX2_Decal3D::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_Decal3D");
    return (UMultiFX2_Decal3D*)res;
}
