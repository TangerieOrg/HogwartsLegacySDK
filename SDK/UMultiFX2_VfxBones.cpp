#include "UMultiFX2_Vfx.hpp"
#include "UMultiFX2_VfxBones.hpp"
UMultiFX2_VfxBones* UMultiFX2_VfxBones::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MultiFX2_VfxBones");
    return (UMultiFX2_VfxBones*)res;
}
