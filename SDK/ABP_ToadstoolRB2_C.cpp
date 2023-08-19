#include "ABP_ToadstoolRB1_C.hpp"
#include "ABP_ToadstoolRB2_C.hpp"
ABP_ToadstoolRB2_C* ABP_ToadstoolRB2_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/RiggedObjects/Environments/Forageables/LeapingToadstools/Mesh/BP_ToadstoolRB2.BP_ToadstoolRB2_C");
    return (ABP_ToadstoolRB2_C*)res;
}
