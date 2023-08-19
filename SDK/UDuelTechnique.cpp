#include "UDuelTechnique.hpp"
#include "UDuelTechniqueState.hpp"
#include "UDuelTechniquesController.hpp"
#include "UObject.hpp"
UDuelTechnique* UDuelTechnique::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DuelTechnique");
    return (UDuelTechnique*)res;
}
