#include "UBPI_TwoHandedChest_C.hpp"
#include "UInterface.hpp"
UBPI_TwoHandedChest_C* UBPI_TwoHandedChest_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/Universal/BPI_TwoHandedChest.BPI_TwoHandedChest_C");
    return (UBPI_TwoHandedChest_C*)res;
}
