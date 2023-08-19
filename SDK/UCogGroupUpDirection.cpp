#include "UCogGroupUpDirection.hpp"
#include "UObject.hpp"
UCogGroupUpDirection* UCogGroupUpDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupUpDirection");
    return (UCogGroupUpDirection*)res;
}
