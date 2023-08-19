#include "UCogGroupLookAtPoint.hpp"
#include "UCogGroupLookAtPoint_Ground.hpp"
UCogGroupLookAtPoint_Ground* UCogGroupLookAtPoint_Ground::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupLookAtPoint_Ground");
    return (UCogGroupLookAtPoint_Ground*)res;
}
