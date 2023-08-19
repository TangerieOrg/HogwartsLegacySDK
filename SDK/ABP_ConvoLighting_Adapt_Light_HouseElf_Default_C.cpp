#include "ABP_ConvoLighting_Adapt_Light_Default_C.hpp"
#include "ABP_ConvoLighting_Adapt_Light_HouseElf_Default_C.hpp"
ABP_ConvoLighting_Adapt_Light_HouseElf_Default_C* ABP_ConvoLighting_Adapt_Light_HouseElf_Default_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Cinematics/Lighting/Procedural/BP_ConvoLighting_Adapt_Light_HouseElf_Default.BP_ConvoLighting_Adapt_Light_HouseElf_Default_C");
    return (ABP_ConvoLighting_Adapt_Light_HouseElf_Default_C*)res;
}
