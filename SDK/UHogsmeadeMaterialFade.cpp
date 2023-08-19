#include "UHogsmeadeMaterialFade.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
UHogsmeadeMaterialFade* UHogsmeadeMaterialFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HogsmeadeMaterialFade");
    return (UHogsmeadeMaterialFade*)res;
}
