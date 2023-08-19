#include "UObject.hpp"
#include "UUsdTransactor.hpp"
UUsdTransactor* UUsdTransactor::StaticClass() {
    static auto res = find_uobject("Class /Script/USDStage.UsdTransactor");
    return (UUsdTransactor*)res;
}
