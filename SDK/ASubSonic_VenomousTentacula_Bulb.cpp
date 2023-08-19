#include "AMunitionType_SubsonicSpell.hpp"
#include "ASubSonic_VenomousTentacula_Bulb.hpp"
#include "UFunction.hpp"
ASubSonic_VenomousTentacula_Bulb* ASubSonic_VenomousTentacula_Bulb::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SubSonic_VenomousTentacula_Bulb");
    return (ASubSonic_VenomousTentacula_Bulb*)res;
}
void ASubSonic_VenomousTentacula_Bulb::SetupProjectile() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SubSonic_VenomousTentacula_Bulb.SetupProjectile"));
    struct Params_SetupProjectile {
    }; // Size: 0x0
    Params_SetupProjectile params{};
    ProcessEvent(func, &params);
}
