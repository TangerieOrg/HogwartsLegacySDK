#include "UInterface.hpp"
#include "UMaterialPermuterUnswapInterface.hpp"
UMaterialPermuterUnswapInterface* UMaterialPermuterUnswapInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterUnswapInterface");
    return (UMaterialPermuterUnswapInterface*)res;
}
