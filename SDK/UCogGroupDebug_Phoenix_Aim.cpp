#include "UCogGroupDebug_Phoenix.hpp"
#include "UCogGroupDebug_Phoenix_Aim.hpp"
UCogGroupDebug_Phoenix_Aim* UCogGroupDebug_Phoenix_Aim::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupDebug_Phoenix_Aim");
    return (UCogGroupDebug_Phoenix_Aim*)res;
}
