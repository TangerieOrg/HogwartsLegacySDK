#include "ABP_TransfigurationMovementStyle_Base_C.hpp"
#include "ATransfigurationMovementStyleBase.hpp"
#include "USceneComponent.hpp"
ABP_TransfigurationMovementStyle_Base_C* ABP_TransfigurationMovementStyle_Base_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/Transformation/MovementStyles/BP_TransfigurationMovementStyle_Base.BP_TransfigurationMovementStyle_Base_C");
    return (ABP_TransfigurationMovementStyle_Base_C*)res;
}
