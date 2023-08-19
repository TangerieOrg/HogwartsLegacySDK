#include "UHandleLinkInfo.hpp"
#include "UObject.hpp"
UHandleLinkInfo* UHandleLinkInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.HandleLinkInfo");
    return (UHandleLinkInfo*)res;
}
