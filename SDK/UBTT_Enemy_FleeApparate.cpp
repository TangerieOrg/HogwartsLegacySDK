#include "UBTT_Enemy_FleeApparate.hpp"
#include "UBTTaskNode.hpp"
UBTT_Enemy_FleeApparate* UBTT_Enemy_FleeApparate::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTT_Enemy_FleeApparate");
    return (UBTT_Enemy_FleeApparate*)res;
}
