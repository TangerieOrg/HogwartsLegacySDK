#include "UAnimDebugInfo.hpp"
#include "UInterface.hpp"
UAnimDebugInfo* UAnimDebugInfo::StaticClass() {
    static auto res = find_uobject("Class /Script/AvaAnimation.AnimDebugInfo");
    return (UAnimDebugInfo*)res;
}
