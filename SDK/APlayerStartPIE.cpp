#include "APlayerStart.hpp"
#include "APlayerStartPIE.hpp"
APlayerStartPIE* APlayerStartPIE::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PlayerStartPIE");
    return (APlayerStartPIE*)res;
}
