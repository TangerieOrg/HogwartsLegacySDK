#include "ABP_ToadstoolRB1_C.hpp"
#include "ABP_ToadstoolRB3_C.hpp"
ABP_ToadstoolRB3_C* ABP_ToadstoolRB3_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/RiggedObjects/Environments/Forageables/LeapingToadstools/Mesh/BP_ToadstoolRB3.BP_ToadstoolRB3_C");
    return (ABP_ToadstoolRB3_C*)res;
}
