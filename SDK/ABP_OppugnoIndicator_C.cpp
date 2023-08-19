#include "ABP_OppugnoIndicator_C.hpp"
#include "AOnScreenObjectIndicator.hpp"
ABP_OppugnoIndicator_C* ABP_OppugnoIndicator_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/Player/BP_OppugnoIndicator.BP_OppugnoIndicator_C");
    return (ABP_OppugnoIndicator_C*)res;
}
