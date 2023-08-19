#include "UCogGroupDebug.hpp"
#include "UCogGroupDebug_Default.hpp"
UCogGroupDebug_Default* UCogGroupDebug_Default::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupDebug_Default");
    return (UCogGroupDebug_Default*)res;
}
