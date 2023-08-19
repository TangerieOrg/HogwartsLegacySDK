#include "ABP_SkinFX_ApparateHouseElves_C.hpp"
#include "ABP_SkinFX_Apparate_C.hpp"
ABP_SkinFX_ApparateHouseElves_C* ABP_SkinFX_ApparateHouseElves_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ApparateHouseElves.BP_SkinFX_ApparateHouseElves_C");
    return (ABP_SkinFX_ApparateHouseElves_C*)res;
}
