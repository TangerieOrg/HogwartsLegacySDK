#include "UCogGroupFocusDirection.hpp"
#include "UObject.hpp"
UCogGroupFocusDirection* UCogGroupFocusDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupFocusDirection");
    return (UCogGroupFocusDirection*)res;
}
