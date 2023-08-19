#include "UDuelTechnique.hpp"
#include "UDuelTechnique_Deflect.hpp"
UDuelTechnique_Deflect* UDuelTechnique_Deflect::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique_Deflect");
    return (UDuelTechnique_Deflect*)res;
}
