#include "UModFilter_Focus_Base.hpp"
#include "UModFilter_Focus_IsGain.hpp"
UModFilter_Focus_IsGain* UModFilter_Focus_IsGain::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_Focus_IsGain");
    return (UModFilter_Focus_IsGain*)res;
}
