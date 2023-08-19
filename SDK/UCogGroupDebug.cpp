#include "FColor.hpp"
#include "UCogGroupDebug.hpp"
#include "UObject.hpp"
UCogGroupDebug* UCogGroupDebug::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupDebug");
    return (UCogGroupDebug*)res;
}
