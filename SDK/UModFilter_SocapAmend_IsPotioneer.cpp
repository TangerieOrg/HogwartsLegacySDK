#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_IsPotioneer.hpp"
UModFilter_SocapAmend_IsPotioneer* UModFilter_SocapAmend_IsPotioneer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_IsPotioneer");
    return (UModFilter_SocapAmend_IsPotioneer*)res;
}
