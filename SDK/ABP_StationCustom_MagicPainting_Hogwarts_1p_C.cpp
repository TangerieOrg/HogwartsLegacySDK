#include "ABP_StationCustom_MagicPainting_1p_C.hpp"
#include "ABP_StationCustom_MagicPainting_Hogwarts_1p_C.hpp"
ABP_StationCustom_MagicPainting_Hogwarts_1p_C* ABP_StationCustom_MagicPainting_Hogwarts_1p_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Stations/Custom/Neighborhood/New_Stations/BP_StationCustom_MagicPainting_Hogwarts_1p.BP_StationCustom_MagicPainting_Hogwarts_1p_C");
    return (ABP_StationCustom_MagicPainting_Hogwarts_1p_C*)res;
}
