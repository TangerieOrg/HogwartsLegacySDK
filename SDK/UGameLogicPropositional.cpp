#include "UGameLogicPropositional.hpp"
#include "UGameLogicSentence.hpp"
UGameLogicPropositional* UGameLogicPropositional::StaticClass() {
    static auto res = find_uobject("Class /Script/GameLogicRuntime.GameLogicPropositional");
    return (UGameLogicPropositional*)res;
}
