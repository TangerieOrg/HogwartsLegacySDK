#include "EValueComparison.hpp"
#include "SocialCapitalStatusIDs.hpp"
#include "UMODFilter_SocapAmend_Base.hpp"
#include "UModFilter_SocapAmend_SocialCapitalStatus.hpp"
UModFilter_SocapAmend_SocialCapitalStatus* UModFilter_SocapAmend_SocialCapitalStatus::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ModFilter_SocapAmend_SocialCapitalStatus");
    return (UModFilter_SocapAmend_SocialCapitalStatus*)res;
}
