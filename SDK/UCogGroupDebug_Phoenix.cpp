#include "UCogGroupDebug.hpp"
#include "UCogGroupDebug_Phoenix.hpp"
UCogGroupDebug_Phoenix* UCogGroupDebug_Phoenix::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CogGroupDebug_Phoenix");
    return (UCogGroupDebug_Phoenix*)res;
}
