#include "UCogGroupLookAtPoint.hpp"
#include "UCogGroupLookAtPoint_Custom.hpp"
UCogGroupLookAtPoint_Custom* UCogGroupLookAtPoint_Custom::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.CogGroupLookAtPoint_Custom");
    return (UCogGroupLookAtPoint_Custom*)res;
}
