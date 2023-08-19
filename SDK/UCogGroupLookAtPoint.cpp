#include "UCogGroupLookAtPoint.hpp"
#include "UObject.hpp"
UCogGroupLookAtPoint* UCogGroupLookAtPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupLookAtPoint");
    return (UCogGroupLookAtPoint*)res;
}
