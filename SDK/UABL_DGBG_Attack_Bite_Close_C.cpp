#include "UABL_DGBG_Attack_Bite_Close_C.hpp"
#include "UAblAbility.hpp"
UABL_DGBG_Attack_Bite_Close_C* UABL_DGBG_Attack_Bite_Close_C::StaticClass() {
    static auto res = find_uobject("AblAbilityBlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/Abilities/ABL_DGBG_Attack_Bite_Close.ABL_DGBG_Attack_Bite_Close_C");
    return (UABL_DGBG_Attack_Bite_Close_C*)res;
}
