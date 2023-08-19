#include "ABP_Knowledge_Investigatable_Object_C.hpp"
#include "ABP_Overland_Knowledge_Investigatable_C.hpp"
#include "UFunction.hpp"
ABP_Overland_Knowledge_Investigatable_C* ABP_Overland_Knowledge_Investigatable_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Knowledge/BP_Overland_Knowledge_Investigatable.BP_Overland_Knowledge_Investigatable_C");
    return (ABP_Overland_Knowledge_Investigatable_C*)res;
}
void ABP_Overland_Knowledge_Investigatable_C::UserConstructionScript0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/Knowledge/BP_Overland_Knowledge_Investigatable.BP_Overland_Knowledge_Investigatable_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
    }; // Size: 0x0
    Params_UserConstructionScript params{};
    ProcessEvent(func, &params);
}
